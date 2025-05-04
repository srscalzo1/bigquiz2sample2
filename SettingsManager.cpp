#include "SettingsManager.hpp"
#include "Observer.hpp"

#include <map>
#include <vector>
#include <algorithm>

// Internal implementation class
class SettingsManager::Impl {
public:
    std::map<std::string, std::string> settings;
    std::vector<Observer*> observers;

    void notifyObservers(const std::string& key, const std::string& value) {
        for (auto* obs : observers) {
            if (obs) {
                obs->onSettingChanged(key, value);
            }
        }
    }
};

SettingsManager::SettingsManager() : m_impl(new Impl()) {}
SettingsManager::~SettingsManager() {}

SettingsManager& SettingsManager::getInstance() {
    static SettingsManager instance;
    return instance;
}

void SettingsManager::setSetting(const std::string& key, const std::string& value) {
    m_impl->settings[key] = value;
    m_impl->notifyObservers(key, value);
}

std::string SettingsManager::getSetting(const std::string& key) const {
    auto it = m_impl->settings.find(key);
    return (it != m_impl->settings.end()) ? it->second : "";
}

void SettingsManager::addObserver(Observer* observer) {
    if (observer && std::find(m_impl->observers.begin(), m_impl->observers.end(), observer) == m_impl->observers.end()) {
        m_impl->observers.push_back(observer);
    }
}
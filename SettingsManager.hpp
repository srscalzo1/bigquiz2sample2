#ifndef SETTINGS_MANAGER_HPP
#define SETTINGS_MANAGER_HPP

#include <string>
#include <memory>
#include <vector>

class Observer;

class SettingsManager {
public:
    // Static ensures only one is created
    static SettingsManager& getInstance();

    void setSetting(const std::string& key, const std::string& value);
    std::string getSetting(const std::string& key) const;

    void addObserver(Observer* observer);

private:
    // Pointer to implementation
    class Impl;
    std::unique_ptr<Impl> m_impl;

    SettingsManager(); // Private constructor
    ~SettingsManager();
    SettingsManager(const SettingsManager&) = delete;
    SettingsManager& operator=(const SettingsManager&) = delete;
};

#endif

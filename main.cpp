#include "SettingsManager.hpp"
#include "ModuleX.hpp"
#include "ModuleY.hpp"

int main() {
    auto& settings = SettingsManager::getInstance();
    ModuleX modX;
    ModuleY modY;

    settings.addObserver(&modX);
    settings.addObserver(&modY);

    settings.setSetting("volume", "80");
    settings.setSetting("doNotDisturb", "true");

    return 0;
}

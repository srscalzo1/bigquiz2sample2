#include "ModuleY.hpp"

void ModuleY::onSettingChanged(const std::string& key, const std::string& value) {
    std::cout << "[ModuleY] " << key << " changed to " << value << std::endl;
}

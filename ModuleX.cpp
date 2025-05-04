#include "ModuleX.hpp"
#include <iostream>

void ModuleX::onSettingChanged(const std::string& key, const std::string& value) {
    std::cout << "[ModuleX] " << key << " changed to " << value << std::endl;
}
#ifndef MODULE_Y_HPP
#define MODULE_Y_HPP

#include "Observer.hpp"
#include <iostream>

class ModuleY : public Observer {
public:
    void onSettingChanged(const std::string& key, const std::string& value) override;
};

#endif

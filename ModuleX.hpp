#ifndef MODULE_X_HPP
#define MODULE_X_HPP

#include "Observer.hpp"
#include <iostream>

class ModuleX : public Observer {
public:
    void onSettingChanged(const std::string& key, const std::string& value) override;
};

#endif

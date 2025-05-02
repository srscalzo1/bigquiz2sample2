#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>

class Observer {
public:
    virtual ~Observer() {}
    virtual void onSettingChanged(const std::string& key, const std::string& value) = 0;
};

#endif

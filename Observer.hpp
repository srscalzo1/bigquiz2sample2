#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>

class Observer {
public:
    virtual ~Observer() {}
    // Notifiy the observer when settings are changed
    virtual void onSettingChanged(const std::string& key, const std::string& value) = 0;
};

#endif

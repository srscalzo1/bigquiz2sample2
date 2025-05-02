#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "SettingsManager.hpp"
#include "ModuleX.hpp"
#include "ModuleY.hpp"

TEST_CASE("Singleton instance returns the same object") {
    auto& a = SettingsManager::getInstance();
    auto& b = SettingsManager::getInstance();
    REQUIRE(&a == &b);
}

TEST_CASE("Setting values and retrieving them") {
    auto& settings = SettingsManager::getInstance();
    settings.setSetting("theme", "dark");
    REQUIRE(settings.getSetting("theme") == "dark");
}

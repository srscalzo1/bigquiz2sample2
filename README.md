# BigQuiz2 - Sample2: Notification Settings Manager(75 Minutes)

## Overview

In this program, you will implement a simple system that manages notification settings.

You will use three design patterns:

- **Singleton**: to make sure only one SettingsManager exists.
- **PIMPL**: to hide implementation details inside SettingsManager.
- **Observer**: to notify modules when a setting is changed.

---

## What to Implement

1. **Singleton Pattern**
   - Implement `SettingsManager::getInstance()` so only one instance exists.

2. **PIMPL Idiom**
   - Use `SettingsManager::Impl` to hide all implementation details.

3. **Observer Pattern**
   - Implement `Observer` interface and create `ModuleX` and `ModuleY` that respond when settings change.

---

## Files Included

- `main.cpp`: Example program
- `tests.cpp`: Basic Catch2 tests
- `SettingsManager.*`, `ModuleX.*`, `ModuleY.*`, `Observer.*`
- `CMakeLists.txt`: For building

---

## Requirements

- Use C++11.
- Use all three design patterns properly.
- Your code must compile and pass the tests.

---


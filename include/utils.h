#pragma once
#include <iostream>
#include <windows.h>
#include <vector>
#include <tlhelp32.h>

namespace utils {

    // Returns PID of process
    // show: true - prints all PIDs found
    DWORD getPID(const std::wstring& name, bool show);
}
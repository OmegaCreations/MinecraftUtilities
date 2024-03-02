#pragma once
#include <windows.h>
#include <tlhelp32.h>
#include <vector>

// Suspending and resuming processes
void SuspendProcess(DWORD processId);
void ResumeProcess(DWORD processId);
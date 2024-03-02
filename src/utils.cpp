#include "utils.h"

DWORD utils::getPID(const std::wstring& name, bool show) {

    const std::wstring& targetProcessName = name;
    std::vector<DWORD> pid_arr;

    // get all processes
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    PROCESSENTRY32W entry;
    entry.dwSize = sizeof entry; // number of all processes


    if (!Process32FirstW(snap, &entry)) { //start with the first in snapshot
        return 0;
    }

    // push all PIDs found
    do {
        if (std::wstring(entry.szExeFile) == targetProcessName) {
            pid_arr.emplace_back(entry.th32ProcessID); //name matches; add to list
        }
    } while (Process32NextW(snap, &entry)); //keep going until end of snapshot

    // Show data
    if(show){
        std::cout << entry.dwSize << " PIDs currently running\n";
        for (unsigned long i : pid_arr) {
            std::cout << "PID: " << i << std::endl;
        }
    }


    DWORD targetProcessId = pid_arr[0]; // We have only one process to suspend
    return targetProcessId;
}
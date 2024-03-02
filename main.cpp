#include <iostream>

// other includes
#include "alting.h"
#include "sequentionalBindings.h"
#include "utils.h"


int main() {

    // Get target PID of minecraft process
    DWORD target = utils::getPID(L"javaw.exe", true);
    bool PRESSED_ALTING = false;


    // Program Listener
    std::cout << "###### Started listening ######\n";
    while(true) {

        // Ref eating
        if (GetAsyncKeyState(VK_UP) & 0x8001) {
            eatRef();

        // Throwing fishing rod
        } else if (GetAsyncKeyState(VK_DOWN) & 0x8001) {
            throwRod();
        }
        // Alting
        else if(GetAsyncKeyState(VK_LEFT) & 0x8001) {
            if(!PRESSED_ALTING){
                // Suspend local minecraft process
                SuspendProcess(target);
                PRESSED_ALTING = true;
            }
        } else {
            // Resume local minecraft process on keyUp
            if(PRESSED_ALTING){
                ResumeProcess(target);
                PRESSED_ALTING = false;
            }
        }
    }

    return 0;
}
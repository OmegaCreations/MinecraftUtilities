#include "sequentionalBindings.h"

// TODO: changable slots
void eatRef() {
    // key 3
    keybd_event(0x33, MapVirtualKey(0x33, 0), KEYEVENTF_EXTENDEDKEY | 0, 0); // Key press
    keybd_event(0x33, MapVirtualKey(0x33, 0), KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0); // Key release
    Sleep(100);

    // press right mouse for 1.60s
    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
    Sleep(1600);  // 1.60s sleep
    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
    Sleep(10);

    // key 1
    keybd_event(0x31, MapVirtualKey(0x31, 0), KEYEVENTF_EXTENDEDKEY | 0, 0);
    keybd_event(0x31, MapVirtualKey(0x31, 0), KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    Sleep(10);
}

// Throwing fishing rod
void throwRod() {

    // key 4
    keybd_event(0x34, MapVirtualKey(0x34, 0), KEYEVENTF_EXTENDEDKEY | 0, 0);
    keybd_event(0x34, MapVirtualKey(0x34, 0), KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    Sleep(100);

    // Throw rod for 1s
    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
    Sleep(200);
    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
    Sleep(10);

    // key 1
    keybd_event(0x31, MapVirtualKey(0x31, 0), KEYEVENTF_EXTENDEDKEY | 0, 0);
    keybd_event(0x31, MapVirtualKey(0x31, 0), KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    Sleep(10);
}
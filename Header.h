#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;
using namespace chrono_literals;

bool Loading = false;

void LoadingSign() {
    while (Loading == false) {
        this_thread::sleep_for(0.2s);
        cout << "\b\\";
        this_thread::sleep_for(0.2s);
        cout << "\b|";
        this_thread::sleep_for(0.2s);
        cout << "\b/";
        this_thread::sleep_for(0.2s);
        cout << "\b-";
        if (Loading == true) {
            cout << "\b";
        }
    }
}



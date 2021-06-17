#include <iostream>
#include <thread>

#include "Header.h"

using namespace std;
using namespace chrono_literals;

int main()
{
    cout << "Loading . . .  ";
  
    thread Thread(LoadingSign);
    this_thread::sleep_for(5s);
    Loading = true;
    Thread.join();

    cout << " Finished Loading!";
    
    return 0;
}
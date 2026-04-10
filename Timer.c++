#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    cout << "Wait...\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Done";
}

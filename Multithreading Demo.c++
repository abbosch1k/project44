#include <iostream>
#include <thread>
using namespace std;

void task() {
    cout << "Thread running\n";
}

int main() {
    thread t(task);
    t.join();
}

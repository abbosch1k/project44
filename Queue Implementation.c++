#include <iostream>
using namespace std;

int main() {
    int q[5], front=0, rear=0;

    q[rear++] = 5;
    q[rear++] = 10;

    cout << q[front++] << endl;
}

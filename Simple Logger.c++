#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream log("log.txt", ios::app);
    log << "Program started\n";
}

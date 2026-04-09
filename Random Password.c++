#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string chars="abcABC123";
    for(int i=0;i<10;i++)
        cout<<chars[rand()%chars.size()];
}

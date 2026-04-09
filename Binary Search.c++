#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5}, l=0, r=4, key=3;

    while(l<=r) {
        int m=(l+r)/2;
        if(arr[m]==key) { cout<<"Found"; break; }
        else if(arr[m]<key) l=m+1;
        else r=m-1;
    }
}

// linear search

#include <iostream>
using namespace std;

int main() {

    int size = 7;
    int array[7] = {3,6,8,2,7,2,7};
    bool flag = 1;

    int serach_elem = 7;

    for(int i=0; i<size; i++) {
        if(serach_elem == array[i]) {
            cout << "Element Find, Index is: " <<i<<endl;
            flag = 0;
            break;
        }
    }
    if(flag==1) {
        cout << "There is no matching element."<<endl;
    }
}
#include <iostream>
using namespace std;

int main() {
    int array[10] = {10,40, 30, 20, 90};
    int size = 5;

    int pos = 3;
    int elem = 15;

    //shift index forward
    for(int i=size-1; i>=pos-1; i--){
        array[i+1]= array[i];
    }
    array[pos-1] = elem;
    size++;

    //traversal
    for(int i=0; i<=size-1; i++) {
        cout << array[i]<<endl;
    }
}
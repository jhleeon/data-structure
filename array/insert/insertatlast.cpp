#include <iostream>
using namespace std;

int array[10] = {10,40, 30, 20, 90};
int size = 5;
int elem = 70;

int main() {
    array[size] = array[size-1];
    array[size-1] = elem;
    size++;

    for(int i=0; i<size; i++){
        cout << array[i]<<endl;
    }
}



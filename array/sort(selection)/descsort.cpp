#include <iostream>
using namespace std;

int main() {
    int size = 7;
    int array[7]={6,3,7,4,12,1,15};

    for(int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if(array[j] > array[i]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for (int i=0; i<size; i++) {
        cout << array[i] <<endl;
    }
}
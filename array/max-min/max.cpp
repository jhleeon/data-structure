#include <iostream>
using namespace std;

int main() {
    int array[7] = {4,5,3,9,1,4,4};
    int size = 7;
    int max = array[0];

    for(int i=0; i<size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    cout << "Max element is: "<<max<<endl;
}
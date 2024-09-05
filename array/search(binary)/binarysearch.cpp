// Binray Search

#include <iostream>
using namespace std;

int main() {
    int size = 8;
    int array[10] = {10,20,30,40,50, 60,70,80}; // must be sorted array
    int start = 0, end = size-1;

    int search_elem = 90;

    while(start <= end) {
        int mid = (start+end)/2;
        if(array[mid] == search_elem) {
            cout << "Elemnt found, at index: "<<mid;
            break;
        } else if(array[mid] < search_elem) {
            start = mid + 1; // less values remove
        } else {
            end = mid - 1; // greater values remove
        }
    }
    cout << "Element not found!"<<endl;
}
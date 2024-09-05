#include<iostream>
using namespace std;


int main() {
    int size, num, elem;
    cout << "Define array size: ";
    cin >> size;
    int array [size];
    cout << "Enter how many array elements you want to add: ";
    cin >> num;
    cout << "Enter array element which you want to add at begining: ";
    cin >> elem;
    cout << "Enter element one by one: ";
    // Create a array.
    for(int i=0; i<= num-1; i++) 
    {
        cin >> array[i];
    }
    // Shift array index to forward.
    for(int i=num; i>0; i--)
    {
        array[i] = array[i-1];
    }
    array[0] = elem; 
    num = num+1;

    // Print the full array.
    cout << "The array list: "<<endl;
    for(int i=0; i<=num-1; i++)
    {
        cout << array[i] << endl;
    }
}
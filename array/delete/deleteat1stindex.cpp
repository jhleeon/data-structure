#include  <iostream>
using namespace std;

int main() 
{
    int arraySize, elementsNumber, element;

    cout << "Enter length of array: ";
    cin >> arraySize;
    int arr[arraySize];

    cout << "How many elemnets you want to insert?: ";
    cin >> elementsNumber; 

    cout << "Enter elements one by one: ";
    for(int i=0; i<elementsNumber; i++)
    {
        cin >> arr[element];
    }

    for(int i=0; i<elementsNumber-1; i++)
    {
        arr[i] = arr[i+1];
    }
    elementsNumber--;

    cout << "Array after delation-"<<endl;
    for(int i=0; i<elementsNumber; i++)
    {
        cout << arr[i] <<endl;
    }
    return 0;
}
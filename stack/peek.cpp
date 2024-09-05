#include <iostream>
using namespace std;

int size = 5;
int stack[5] = {10,20,30,40,50};
int top = size-1;

int peek() {
    return stack[top];
}

int main() {
    int peek_value = peek();
    cout << peek_value;
}
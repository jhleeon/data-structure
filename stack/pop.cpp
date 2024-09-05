#include <iostream>
using namespace std;

int size = 5;
int stack[5] = {10,20,30,40,50};
int top = size-1;

void pop() {
    if(top == -1) {
        cout << "Stack is empty"<<endl;
    } else {
        cout << "POP element is: "<< stack[top] <<endl;
        top --;
    }
}

void display() {
    if(top != -1) {
        for(int i=top; i>=0 ; i--) {
            cout << stack[i] <<endl;
        }
    } else {
        cout << "Stack is empty"<<endl;
    }
}

int main() {
    pop();
    pop();
    display(); //traversal
}
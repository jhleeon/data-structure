#include <iostream>
using namespace std;

int size = 5;
int queue[5] ={4,7,2,8,9};
int front = 0, rear = -1;

void peek() {
    if(front == -1) {
        cout << "Queue is empty";
    } else {
        cout << "Front element is: "<<queue[front]<<endl;
    }
}

int main() {
    peek();
}
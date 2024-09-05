#include <iostream>
using namespace std;

int size = 5;
int queue[5];
int front = -1;
int rear = -1;

void insert(int elem) {
    if(rear == size-1) {
        cout << "Queue is full";
    } else {
        rear++;
        queue[rear] = elem;
        if(front == -1) {
            front = front+1;
        }
    }
}

void display() {
    for(int i=front; i<=rear; i++) {
        cout << queue[i]<<endl;
    }
}

int main(){
    insert(10);
    insert(15);
    insert(12);
    insert(7);
    display();
}
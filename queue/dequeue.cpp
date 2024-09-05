#include <iostream>
using namespace std;

int size = 5;
int queue[5] = {4,6,8,19,24};
int front = 0;
int rear = size-1;

void remove() {
    if(front == -1) {
        cout << "Queue is empty.";
    } else {
        cout << "Deleted element from queue is: "<< queue[front]<<endl;
        if(front == rear ) {
        front = -1;
        rear = -1;
        } else {
            front++;
        }
    }
}

int main(){
    remove();
    remove();
    remove();
    remove();
    remove();
    remove(); // empty
}
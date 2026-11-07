#include <iostream>
using namespace std;

#define max 5

class circqueue {
    int a[max];
    int front, rear;
    int x;

public:
    circqueue() {
        front = -1;
        rear = -1;
    }
    void insert();
    void delete_c();
    void display();
};

void circqueue::insert() {
    if (front == (rear + 1) % max) {
        cout << "Queue is full";
    }
    else {
        cout << "Enter data: ";
        cin >> x;
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % max;
        }
        a[rear] = x;
    }
}

void circqueue::delete_c() {
    if (front == -1) {
        cout << "Queue is Empty";
    }
    else {
        x = a[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % max;
        }
        cout << "deleted item = " << x;
    }
}

void circqueue::display() {
    if (front == -1) {
        cout << "Queue is empty";
    }
    else {
        if (front <= rear) {
            for (int i = front; i <= rear; i++) {
                cout << a[i] << " ";
            }
        }
        else {
            for (int i = front; i < max; i++) {
                cout << a[i] << " ";
            }
            for (int k = 0; k <= rear; k++) {
                cout << a[k] << " ";
            }
        }
    }
}

int main() {
    circqueue q;
    return 0;
}

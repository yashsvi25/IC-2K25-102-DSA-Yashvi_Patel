#include <iostream>
using namespace std;

#define MAX 5 

class Queue {
private:
    int a[MAX];
    int front;
    int rear;
    int x; 

public:
   
    Queue() {
        front = -1;
        rear = -1;
    }

    
    void insert() {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
        } else {
            cout << "Enter element: ";
            cin >> x;
            if (rear == -1) {
                front = 0;
                rear = 0;
            } else {
                rear++;
            }
            a[rear] = x;
            cout << "Element inserted successfully.\n";
        }
    }

    
    void delete_c() {
        if (front == -1) {
            cout << "Queue Underflow\n";
        } else {
            x = a[front];
            cout << "Deleted item = " << x << "\n";
            
            if (front == rear) {
                // If there was only one element, reset the queue
                front = -1;
                rear = -1;
            } else {
                front++;
            }
        }
    }

    
    void display() {
        if (front == -1) {
            cout << "Queue has no elements\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Queue q;
    int choice;

    while (true) {
        cout << "\n--- Queue Operations ---\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                q.insert();
                break;
            case 2:
                q.delete_c();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}

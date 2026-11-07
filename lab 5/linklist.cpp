#include <iostream>
using namespace std;

// Structure for a node
struct node {
    int d;          // Data part
    node* link;     // Link/Pointer part
};

// Class for Linked List
class LL {
    node* start;

public:
    // Constructor to initialize start to NULL
    LL() {
        start = NULL;
    }

    void create();
    void display();
    void search();
    void delete_node();
};

// 1. CREATE Function (Adds nodes dynamically using a loop)
void LL::create() {
    node *nn, *on;
    char ch;

    do {
        // Dynamically allocating memory for a new node
        nn = new node;
        
        cout << "Enter data: ";
        cin >> nn->d;
        nn->link = NULL;

        // If it's the very first node
        if (start == NULL) {
            start = nn;
        } else {
            // Traverse to the end of the list to append the new node
            on = start;
            while (on->link != NULL) {
                on = on->link;
            }
            on->link = nn;
        }

        cout << "Want to add more data? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

// 2. DISPLAY Function (Traverses and prints the list)
void LL::display() {
    if (start == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    node* temp = start;
    cout << "Linked List elements: ";
    while (temp != NULL) {
        cout << temp->d << " -> ";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}

// 3. SEARCH Function (Finds an element in the list)
void LL::search() {
    if (start == NULL) {
        cout << "List is empty! Nothing to search." << endl;
        return;
    }

    int target, pos = 1;
    bool found = false;
    cout << "Enter the value to search: ";
    cin >> target;

    node* temp = start;
    while (temp != NULL) {
        if (temp->d == target) {
            cout << "Element " << target << " found at position " << pos << "." << endl;
            found = true;
            break;
        }
        temp = temp->link;
        pos++;
    }

    if (!found) {
        cout << "Element " << target << " not found in the list." << endl;
    }
}

// 4. DELETE Function (Deletes a node by its value)
void LL::delete_node() {
    if (start == NULL) {
        cout << "List is empty! Nothing to delete." << endl;
        return;
    }

    int val;
    cout << "Enter value to delete: ";
    cin >> val;

    node* temp = start;
    node* prev = NULL;

    // Case 1: If the node to be deleted is the first node
    if (temp != NULL && temp->d == val) {
        start = temp->link; // Change start pointer
        delete temp;        // Free memory
        cout << "Node with value " << val << " deleted successfully." << endl;
        return;
    }

    // Case 2: Search for the node to be deleted
    while (temp != NULL && temp->d != val) {
        prev = temp;
        temp = temp->link;
    }

    // If the value was not found in the list
    if (temp == NULL) {
        cout << "Value " << val << " not found in the list." << endl;
        return;
    }

    // Unlink the node from the linked list
    prev->link = temp->link;
    delete temp; // Free memory
    cout << "Node with value " << val << " deleted successfully." << endl;
}

// Main function to run and test the program
int main() {
    LL list;
    int choice;

    while (true) {
        cout << "\n------ LINKED LIST MENU ------" << endl;
        cout << "1. Create / Append List" << endl;
        cout << "2. Display List" << endl;
        cout << "3. Search Element" << endl;
        cout << "4. Delete Node" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.create();
                break;
            case 2:
                list.display();
                break;
            case 3:
                list.search();
                break;
            case 4:
                list.delete_node();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

#define MAX 5

int stackArr[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        cout << "Stack Overflow!\n";
    } else {
        cout << "Enter value: ";
        cin >> value;
        stackArr[++top] = value;
        cout << "Value pushed successfully!\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
    } else {
        cout << "Popped element: " << stackArr[top--] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!\n";
    } else {
        cout << "Stack elements (top to bottom):\n";
        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << endl;
        }
    }
}

int main() {
    int choice;
    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: cout << "Program ended.\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}
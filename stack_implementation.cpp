#include <iostream>
using namespace std;

#define MAX 5 

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { 
        top = -1; 
    }

    // 1. Data dalnay ka function (Push)
    void push(int val) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Mazeed jagah nahi hai." << endl;
        } else {
            top++;
            arr[top] = val;
            cout << val << " stack mein daal diya gaya." << endl;
        }
    }

    // 2. Data nikalnay ka function (Pop)
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Stack pehlay hi khali hai." << endl;
        } else {
            cout << arr[top] << " ko nikal diya gaya." << endl;
            top--;
        }
    }

    // 3. Sab say oopar wala data dekhna (Peek)
    void peek() {
        if (top == -1) {
            cout << "Stack khali hai." << endl;
        } else {
            cout << "Top element hai: " << arr[top] << endl;
        }
    }

    // 4. Check karna stack khali hai ya nahi
    void isEmpty() {
        if (top == -1) 
            cout << "Yes, Stack khali hai." << endl;
        else 
            cout << "No, Stack mein data maujood hai." << endl;
    }
};

int main() {
    Stack s1;

    cout << "--- Stack Operations ---" << endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    
    s1.peek();
    
    s1.pop();
    s1.peek();

    return 0;
}

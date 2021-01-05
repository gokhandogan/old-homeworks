#include <iostream>
using namespace std;

class StackNode {
public:
    int data;
    StackNode* next;
    StackNode(const int& data = 0, StackNode* next = NULL) : data(data), next(next) {    }
};

class Stack {
    StackNode* root;
public:
    Stack() : root(NULL) {   }
    StackNode* begin()const { return root; }
    StackNode* end()const { return NULL; }
    bool isEmpty()const {
        return begin() == end();
    }

    void push(const int& value) {
        StackNode* temp = new StackNode(value, root);
        root = temp;
    }

    int top()const {
        if(isEmpty())
            throw "Error : Stack::pop() for stack is empty";
        return begin()->data;
    }

    void pop() {
        if (isEmpty())
            throw "Error : Stack::pop() for stack is empty";
        StackNode* temp = root;
        root = temp->next;
        delete temp;
    }

    int size()const {
        StackNode* temp = begin();
        int length = 0;
        while (temp != end()) {
            length++;
            temp = temp->next;
        }
        return length;
    }

    void print()const {
        StackNode* temp = begin();
        while (temp != end()) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

};

int main()
{

}



#include <iostream>
using namespace std;

class Node {
public:
    Node(const int& data = 0, Node* next = NULL) : data(data), next(next) { }
    int data;
    Node* next;
};

class list {
    Node* root;
public:
    list() : root(NULL) {    }
    bool isEmpty()const { return root == NULL; }
    void push_back(const int& value) {
        if (isEmpty())
            root = new Node(value);
        else {
            Node* temp = root;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = new Node(value);
        }
    }

    void pop_back() {
        if (isEmpty())
            cout << "liste bos" << endl;
        if (root->next == NULL) {
            delete root;
            root = NULL;
        }
        else {
            Node* temp = root;
            while (temp->next->next != NULL)
                temp = temp->next;
            delete temp->next;
            temp->next = NULL;
        }
    }

    Node* find(const int& value)const {
        Node* temp = root;
        Node* stop = NULL;
        while (temp != stop && temp->data != value)
            temp = temp->next;
        return temp;
    }

    void print() {
        Node* temp = root;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main()
{
    list l;
    cout << l.isEmpty() << endl;
    l.push_back(5);
    cout << l.isEmpty() << endl;
    l.push_back(10);
    l.push_back(3);
    l.print();
    l.pop_back();
    l.print();
    l.push_back(20);
    l.push_back(35);
    l.print();
    Node* aranan = l.find(20);
    if (aranan == NULL)
        cout << "bulunamadi" << endl;
    else
        cout << "aranan " << aranan->data << " degeri bulundu" << endl;
    
}


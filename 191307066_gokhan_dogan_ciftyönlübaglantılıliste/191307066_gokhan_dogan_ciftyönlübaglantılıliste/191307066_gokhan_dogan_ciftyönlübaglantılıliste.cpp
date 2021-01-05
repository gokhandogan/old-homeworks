#include <iostream>
using namespace std;

class Node {
public:
    Node(const int& data = 0, Node* next = NULL, Node* before = NULL) : data(data), next(next), before(before) { }
    int data;
    Node* next;
    Node* before;
};

class list {
    Node* root;
public:
    list() : root(NULL) {    }
    bool isEmpty()const { return root == NULL; }
    void push(const int& value) {
        if (isEmpty())
            root = new Node(value);
        else if(root->data>value){
            Node* temp = new Node(value, root);
            root->before = temp;
            root = temp;
            
        }
        else if(root->data < value) {
            Node* temp = root;
            while (temp->next != NULL && temp->next->data < value)
                temp = temp->next;
            if (temp->next == NULL) {
                temp->next = new Node(value,NULL, temp);
            }
            else {
                Node* temp2 = temp->next;
                temp->next = new Node(value, temp2, temp);
            }
            
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
    void remove(const int& value)const {
        Node* temp = find(value);
        if (temp) {
            temp->before->next = temp->next;
            temp->next->before = temp->before;
            delete temp;
        }
        else
            cout << "bu deger listede bulunmadigindan silme gerceklestirilmedi."<<endl;
        

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
    l.push(5);
    cout << l.isEmpty() << endl;
    l.push(10);
    l.push(3);
    l.print();
    l.push(20);
    l.push(35);
    l.push(12);
    l.print();
    l.pop_back();
    l.print();
    l.remove(10);
    l.print();
    l.remove(13);
    l.print();
    Node* aranan = l.find(20);
    if (aranan == NULL)
        cout << "bulunamadi" << endl;
    else
        cout << "aranan " << aranan->data << " degeri bulundu" << endl;

}



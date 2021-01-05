#include <iostream>
using namespace std;

class QueueNode {
public:
    int data;
    QueueNode* next;
    QueueNode(const int& data = 0, QueueNode* next = NULL)
        : data(data), next(next) {    }
};

class Queue {
    QueueNode* root;
    int boyut = 8;
public:
    Queue() :root(NULL) { }

    bool isEmpty()const { return root == NULL; }

    void enqueue(const int& value) {
        if (isEmpty()) {
            root = new QueueNode(value);
            cout << "kuyruga eleman eklendi: " << value << endl;
        }
        else if (size() == boyut)
            cout << "kuyruk dolu" << endl;
        else {
            QueueNode* temp = root;
            while (temp->next != NULL)
                temp = temp->next;
            cout << "kuyruga eleman eklendi: " << value << endl;
            temp->next = new QueueNode(value);
        }

    }

    void dequeue() {
        if (isEmpty())
            cout << "kuyruk bos" << endl;
        else {
            QueueNode* temp = root;
            root = root->next;
            cout << "kuyruktan eleman cikarildi: " << temp->data << endl;
            delete temp;
        }
    }

    void print()const {
        QueueNode* temp = root;
        while (temp != NULL) {
            cout << temp->data << "    ";
            temp = temp->next;
        }
    }

    int size()const {
        QueueNode* temp = root;
        int counter = 0;
        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }

};

int main()
{
    cout << "-------------------Yapilabilecek Islemler Asagide Siralanmistir.-------------------- " << endl;
    cout << "Kuyruga eleman eklemek icin\t: 1'e" << endl;
    cout << "Kuyruktan eleman cikarmak icin\t: 2'ye" << endl;
    cout << "Elemanlari listelemek icin\t: 3'e" << endl;
    cout << "Cikis yapmak icin\t\t: 4'e basiniz." << endl << endl;
    Queue q;
    int deger = 0;
    int islem = 0;
    while (islem != 4) {
        cout << "Lutfen Yapmak Istediginiz Islemi Seciniz." << endl << endl;
        cin >> islem;
        if (islem == 1) {
            deger = rand() % 100;
            q.enqueue(deger);
            cout << endl;
        }
        if (islem == 2) {
            q.dequeue();
        }
        if (islem == 3) {
            cout << "kuyruk elemanlari: ";
            q.print();
            cout << endl;
        }

    }

    return 0;
}

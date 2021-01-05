//GOKHAN DOGAN 191307066

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
    Node* tail;
public:
    list(){  
        root = new Node();
        tail = root;
        tail->next = new Node();
    
    }
    Node* begin()const { return root->next; }
    Node* end()const { return tail->next; }
    bool isEmpty()const { return root == NULL; }
    void sona_ekle(const int& value) {
        araya_ekle(end(), value);
    }

    void basa_ekle(const int& value) {
        araya_ekle(begin(), value);
    }

    void araya_ekle(Node* pos, const int& value) {
        if (pos == end()) {
            tail->next = new Node(value, end());
            tail = tail->next;
        }
        else {
            Node* temp = root;
            while (temp->next != pos)
                temp = temp->next;
            temp->next = new Node(value, temp->next);
        }

    }

    void sondan_sil() {
        aradan_sil(end());
    }

    void basdan_sil() {
        aradan_sil(begin());
    }

    void aradan_sil(Node* pos) {
        if (isEmpty())
            cout << "liste bos" << endl;
        Node* prev = root;
        if (pos == end() || pos==tail) {
            pos = tail;
            while (prev->next != pos)
                prev = prev->next;
            prev->next = pos->next;
            tail = prev;
        }
        else {
            while(prev->next!=pos)
                prev = prev->next;
            prev->next = pos->next;
        }
        delete pos;
    }

    Node* find(const int& value)const {
        Node* temp = root;
        Node* stop = NULL;
        while (temp != stop && temp->data != value)
            temp = temp->next;
        return temp;
    }

    void yaz() {
        Node* temp = begin();
        while (temp != tail->next) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void ara() {
        Node* temp = begin();
        while (temp != tail->next) {
            if(temp->data%3==0)
                cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main()
{
    list l;
    cout << "-----bastan ekleme-----" << endl;
    l.basa_ekle(9);
    l.basa_ekle(19);
    l.basa_ekle(29);
    l.basa_ekle(39);
    l.basa_ekle(49);
    l.yaz();
    cout << endl << "-----sondan ekleme-----" << endl;
    l.sona_ekle(1);
    l.sona_ekle(21);
    l.sona_ekle(31);
    l.sona_ekle(41);
    l.sona_ekle(51); 
    l.yaz();
    cout << endl << "-----araya ekleme-----" << endl;
    l.araya_ekle(l.begin()->next->next,5);
    l.araya_ekle(l.begin()->next->next->next,15);
    l.araya_ekle(l.begin()->next->next->next->next,25);
    l.araya_ekle(l.begin()->next->next->next->next->next, 35);
    l.araya_ekle(l.begin()->next->next->next->next->next->next, 45);
    l.yaz();
    cout << endl << "-----3'e bolunebilenleri yazma-----" << endl;
    l.ara();
    cout << endl << "-----bastan silme-----" << endl;
    l.basdan_sil();
    l.basdan_sil();
    l.basdan_sil();
    l.yaz();
    cout << endl << "-----sondan silme-----" << endl;
    l.sondan_sil();
    l.sondan_sil();
    l.sondan_sil();
    l.yaz();
    cout << endl << "-----aradan silme fonksiyonu kullanarak bastan silme-----" << endl;
    l.aradan_sil(l.begin());
    l.aradan_sil(l.begin());
    l.aradan_sil(l.begin());
    l.yaz();


    return 0;
}
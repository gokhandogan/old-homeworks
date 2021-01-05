// GOKHAN DOGAN 191307066
#include <iostream>
using namespace std;

class Node {
public:
    Node(const string& ad = NULL, const int& nu = 0, const string& cinsiyet = NULL,
        Node* next = NULL, Node* before = NULL) : ad(ad),nu(nu),cinsiyet(cinsiyet),
        next(next), before(before) { }
    string ad;
    int nu;
    string cinsiyet;
    Node* next;
    Node* before;
};

class list {
    Node* root;
public:
    list() : root(NULL) {    }
    bool isEmpty()const { return root == NULL; }
    Node* begin()const { return root; }
    void push(const string& ad, const int& nu, const string& cinsiyet ) {
        if (isEmpty())
            root = new Node(ad, nu, cinsiyet);
        else if (root->nu > nu) {
            Node* temp = new Node(ad, nu, cinsiyet, root);
            root->before = temp;
            root = temp;

        }
        else if (root->nu < nu) {
            Node* temp = root;
            while (temp->next != NULL && temp->next->nu < nu)
                temp = temp->next;
            if (temp->next == NULL) {
                temp->next = new Node(ad, nu, cinsiyet, NULL, temp);
            }
            else {
                Node* temp2 = temp->next;
                temp->next = new Node(ad, nu, cinsiyet, temp2, temp);
            }

        }
    }

    void insert(Node* pos, const string& ad, const int& nu, const string& cinsiyet) {
        if (isEmpty())
            root = new Node(ad, nu, cinsiyet);
        else if (pos == root) {
            Node* temp = root->next;
            root->next = new Node(ad, nu, cinsiyet,temp,root);
            temp->before = root->next;
        }
        else {

            Node* temp = root;
            while (temp->next != pos)
                temp = temp->next;
            temp = temp->next;
            Node* temp_2 = temp->next;
            temp->next = new Node(ad, nu, cinsiyet, temp_2,temp);
            temp_2->before = temp->next;
        }

    }

   
    void remove(const int& nu) {
        Node* temp = find(nu);
        if (temp->next == NULL) {
            temp->before->next = NULL;
            delete temp;
        }

        else if (temp == root) {
            
            temp->next->before = NULL;
            
            root = temp->next;
            delete temp;

        }

        else if (temp) {
            temp->before->next = temp->next;
            temp->next->before = temp->before;
            delete temp;
        }
        else
            cout << "bu deger listede bulunmadigindan silme gerceklestirilmedi." << endl;


    }


    Node* find(const int& nu)const {
        Node* temp = root;
        Node* stop = NULL;
        while (temp != stop && temp->nu != nu)
            temp = temp->next;
        return temp;
    }

    void print() {
        Node* temp = root;
        while (temp != NULL) {
            cout << temp->ad << "\t"<<temp->nu << "\t" << temp->cinsiyet<<endl;
            temp = temp->next;
        }
        cout << endl;
    }

};

int main()
{
    list l;
    cout << "----------sirayla eleman ekleme ve sonrasinda goruntuleme----------" << endl;
    l.push("gokhan",5,"erkek");    
    l.push("fatma",10,"kiz");
    l.push("ali",3,"erkek");
    l.print();

    cout << "----------araya eleman ekleme(sirasiz) ve sonrasinda goruntuleme(ikinciden sonra)----------" << endl;
    l.insert(l.begin()->next,"ahmet",20,"erkek");
    l.insert(l.begin()->next->next, "ayse",35,"kiz");
    l.insert(l.begin()->next->next->next, "mehmet",12,"erkek");
    l.print();

    cout << "----------cikarmak istediginiz dugumun numarasini giriniz.----------" << endl;
    int numara;
    cin >> numara;
    l.remove(numara);
    l.print();

    

    
}
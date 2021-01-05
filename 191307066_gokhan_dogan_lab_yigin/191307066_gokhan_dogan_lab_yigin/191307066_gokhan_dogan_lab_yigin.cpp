#include <iostream>

using namespace std;

class StackNode {
public:
    char data;
    StackNode* next;
    StackNode(const char& data = 0, StackNode* next = NULL) : data(data), next(next) {    }
};

class Stack {
    int sinir_boyutu = 10;
    StackNode* root;
public:
    Stack() : root(NULL) {   }
    
    bool isEmpty()const {
        return root == NULL;
    }

    void push(const char& value) {
        if (size() == sinir_boyutu)
            cout << "yigin dolu"<<endl;
        else {
            cout << "eklenen eleman: " << value << endl;
            StackNode* temp = new StackNode(value, root);
            root = temp;
        }
        
    }

    void pop() {
        if (isEmpty())
            cout<<"yigin bos"<<endl;
        else {
            StackNode* temp = root;
            root = temp->next;
            cout << "cikarilan eleman: " << temp->data << endl;
            delete temp;
        }
       
    }

    int size()const {
        StackNode* temp = root;
        int length = 0;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        return length;
    }

    void print()const {
        StackNode* temp = root;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};
int main()
{
    //--------------------------ödevin ilk bölümü-----------------------------
    cout << "-------------------ILK BOLUM-------------------------" << endl;
    Stack x;
    cout << "boyut: " << x.size() << endl; x.push('a');
    cout << "boyut: " << x.size() << endl; x.push('b');
    cout << "boyut: " << x.size() << endl; x.push('c');
    cout << "boyut: " << x.size() << endl; x.push('d');
    cout << "boyut: " << x.size() << endl; x.push('e');
    cout << "boyut: " << x.size() << endl; x.push('f');
    cout << "boyut: " << x.size() << endl; x.push('g');
    cout << "boyut: " << x.size() << endl; x.push('h');
    cout << "boyut: " << x.size() << endl; x.push('i');
    cout << "boyut: " << x.size() << endl; x.push('j');
    cout << "boyut: " << x.size() << endl; x.push('k');
    cout << "boyut: " << x.size() << endl;
    cout << endl;
    cout << "yiginin elemanlari: ";
    x.print();
    cout << endl;
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl; x.pop();
    cout << "boyut: " << x.size() << endl;
    cout << endl << endl;


    //------------------------------ödevin ikinci bölümü---------------------
    /*  Burada yığın hep baştan dolup boşaldığı için sırasıyla adımı ve soyadımı da
    yazsam, önce soyadım tersten sonra da adım tersten olacaktır. Yani aşağıda da 
    gösterildiği üzere adım ve soyadım "gokhan dogan" olmasına rağmen yığını ekrana 
    yazdırmak istediğimde son eleman ilk, ilk eleman da son yazılacaktır. "agod nahkog"
    (yığın boyutu 10 elemanla sınırlı olduğundan soyadımın son harfi eklenememiştir.)
    şeklinde olacaktır. */
    
    cout << "-------------------IKINCI BOLUM-------------------------" << endl;
    Stack s;
    cout << "boyut: " << s.size() << endl; s.push('g');
    cout << "boyut: " << s.size() << endl; s.push('o');
    cout << "boyut: " << s.size() << endl; s.push('k');
    cout << "boyut: " << s.size() << endl; s.push('h');
    cout << "boyut: " << s.size() << endl; s.push('a');
    cout << "boyut: " << s.size() << endl; s.push('n');
    cout << "boyut: " << s.size() << endl<<endl; s.push('d');
    cout << "boyut: " << s.size() << endl; s.push('o');
    cout << "boyut: " << s.size() << endl; s.push('g');
    cout << "boyut: " << s.size() << endl; s.push('a');
    cout << "boyut: " << s.size() << endl; s.push('n');
    cout << "boyut: " << s.size() << endl;
    cout << endl;
    cout << "adi ve soyadinin bulundugu yiginin elemanlari: ";
    s.print();
    cout << endl;
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl; s.pop();
    cout << "boyut: " << s.size() << endl;

    

    return 0;
}

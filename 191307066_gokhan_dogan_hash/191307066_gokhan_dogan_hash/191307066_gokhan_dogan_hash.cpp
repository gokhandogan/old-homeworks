// 191307066_gokhan_dogan

#include <iostream>
#include<list> 
using namespace std;

class Hash
{
    int BUCKET;    

 
    list<int>* table;
public:
    Hash(int V);   

 
    void insertItem(int x);


    void deleteItem(int key);

    void findItem(int key);

 
    int hashFunction(int x) {
        return (x % BUCKET);
    }

    void displayHash();
};

Hash::Hash(int b)
{
    this->BUCKET = b;
    table = new list<int>[BUCKET];
}

void Hash::insertItem(int key)
{
    int index = hashFunction(key);
    table[index].push_back(key);
}

void Hash::deleteItem(int key)
{

    int index = hashFunction(key);

 
    list <int> ::iterator i;
    for (i = table[index].begin();
        i != table[index].end(); i++) {
        if (*i == key)
            break;
    }


    if (i != table[index].end())
        table[index].erase(i);
}



 
void Hash::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        cout << i;
        for (auto x : table[i])
            cout << " --> " << x;
        cout << endl;
    }
}

  
int main()
{
    
    int b[] = { 15, 11, 27, 8, 12,22,21,13,34,46,37,28,19,101,10,40 };
    int m = sizeof(b) / sizeof(b[0]);
    m = m - 1;
    Hash h_ornek(10);
    for(int i=0;i<m;i++)
        h_ornek.insertItem(b[i]);
    cout << "hash listesi:" << endl;
    h_ornek.displayHash();
    cout << endl<<endl;
    cout<<"12 sayisi silindi" << endl << endl;
    h_ornek.deleteItem(12);
    cout << "hash listesi:" << endl;
    h_ornek.displayHash();
    cout << endl << endl;


    
    int kontrol=0;
    int sayi;
    
    while (kontrol != 4) {
        cout << "ekleme yapmak istiyorsaniz. : 1'e" << endl;
        cout << "silme yapmak istiyorsaniz. : 2'e" << endl;
        cout << "yazdirmak istiyorsaniz. : 3'e" << endl;
        cout << "cikmak istiyorsaniz. : 4'e basiniz." << endl;
        cin >> kontrol;
        if (kontrol == 1) {
            cout << "sayiyi giriniz" << endl;
            cin >> sayi;
            b[m] = sayi;
            h_ornek.insertItem(b[m]);
            m = m + 1;
        }

        if (kontrol == 2) {
            cout << "silmek istediginiz sayiyi giriniz" << endl;
            cin >> sayi;
           
            h_ornek.deleteItem(sayi);
            m = m - 1;
    
        }
        if (kontrol == 3) {
            h_ornek.displayHash();
        }

    }

    
    

    return 0;
}
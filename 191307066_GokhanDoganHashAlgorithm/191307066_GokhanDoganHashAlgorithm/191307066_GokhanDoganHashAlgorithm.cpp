// 191307066_GokhanDogan
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
using namespace std;
const int T_S = 250;
class HashTableEntry {
public:
    int k;
    int v;
    HashTableEntry(int k, int v) {
        this->k = k;
        this->v = v;
    }
};
class HashMapTable {
private:
    HashTableEntry** t;
public:
    HashMapTable() {
        t = new HashTableEntry * [T_S];
        for (int i = 0; i < T_S; i++) {
            t[i] = NULL;
        }
    }
    int HashFunc(int k) {
        return k % T_S;
    }
    void Insert(int k, int v) {
        int h = HashFunc(k);
        while (t[h] != NULL && t[h]->k != k) {
            h = HashFunc(h + 1);
        }
        if (t[h] != NULL)
            delete t[h];
        t[h] = new HashTableEntry(k, v);
    }
    int SearchKey(int k) {
        int h = HashFunc(k);
        while (t[h] != NULL && t[h]->k != k) {
            h = HashFunc(h + 1);
        }
        if (t[h] == NULL)
            return -1;
        else
            return t[h]->v;
    }
    void Remove(int k) {
        int h = HashFunc(k);
        while (t[h] != NULL) {
            if (t[h]->k == k)
                break;
            h = HashFunc(h + 1);
        }
        if (t[h] == NULL) {
            cout << "Element bulunamadi " << k << endl;
            return;
        }
        else {
            delete t[h];
        }
        cout << "Element Silindi" << endl;
    }
    ~HashMapTable() {
        for (int i = 0; i < T_S; i++) {
            if (t[i] != NULL)
                delete t[i];
            delete[] t;
        }
    }
};
int main() {
    HashMapTable hash;
    int k, v;
    int c;
    while (1) {
        cout << "1.Element ekle" << endl;
        cout << "2.Element ara" << endl;
        cout << "3.Element sil" << endl;
        cout << "4.Cikis" << endl;
        cout << "Seciminizi yapiniz: ";
        cin >> c;
        switch (c) {
        case 1:
            cout << "Eklenecek elementi yaziniz: ";
            cin >> v;
            cout << "Eklenecek elementin anahtarini yaziniz: ";
            cin >> k;
            hash.Insert(k, v);
            break;
        case 2:
            cout << "aranacak elementin anahtarini yaziniz: ";
            cin >> k;
            if (hash.SearchKey(k) == -1) {
                cout << "Element bulunamadi " << k << endl;
                continue;
            }
            else {
                cout << "Element : " << k << " : ";
                cout << hash.SearchKey(k) << endl;
            }
            break;
        case 3:
            cout << "Silinecek elementin anahtarini yaziniz: ";
            cin >> k;
            hash.Remove(k);
            break;
        case 4:
            exit(1);
        default:
            cout << "\nDogru secenegi giriniz\n";
        }
    }
    return 0;
}
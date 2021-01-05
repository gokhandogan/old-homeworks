// GÖKHAN DOĞAN 191307066



#include <iostream>
using namespace std;
void max_heap(int *a, int m, int n) {
   int j, t;
   t = a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_maxheap(int *a,int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}

void print_maxheap(int* a, int n) {
    int i;
    for (i = 1; i <= n; i++) {
        cout << a[i] << ", ";
    }
}

void delete_root(int* a, int &n) {   
    a[1] = a[n];
    n = n - 1;
    build_maxheap(a, n);
}

int main() {
   
   int a[] = { 15,7,12,28,36,1,37,13,4,25,3,9,27,2,5,16 };
  
   int n = sizeof(a) / sizeof(a[0]);
   n = n - 1;

   cout << "Max Heap yapilandiriliyor"<<endl;
   build_maxheap(a,n);
   cout << endl;

   cout<<"Max Heap\n";
   print_maxheap(a, n);
   cout << endl<<endl;

   cout << "Root silindi"<<endl;
   cout << "Max Heap\n";
   delete_root(a, n);
   print_maxheap(a, n);
   cout << endl;
}
   
    

    
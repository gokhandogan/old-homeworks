// 191307066_gokhan_dogan


#include <iostream>
#include <list>

using namespace std;


void findInOutDegree(list<list<int>> adjlist,
    int n)
{
    int* iN = new int[n]();
    int* ouT = new int[n]();

    list<list<int> >::iterator nest_list;
    int i = 0;

    for (nest_list = adjlist.begin();
        nest_list != adjlist.end();
        nest_list++)
    {
        list<int> lst = *nest_list;

        
        ouT[i] = lst.size();

        for (auto it = lst.begin();
            it != lst.end(); it++)
        {
            
            iN[*it]++;
        }
        i++;
    }

    cout << "Vertex\t\tIn\t\tOut" << endl;
    for (int k = 0; k < n; k++)
    {
        cout << k << "\t\t"
            << iN[k] << "\t\t"
            << ouT[k] << endl;
    }
}


int main()
{

    
    list<list<int>> adjlist;

    
    list<int> tmp;
    tmp.push_back(1);
    tmp.push_back(2);
    adjlist.push_back(tmp);
    tmp.clear();

    
    tmp.push_back(3);
    adjlist.push_back(tmp);
    tmp.clear();

    
    tmp.push_back(0);
    tmp.push_back(5);
    tmp.push_back(6);
    adjlist.push_back(tmp);
    tmp.clear();

    
    tmp.push_back(1);
    tmp.push_back(4);
    adjlist.push_back(tmp);
    tmp.clear();

    
    tmp.push_back(2);
    tmp.push_back(3);
    adjlist.push_back(tmp);
    tmp.clear();

    
    tmp.push_back(4);
    tmp.push_back(6);
    adjlist.push_back(tmp);
    tmp.clear();

    
    tmp.push_back(5);
    adjlist.push_back(tmp);
    tmp.clear();

    int n = adjlist.size();

    findInOutDegree(adjlist, n);
}


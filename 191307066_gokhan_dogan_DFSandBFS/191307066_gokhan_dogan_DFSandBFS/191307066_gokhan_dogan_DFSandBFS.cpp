// 191307066_gokhan_dogan

#include <iostream>
#include <list>


using namespace std;


class Graph {
    int V; 

    
    list<int>* adj;

    
    void DFSUtil(int v, bool visited[]);

public:
    Graph(int V);

    
    void addEdge(int v, int w);

    
    void DFS(int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}

void Graph::DFSUtil(int v, bool visited[])
{
    
    visited[v] = true;
    cout << (char)(v + 'A') << " ";

    
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}


void Graph::DFS(int v)
{
    
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    
    DFSUtil(v, visited);
}











class Graph_2
{
    int V;    

    
    list<int>* adj;
public:
    Graph_2(int V);  

    
    void addEdge(int v, int w);

    
    void BFS(int s);
};

Graph_2::Graph_2(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph_2::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}

void Graph_2::BFS(int s)
{
    
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    
    list<int> queue;

    
    visited[s] = true;
    queue.push_back(s);

    
    list<int>::iterator i;

    while (!queue.empty())
    {
        
        s = queue.front();
        cout << (char)(s+'A') << " ";
        queue.pop_front();

        
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}


enum names {
    A , B, C , D, E, F
};




int main()
{
    
    Graph g(6);
    g.addEdge(A,B);
    g.addEdge(A,E);
    g.addEdge(A,D);
    g.addEdge(B,C);
    g.addEdge(C,E);
    g.addEdge(C,F);
    g.addEdge(D,E);
    g.addEdge(E,F);

    g.addEdge(B,A);
    g.addEdge(E,A);
    g.addEdge(D,A);
    g.addEdge(C,B);
    g.addEdge(E,C);
    g.addEdge(F,C);
    g.addEdge(E,D);
    g.addEdge(F,E);

    cout << "DFS Algoritmasi"
        " (vertex C den baslayarak) \n";
    g.DFS(2);
    cout << endl;




    Graph_2 g_2(6);
    g_2.addEdge(A, B);
    g_2.addEdge(A, E);
    g_2.addEdge(A, D);
    g_2.addEdge(B, C);
    g_2.addEdge(C, E);
    g_2.addEdge(C, F);
    g_2.addEdge(D, E);
    g_2.addEdge(E, F);

    g_2.addEdge(B, A);
    g_2.addEdge(E, A);
    g_2.addEdge(D, A);
    g_2.addEdge(C, B);
    g_2.addEdge(E, C);
    g_2.addEdge(F, C);
    g_2.addEdge(E, D);
    g_2.addEdge(F, E);

    cout << "BFS Algoritmasi"
        " (vertex C den baslayarak) \n";
    g_2.BFS(2);
    cout << endl;

    return 0;
}
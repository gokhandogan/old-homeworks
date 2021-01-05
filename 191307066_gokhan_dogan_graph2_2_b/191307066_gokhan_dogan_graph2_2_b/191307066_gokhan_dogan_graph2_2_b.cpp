// 191307066_gokhan_dogan




#include <limits.h> 
#include <stdio.h>
using namespace std;


#define V 7 


int minDistance(int dist[], bool sptSet[])
{

    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}


void printSolution(int dist[])
{
    printf("ilce ismi: \t izmitten En Yakin Uzaklik:\n\n");
    for (int i = 0; i < V; i++) {
        if (i==0)
            printf("izmit\t\t %d\n", dist[i]);
        else if (i == 1)
            printf("kandira\t\t %d\n",dist[i]);
        else if (i == 2)
            printf("derince\t\t %d\n",dist[i]);
        else if (i == 3)
            printf("kartepe\t\t %d\n",dist[i]);
        else if (i == 4)
            printf("korfez\t\t %d\n",dist[i]);
        else if (i == 5)
            printf("dilovasi\t %d\n",dist[i]);
        else if (i == 6)
            printf("gebze\t\t %d\n",dist[i]);
    }
        
}


void dijkstra(int graph[V][V], int src)
{
    int dist[V];

    bool sptSet[V];


    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;


    dist[src] = 0;


    for (int count = 0; count < V - 1; count++) {

        int u = minDistance(dist, sptSet);


        sptSet[u] = true;


        for (int v = 0; v < V; v++)


            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }


    printSolution(dist);
}


int main()
{

    int graph[V][V] = { { 0, 46, 11, 8, 0, 0, 0},
                        { 46, 0, 54, 0, 0, 0, 0},
                        { 11, 54, 0, 0, 10, 0, 0},
                        { 8, 0, 0, 0, 0, 0, 0},
                        { 0, 0, 10, 0, 0, 20, 30},
                        { 0, 0, 0, 0, 20, 0, 12},
                        { 0, 0, 0, 0, 0, 30, 12} };
                         

    dijkstra(graph, 0);

    return 0;
}
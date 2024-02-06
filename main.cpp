#include <bits/stdc++.h>
using namespace std;

#define V 5   //no. of vertices
void print(int arr[])
{
    cout << "Solution Exists: One Hamiltonian Cycle"<<endl;
    for (int i = 0; i < V; i++)
    {
        cout << arr[i] <<"\t";
    }
    cout << arr[0]<<endl;
    cout << endl;
}
bool canBeAdded(int v, bool graph[V][V],int arr[], int pos)
{
    if (graph [arr[pos - 1]][ v ] == 0)     //checks if this vertex is an adjacent
    {
        return false;
    }
    for (int i = 0; i < pos; i++)    //checks duplication
    {
        if (arr[i] == v)
            return false;
    }
    return true;
}
//    A recursive utility function
//    to solve cycle
bool hamCycleUtil(bool graph[V][V],int arr[], int pos)
{
    if (pos == V) //checks if it's a Hamiltonian circuit
    {
        if (graph[arr[pos - 1]][arr[0]] == 1)
            return true;
        else
            return false;
    }
    for (int v = 1; v < V; v++)
    {
        if (canBeAdded(v, graph, arr, pos))
        {
            arr[pos] = v;
            if (hamCycleUtil (graph, arr, pos + 1) == true)
            {
                return true;
            }
            arr[pos] = -1;
        }
    }
    return false;
}
//using Backtracking
bool hamCircuit(bool graph[V][V])
{
    int *arr = new int[V];
    for (int i = 0; i < V; i++)
    {
        arr[i] = -1;
    }
    arr[0] = 0;
    if (hamCycleUtil(graph, arr, 1) == false )
    {
        cout << "There is no solution.!";
        return false;
    }
    else
    {
        print(arr);
        return true;
    }
}
int main()
{
    bool graph1[V][V] =
        {{0, 1, 0, 1, 0},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 0, 1},
        {1, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };
    hamCircuit(graph1);

    bool graph2[V][V] =
       {{0, 1, 0, 1, 0},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 0, 1},
        {1, 1, 0, 0, 0},
        {0, 1, 1, 0, 0}
    };
    hamCircuit(graph2);
    return 0;
}

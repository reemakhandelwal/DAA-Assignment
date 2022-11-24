#include <bits/stdc++.h>
using namespace std;
const int V=5;
// const int V=4;
// const int V=3;
//const int V=3;

bool checkCycle(int cVertex, int pVertex, int arr[][V], vector<int>& order, int visited[V]) {
    visited[cVertex] = 1;
    order.push_back(cVertex);
    for(int i=0; i<V; ++i) {
        //if adjacent vertex and not visited
        if(arr[cVertex][i] && !visited[i]) {
            if(checkCycle(i, cVertex, arr, order, visited)) {
                return true;
            }
            else return false;
        }
    }
    for(int i=0; i<V; ++i) {
        //if adjacent vertex and visited and is not a parent vertex and not a current vertex
        if(arr[cVertex][i] && visited[i] && i!=pVertex && i!=cVertex) {
            order.push_back(i);
            return true;
        }
    }
    return false;
}

bool cycle(int arr[][V], vector<int>& order) {
    for(int i=0; i<V; ++i) {
        int visited[V] = {0};
        order.clear();
        order.assign(order.size(), -1);
        if(checkCycle(i, -1, arr, order, visited))
            return true;
    }
    return false;
}

int main() {
    int arr[][V] = {{0, 1, 0, 0, 0}, {1, 0, 1, 0, 1}, {0, 1, 0, 1, 0}, {0, 0, 1, 0, 1}, {0, 1, 0, 1, 0}};
    // int arr[][V] = {{0, 1, 0, 0}, {1, 0, 1, 1}, {0, 1, 0, 1}, {0, 1, 1, 0}};
    // int arr[][V] = {{0, 1, 1}, {1, 0, 1}, {1, 1, 0}};
    // int arr[][V] = {{0, 1, 0}, {1, 0, 1}, {0, 1, 0}};

    vector<int> order(V+1);
    order.assign(order.size(), -1);
    
    if(cycle(arr, order)) {
        (order[0]==order[V]) ? cout<<"Complete graph is cyclic.\n" : cout<<"Part of graph is cyclic\n";
        int index;
        for(int i=0; i<V; ++i) {
            if(order[i] == order[V]) {
                index=i; 
                break;
            }
        }
        cout<<"The path is:";
        for(int i=index; i<V+1; ++i)
            cout<<" "<<order[i];

    }
    else 
        cout<<"No cycle in the graph.";
    return 0;
}

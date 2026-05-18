//hashing using linear probig and quadratc probing
// #include <iostream>
// using namespace std;
// class HashTable {
// private:
//     int* table;
//     int size;   
// public:
//     HashTable(int s) {
//         size = s;
//         table = new int[size];
//         for (int i=0;i<size;i++) {
//             table[i] = -1;
//         }   
//     }
//     int hashFunction(int key) {
//         return key % size;
//     }
//     void linearProbing(int key) {
//         int index = hashFunction(key);
//         while (table[index] != -1) {
//             index = (index + 1) % size;
//         }
//         table[index] = key;
//     }   
//     void quadraticProbing(int key)
//     {
//         int index = hashFunction(key);
//         int i = 0;
//         while (table[index] != -1) {
//             i++;
//             index = (index + i * i) % size;
//         }
//         table[index] = key;
//     }
//     void display() {
//         for (int i=0;i<size;i++) {
//             if (table[i] != -1) {
//                 cout << i << " : " << table[i] << endl;
//             }
//         }
//     }   
// };
// int main() {
//     HashTable h(10);
//     h.linearProbing(5);
//     h.linearProbing(15);
//     h.linearProbing(25);
//     h.linearProbing(35);
//     cout << "Hash Table using Linear Probing:" << endl;
//     h.display();
    
//     HashTable h2(10);
//     h2.quadraticProbing(5);
//     h2.quadraticProbing(15);
//     h2.quadraticProbing(25);
//     h2.quadraticProbing(35);
//     cout << "Hash Table using Quadratic Probing:" << endl;
//     h2.display();
    
//     return 0;
// }
//graph using adjacency list and adjacency matrix

#include <iostream>
using namespace std;
class Graph {
private:
    int V;
    int** adjMatrix;    
public:
    Graph(int v) {
        V = v;
        adjMatrix = new int*[V];
        for (int i=0;i<V;i++) {
            adjMatrix[i] = new int[V];
            for (int j=0;j<V;j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // For undirected graph
    }
    void display() {
        for (int i=0;i<V;i++) {
            for (int j=0;j<V;j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main() {    
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    
    cout << "Adjacency Matrix:" << endl;
    g.display();
    
    return 0;
}
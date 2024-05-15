#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> >
createAdjacencyMatrix(vector<vector<int> >& graph,
    int numVertices)
{
    // Inicia a matriz com 0
    vector<vector<int> > adjMatrix(
        numVertices, vector<int>(numVertices, 0));

    // Preenche a matriz 
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            if (graph[i][j] == 1) {
                adjMatrix[i][j] = 1;
                adjMatrix[j][i]
                    = 1; 
            }
        }
    }

    return adjMatrix;
}

int main()
{
    //  valores sao listas
    // dos adjacentes aos vertices
    vector<vector<int> > graph = { { 0, 1, 0, 0 },
                                   { 1, 0, 1, 0 },
                                   { 0, 1, 0, 1 },
                                   { 0, 0, 1, 0 } };

    int numVertices = graph.size();

    vector<vector<int> > adjMatrix
        = createAdjacencyMatrix(graph, numVertices);

    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

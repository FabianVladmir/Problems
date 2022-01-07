#include <iostream>
#include <fstream>

using namespace std;

class graphType
{
    public:
    bool isEmpty() const;
    //Function to determine whether the graph is empty.
    //Postcondition: Returns true if the graph is empty;
    // otherwise, returns false.
    void createGraph();
    //Function to create a graph.
    //Postcondition: The graph is created using the
    // adjacency list representation.
    void clearGraph();
    //Function to clear graph.
    //Postcondition: The memory occupied by each vertex
    // is deallocated.
    void printGraph() const;
    //Function to print graph.
    //Postcondition: The graph is printed.
    void depthFirstTraversal();
    //Function to perform the depth first traversal of
    //the entire graph.
    //Postcondition: The vertices of the graph are printed
    // using the depth first traversal algorithm.
    void dftAtVertex(int vertex);
    //Function to perform the depth first traversal of
    //the graph at a node specified by the parameter vertex.
    //Postcondition: Starting at vertex, the vertices are
    // printed using the depth first traversal algorithm.
    void breadthFirstTraversal();
    //Function to perform the breadth first traversal of
    //the entire graph.
    //Postcondition: The vertices of the graph are printed
    // using the breadth first traversal algorithm.
    graphType(int size = 0);
    //Constructor
    //Postcondition: gSize = 0; maxSize = size;
    // graph is an array of pointers to linked lists.
    ~graphType();
    //Destructor
    //The storage occupied by the vertices is deallocated.
    protected:
    int maxSize; //maximum number of vertices
    int gSize; //current number of vertices
    unorderedLinkedList<int> *graph; //array to create
    //adjacency lists
    private:
    void dft(int v, bool visited[]);
    //Function to perform the depth first traversal of
    //the graph at a node specified by the parameter vertex.
    //This function is used by the public member functions
    //depthFirstTraversal and dftAtVertex.
    //Postcondition: Starting at vertex, the vertices are
    // printed using the depth first traversal algorithm.
};

bool graphType::isEmpty() const
{
return (gSize == 0);
}

void graphType::createGraph()
{
    ifstream infile;
    char fileName[50];
    int vertex;
    int adjacentVertex;
    if (gSize != 0) //if the graph is not empty, make it empty
    clearGraph();
    cout << "Enter input file name: ";
    cin >> fileName;
    cout << endl;
    infile.open(fileName);
    if (!infile)
    {
    cout << "Cannot open input file." << endl;
    return;
    }
    infile >> gSize; //get the number of vertices
    for (int index = 0; index < gSize; index++)
    {
    infile >> vertex;
    infile >> adjacentVertex;
    while (adjacentVertex != -999)
    {
    graph[vertex].insertLast(adjacentVertex);
    infile >> adjacentVertex;
    } //end while
    } // end for
    infile.close();
} //end createGraph

void graphType::clearGraph()
{
    for (int index = 0; index < gSize; index++)
    graph[index].destroyList();
    gSize = 0;
} //end clearGraph

void graphType::printGraph() const
{
    for (int index = 0; index < gSize; index++)
    {
    cout << index << " ";
    graph[index].print();
    cout << endl;
    }
    cout << endl;
} //end printGraph

//Constructor
graphType::graphType(int size)
{
    maxSize = size;
    gSize = 0;
    graph = new unorderedLinkedList<int>[size];
}
//Destructor
graphType::~graphType()
{
    clearGraph();
}





class msTreeType: public graphType
{
    public:
    void createSpanningGraph();
    //Function to create the graph and the weight matrix.
    //Postcondition: The graph using adjacency lists and
    // its weight matrix is created.
    void minimumSpanning(int sVertex);
    //Function to create a minimum spanning tree with
    //root as sVertex.
    // Postcondition: A minimum spanning tree is created.
    // The weight of the edges is also saved in the array
    // edgeWeights.
    void printTreeAndWeight();
    //Function to output the edges of the minimum spanning tree
    //and the weight of the minimum spanning tree.
    //Postcondition: The edges of a minimum spanning tree
    // and their weights are printed.
    msTreeType(int size = 0);
    //Constructor
    //Postcondition: gSize = 0; maxSize = size;
    // graph is an array of pointers to linked lists.
    // weights is a two-dimensional array to store the weights
    // of the edges.
    // edges is an array to store the edges of a minimum
    // spanning tree.
    // edgeWeights is an array to store the weights of the
    // edges of a minimum spanning tree.
    ~msTreeType();
    //Destructor
    //The storage occupied by the vertices and the arrays
    //weights, edges, and edgeWeights is deallocated.
    protected:
    int source;
    double **weights;
    int *edges;
    double *edgeWeights;
};

void msTreeType::minimumSpanning(int sVertex)
{
int startVertex, endVertex;
double minWeight;
source = sVertex;
bool *mstv;
mstv = new bool[gSize];
for (int j = 0; j < gSize; j++)
{
    mstv[j] = false;
    edges[j] = source;
    edgeWeights[j] = weights[source][j];
    }
    mstv[source] = true;
    edgeWeights[source] = 0;
for (int i = 0; i < gSize - 1; i++)
{
    minWeight = DBL_MAX;
    for (int j = 0; j < gSize; j++)
        if (mstv[j])
        for (int k = 0; k < gSize; k++)
            if (!mstv[k] && weights[j][k] < minWeight)
            {
            endVertex = k;
            startVertex = j;
            minWeight = weights[j][k];
            }
            mstv[endVertex] = true;
            edges[endVertex] = startVertex;
            edgeWeights[endVertex] = minWeight;
            } //end for
} //end minimumSpanning

void msTreeType::printTreeAndWeight()
{
    double treeWeight = 0;
    cout << "Source Vertex: " << source << endl;
    cout << "Edges Weight" << endl;

    for (int j = 0; j < gSize; j++)
    {
    if (edges[j] != j)
    {
    treeWeight = treeWeight + edgeWeights[j];
    cout << "("<<edges[j] << ", " << j << ") "
    << edgeWeights[j] << endl;
    }
    }
    cout << endl;
    cout << "Minimum spanning Tree Weight: "
    << treeWeight << endl;
} //end printTreeAndWeight

msTreeType::msTreeType(int size):graphType(size)
{
    weights = new double*[size];
    for (int i = 0; i < size; i++)
    weights[i] = new double[size];
    edges = new int[size];
    edgeWeights = new double[size];
    }
    //Destructor
    msTreeType::~msTreeType()
    {
    for (int i = 0; i < gSize; i++)
    delete [] weights[i];
    delete [] weights;
    delete [] edges;
    delete edgeWeights;
}
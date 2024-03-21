#include <iostream>
using namespace std;

class FullQueue
{

};

class EmptyQueue
{

};

template <class ItemType>
class QueType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;
};

template <class ItemType>
QueType<ItemType>::QueType(){
    front = NULL;
    rear = NULL;
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty(){
    return (front == NULL);
}

template<class ItemType>
bool QueType<ItemType>::IsFull(){
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}

template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem){
    if(IsFull())
        throw FullQueue();
    else{
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL)
            front = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item){
    if(IsEmpty())
        throw EmptyQueue();
    else{
        NodeType* tempPtr;
        tempPtr = front;
        item = front->info;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete tempPtr;
    }
}

template <class ItemType>
void QueType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;
    while(front != NULL){
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

template <class ItemType>
QueType<ItemType>::~QueType(){
    MakeEmpty();
}


class FullStack{

};

class EmptyStack{

};

template <class ItemType>
class StackType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
private:
    NodeType* topPtr;
};

template <class ItemType>
StackType<ItemType>::StackType(){
    topPtr = NULL;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (topPtr == NULL);
}

template <class ItemType>
ItemType StackType<ItemType>::Top(){
    if(IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
    if(IsFull())
        throw FullStack();
    else{
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}

template <class ItemType>
void StackType<ItemType>::Pop(){
    if(IsEmpty())
        throw EmptyStack();
    else{
        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
StackType<ItemType>::~StackType(){
    NodeType* tempPtr;
    while(topPtr != NULL) {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}


template<class VertexType>
class GraphType
{
public:
    GraphType();
    GraphType(int maxV);
    ~GraphType();
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    void AddVertex(VertexType);
    void AddEdge(VertexType, VertexType, int);
    int WeightIs(VertexType, VertexType);
    void GetToVertices(VertexType, QueType<VertexType> &);
    void ClearMarks();
    void MarkVertex(VertexType);
    bool IsMarked(VertexType);
private:
    int numVertices;
    int maxVertices;
    VertexType* vertices;
    int** edges;
    bool* marks;
};

template<class VertexType>
GraphType<VertexType>::GraphType()
{
    numVertices = 0;
    maxVertices = 50;
    vertices = new VertexType[50];
    edges = new int*[50];

    for(int i = 0; i < 50; i++){
        edges[i] = new int[50];
    }

    marks = new bool[50];
}

template<class VertexType>
GraphType<VertexType>::GraphType(int maxV)
{
    numVertices = 0;
    maxVertices = maxV;
    vertices = new VertexType[maxV];
    edges = new int*[maxV];

    for(int i = 0; i < maxV; i++){
        edges[i] = new int[maxV];
    }

    marks = new bool[maxV];
}

template<class VertexType>
GraphType<VertexType>::~GraphType()
{
    delete[] vertices;
    delete[] marks;
    for(int i = 0; i < maxVertices; i++){
        delete[] edges[i];
    }
    delete[] edges;
}

const int NULL_EDGE = 0;
template<class VertexType>
void GraphType<VertexType>::AddVertex(VertexType vertex)
{
    vertices[numVertices] = vertex;

    for(int index = 0; index < numVertices; index++){
        edges[numVertices][index] = NULL_EDGE;
        edges[index][numVertices] = NULL_EDGE;
    }

    numVertices++;
}

template<class VertexType>
int IndexIs(VertexType* vertices, VertexType vertex)
{
    int index = 0;

    while(!(vertex ==  vertices[index])){
        index++;
    }

    return index;
}

template<class VertexType>
void GraphType<VertexType>::AddEdge(VertexType fromVertex, VertexType toVertex, int weight)
{
    int row = IndexIs(vertices, fromVertex);
    int col = IndexIs(vertices, toVertex);
    edges[row][col] = weight;
}

template<class VertexType>
int GraphType<VertexType>::WeightIs(VertexType fromVertex, VertexType toVertex)
{
    int row = IndexIs(vertices, fromVertex);
    int col = IndexIs(vertices, toVertex);
    return edges[row][col];
}

template<class VertexType>
void GraphType<VertexType>::GetToVertices(VertexType vertex, QueType<VertexType>& adjVertices)
{
    int fromIndex;
    int toIndex;

    fromIndex = IndexIs(vertices, vertex);

    for(toIndex = 0; toIndex < numVertices; toIndex++){
        if(edges[fromIndex][toIndex] != NULL_EDGE){
            adjVertices.Enqueue(vertices[toIndex]);
        }
    }
}

































int main()
{
    cout << "No Error!!";
    return 0;
}

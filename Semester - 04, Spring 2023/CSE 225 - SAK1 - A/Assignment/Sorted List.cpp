#include <iostream>
using namespace std;

//Declaration
template <class T>
class SortedList{
private:
    T *dataList = NULL;
    int maxSize;
    int currentSize;
public:
    SortedList(int);
    ~SortedList();
    bool isFull();
    int getLength();
    bool insertItem(T);
    bool deleteItem(T);
    bool searchItem(T, int&);
    void printList();
};


//implementation
template <class T>
SortedList<T>::SortedList(int mS){
    dataList = new T[mS];
    maxSize = mS;
    currentSize = 0;
}

template <class T>
SortedList<T>::~SortedList(){
    delete[] dataList;
}

template <class T>
bool SortedList<T>::isFull(){
    return (maxSize == currentSize);
}

template <class T>
int SortedList<T>::getLength(){
    return currentSize;
}

template <class T>
bool SortedList<T>::insertItem(T item){
    int index = 0;
    bool moreToSearch = (index < currentSize);
    while(moreToSearch && item > dataList[index]){
        index++;
        moreToSearch = (index < currentSize);
    }

    if(!isFull()){
        for(int i = currentSize; i > index; i--){
            dataList[i] = dataList[i-1];
        }
        dataList[index] = item;
        currentSize++;
        return true;
    }
    else
        return false;
}

template <class T>
bool SortedList<T>::searchItem(T item, int &index){
    int midpoint, firstIndex = 0, lastIndex = currentSize-1;
    while(firstIndex <= lastIndex){
        midpoint = (firstIndex + lastIndex)/2;
        if(dataList[midpoint] == item){
            index = midpoint;
            return true;
        }
        else if(item > dataList[midpoint])
            firstIndex = midpoint + 1;
        else
            lastIndex = midpoint - 1;
    }
    return false;
}

template <class T>
bool SortedList<T>::deleteItem(T item){
    int index;
    if(searchItem(item, index)){
        for(int i = index; i < currentSize - 1; i++){
            dataList[i] = dataList[i+1];
        }
        //dataList[--currentSize] = NULL;
        currentSize--;
        return true;
    }
    else
        return false;
}

template <class T>
void SortedList<T>::printList(){
    for(int i = 0; i < currentSize; i++){
        cout << dataList[i] << " ";
    }
    cout << endl;
}

//main driver file
int main()
{
    int maxSize, i, item, index;
    bool isFound;
    cout << "Enter array size: ";
    cin >> maxSize;

    SortedList<int> integerList(maxSize);

    cout << "Current length: " << integerList.getLength() << endl;
    cout << "insert 5 item: ";
    for(i = 0; i < 5; i++){
        cin >> item;
        integerList.insertItem(item);
    }

    cout << endl << "Printing List: ";
    integerList.printList();


    for(i = 0; i < 3; i++){
        cout << "Insert item for Search: ";
        cin >> item;
        if(integerList.searchItem(item, index)){
            cout << "Item is found in the index: " << index << endl << endl;
        }
        else{
            cout << "Item is not found." << endl << endl;
        }
    }

    cout << "List is Full(1) or Not(0): " << integerList.isFull() << endl << endl;

    for(i = 0; i < 3; i++){
        cout << "Insert item for Delete: ";
        cin >> item;
        if(integerList.deleteItem(item)){
            cout << "Delete Successfully" << endl << endl;
        }
        else{
            cout << "Item is not found..!!" << endl << endl;
        }
    }

    cout << "Printing the list: ";
    integerList.printList();

    cout << "List is Full(1) or Not(0): " << integerList.isFull() << endl << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Stack class declaration
class Stack {
    struct Node {
        char data;
        Node* next;
    };

private:
    Node* top;
public:
    Stack();
    bool isMemoryFull();
    void push(char);
    void pop();
    char peek();
    bool isEmpty();
};


//implementation
Stack::Stack(){
    top = nullptr;
}

bool Stack::isMemoryFull(){
    Node* temp;
    try{
        temp = new Node;
        delete temp;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}

void Stack::push(char c){
    if(isMemoryFull()){
        cout << "Memory Full!!" << endl;
    }
    else{
        Node* newNode = new Node;
        newNode->data = c;
        newNode->next = top;
        top = newNode;
    }
}

void Stack::pop(){
    if (top == nullptr){
        cout << "Stack is empty." << endl;
    }
    else{
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}

char Stack::peek(){
    if (top == nullptr){
        cout << "Stack is empty." << endl;
        return '\0';
    }
    return top->data;
}

bool Stack::isEmpty(){
    return top == nullptr;
}


// Function to check if a set of parentheses is balanced or not
bool isBalanced(string expression){
    Stack temp;
    for(int i = 0; i < expression.length(); i++){
        if(expression[i] == '('){
            temp.push(expression[i]);
        }
        else if(expression[i] == ')'){
            if(temp.isEmpty() || temp.peek() != '('){
                return false;
            }
            temp.pop();
        }
    }
    return temp.isEmpty();
}

int main()
{
    string expression = "(()(()))";

    cout << "Expression is: " << expression << endl;
    if(isBalanced(expression)){
        cout << "Results: Balanced." << endl;
    }
    else{
        cout << "Results: Not Balanced." << endl;
    }
    return 0;
}


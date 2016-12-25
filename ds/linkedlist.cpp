#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next=nullptr;

    Node(int x){
        data = x;
        cout << "creating node with value: " << data << endl;
        
    };

    ~Node(){
        cout << "destroyed node with value: " << data << endl;

    };
};

class Linkedlist{

public:

Linkedlist(){
    cout << "From the constructor of Linkedlist\n";

}

~Linkedlist(){

    cout << "From the destructor of linked list\n";

    while(root!=nullptr){
        current  = root->next;
        delete root;
        root = current;
    }
}
void push(int x){
    

    if(current==nullptr){
        current = new Node(x);
        
    }else{
        current->next = new Node(x);
        current= current->next;
    }
    
    if(root==nullptr){
        root = current;
    }
};

void print(){
    Node *tmp = root;
    while(tmp!=nullptr){
        std::cout << tmp->data;
        tmp = tmp->next;
    }

}

private:
Node *root = nullptr;
Node *current = nullptr;



};


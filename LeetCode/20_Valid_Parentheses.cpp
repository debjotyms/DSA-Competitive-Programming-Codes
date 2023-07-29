#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class LinkedLsit{
    public:
        Node *head;
        
        LinkedLsit(){
            head = NULL;
        }

        void insert(int data){
            Node *n;
            n->data = data;
            n->next = head;
            head = n;
        }

        void triverse(){
            Node *a = head;

        }
};

int main(){
    LinkedLsit list;
    
    list.insert(10);
}
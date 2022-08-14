#include<iostream>
#include <stdlib.h>
using namespace std;
class Node{
public:
    int Value;
    Node* Next;
};
void printList(Node *n){
    while(n!=NULL){
          cout<<n->Value<<endl;
          n=n->Next;
    }
}
int main(){
    Node* head =new Node();
    Node* secound =new Node();
    Node* third =new Node();

    head->Value=1;
    head->Next=secound;
    secound->Value=2;
    secound->Next= third;
    third->Value=3;
    third->Next= NULL;
    printList(head);
}
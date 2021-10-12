//inserting node at linked list
#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};
struct node* head;  //global variable
void Insert(int x){
    node *temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->link=NULL;
    head = temp;
}
void print(){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->link;
    }
    cout<<"\n";
    
}
int main() {
 head=NULL;
 cout<<"How Many Numbers?\n";
 int n,x;
 cin>>n;
 for(int i=0;i<n;i++){
     cin>>x;
     Insert(x);
     print();
 }
}
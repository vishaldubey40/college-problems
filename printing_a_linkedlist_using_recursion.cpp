#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
void print(struct node* p){
    if(p == NULL){
        return;
    }
    cout<<p->data;
    print(p->next);
}

struct node* insert(node* head,int data){
    node *temp= new node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL) { head=temp;}
    else{
        node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
        
    }
    return head;
}
int main() {
    struct node* head=NULL;  //local variable
   
    head=insert(head,2);
     head=insert(head,4);
      head=insert(head,6);
       head=insert(head,5);
        head=insert(head,3);
        print(head);
}

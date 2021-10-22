#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head;
void insert(int data){
    struct node* temp1=(node*)malloc(sizeof(struct node));
        temp1->data=data;
        temp1->next=NULL;
        if(head!=NULL)  temp1->next=head;
        head=temp1;
       //  node* temp2=head;
       //   temp1->next=temp2->next;
       // temp2->next=temp1;
}
void print(){
    node* temp1=head;
        while(temp1!=NULL){
            cout<<temp1->data;
            temp1=temp1->next;
        }
}
void delete1(int n){
    struct node* temp1 = head;
    if(n==1){
        head=temp1->next;  //points to the second position of node
       free(temp1);  //delete temp1
        
    }
    for(int i=0;i<n-2;i++){
         temp1=temp1->next;  //temp1 points to n-1 nodes
    }
    struct node* temp2=temp1->next; //nth node
    temp1->next=temp2->next;
    free(temp2);  //delete temp2;
}
int main() {
    head = NULL;  //empty llist
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);  // 2 3 4 5 6 
   
    print();
    cout<<"Enter position of an element"<<endl;
     int n;
    cin>>n;
    delete1(n);
    print();
    
    
}

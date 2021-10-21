#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node* next;
    };
    node* head;
    void insert(int data,int n){
        node* temp1=new node();
        temp1->data=data;
        temp1->next=NULL;
        if(n==1){
            temp1->next=head;
            head =temp1;
            return;
        }
        node* temp2=head;
        for(int i=0;i<n-2;i++){
            temp2=temp2->next;
        }
        temp1->next=temp2->next;
        temp2->next=temp1;
        
    }
    void print(){
        node* temp1=head;
        while(temp1!=NULL){
            cout<<temp1->data;
            temp1=temp1->next;
        }
    }
int main() {
    head=NULL;
    insert(4,1);//4
    insert(2,2);//42
    insert(2,1);//242
    insert(3,3);//2432
    print();
}

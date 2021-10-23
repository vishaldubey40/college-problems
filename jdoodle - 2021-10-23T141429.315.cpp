#include <bits/stdc++.h>

using namespace std;
// struct node(){
//     int data;
//     struct node* next;
//     }
// struct node* head;
// void insert(int n){
//       struct node* temp1=(node*)malloc(sizeof(struct node));
//         temp1->data=data;
//         temp1->next=NULL;
//         if(head!=NULL)  temp1->next=head;
// }

int main() {
    //head =NULL;
   long long int t;
    cin>>t;
    while(t--){
        long long int n,k=0,p=0;
        cin>>n;
        long long int arr[n];
        int a,b,c;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            p+=arr[i];
        }
        a=p/n;
        b=p%n;
        
        //for(int i=0;i<n;i++){
          //  for(int j=i+1;j<n;j++){
            //     k+=abs(arr[i]-arr[j]);
            //}
        //}
        cout<<(n-b)*b<<endl;
    }
}
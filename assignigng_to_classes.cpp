    /*
    *******************************************   * *********** ******************************************
    ******  ******************   **************   ** **********    ************************************************
    *******  ****************    **************   ****  ******* **********************************************
    ********  *************   *****************   *******  *** ************************************************
    *********  **********   *******************   *********   *************************************************
    **********  *******    ********************   ******** ***************************************************
    ***********  *****   ***************** * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
**********************
   *************************************
   **************************************************************************************
   ****************************************************************************************
   **************************************************************************************
   ********************************************************************************
    */
    #include <bits/stdc++.h>
    using namespace std;
   #define int long long
    #define pi (3.141592653589)
    #define mod 1000000007
   #define int long long
    #define float double
    #define pb push_back
    #define mp make_pair
    #define ff first
    #define ss second
    #define all(c) c.begin(), c.end()
    #define min3(a, b, c) min(c, min(a, b))
    #define min4(a, b, c, d) min(d, min(c, min(a, b)))
    #define rrep(i, n) for(int i=n-1;i>=0;i--)
    #define rep(i,n) for(int i=0;i<n;i++)
    #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    
    bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
    }
    return true;
    }
    

    int32_t main(){
        fast
    // Fuck Ratings, I'm in Love with Experience.
    // Once a Charas, Always a CHARAS.
    int t = 1;
    cin >> t ;
    while(t--){
       int size;
       cin >> size;
       int p = 2*size;
       int arr[p];
       rep(i,p){
        cin >> arr[i];
       }
       sort(arr, arr + p);
       if( size%2 != 0 ){
         int b1[size];
          int b2[size];
         //  b1[0]=arr[0];
         int j=0;
          for(int i=0; i < p ; i = i+2){
          b1[j] = arr[i];
          j++;}
          j=0;
          for(int i=0; i < 2*size ; i = i+2){
          b2[j] = arr[i+1];
          j++;}
         int k=size/ 2;
          //cout << b1[k]<<endl;
         cout << abs(b1[k] - b2[k]) <<endl; 
       }else{
          int b11[size+1];
          int b12[size-1];
          b11[0]=arr[0];
          int j=1;
          for(int i=1; i < 2*size ; i = i+2){
          b11[j]=arr[i];
          j++;}
          j=0;
          for(int i=2; i < 2*size ; i = i+2){
          b12[j]=arr[i];
          j++;}
          
          cout << abs(b12[(size-1)/2]-b11[(size+1)/2]) << endl;
       }
    }
    }

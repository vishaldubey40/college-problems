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
    vector<int> v(t),v1;
    rep(i,t){
        cin>>v[i];
    }
    int sum=0,ct=0,p;
    // for(auto it:v)
    // cout<<it<<endl;
    rep(i,t){
      if(v[i]<=v[i+1]){
     ct++;
      }
     else{
         if(i<=t-1)
         ct++;
     v1.push_back(ct);
         ct=0;
      }
     v1.push_back(ct);
    }
   // sort(v1.begin(),v1.end());
    cout<<*max_element(v1.begin(), v1.end())<<endl;
    }

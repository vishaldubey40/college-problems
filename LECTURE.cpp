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
    // int t = 1;
    // cin >> t ;
     int n, m;
     cin >> n >> m;
     unordered_map<string, string> ma;
     for( int i=0; i<m; i++){
        string s1,s2;
        cin>> s1 >> s2;
        ma[s1]=s2;
     }
     while(n--){
        string s1;
        cin >> s1;
        int k = s1.length();
        int l= ma[s1].length();
        if(k>l){
           cout<<ma[s1]<<" ";
        }else if(k<=l){
           cout << s1 <<" ";
        }
     }
     }

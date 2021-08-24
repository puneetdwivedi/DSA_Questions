#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

 ll findMinDiff(vector<ll> arr, ll n, ll m){
    sort(arr.begin(),arr.end());
    long long  res=arr[m-1]-arr[0];
    for(int i=1;i<=n-m;i++){
        res=min(res,(arr[m-1+i]-arr[i]));
    }
    return res;  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n,m;cin>>n>>m;
        vector<ll>arr(n,0);
        loop(i,0,n)cin>>arr[i];
        cout<<findMinDiff(arr,n,m);
    }while(t--);

    return 0;
}

// approch is to use sliding window technique
#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int maxProfit(vector<int> &arr){
    int n=arr.size();
    int maximum[n];
    int curr=INT_MIN;
    for(int i=n-1;i>=0;i--){
        curr=max(curr,arr[i]);
        maximum[i]=curr;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,(maximum[i]-arr[i]));
    }
    return res;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n;cin>>n;
        vector<int>arr(n,0);
        loop(i,0,n)cin>>arr[i];
        cout<<maxProfit(arr);
    }while(t--);

    return 0;
}
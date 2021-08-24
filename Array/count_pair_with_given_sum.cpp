#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int getPairsCount(int arr[], int n, int k) {
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int res=0;
    for(int i=0;i<n;i++){
        int tofind=k-arr[i];
        mp[arr[i]]--;
        if(mp.find(tofind) != mp.end()){
            auto it=mp.find(tofind);
            res+=it->second;
        }
        
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
        int k;cin>>k;
        int arr[n];
        loop(i,0,n)cin>>arr[i];
        cout<<getPairsCount(arr,n,k);
    }while(t--);

    return 0;
}
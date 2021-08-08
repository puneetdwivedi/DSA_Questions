#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int trappingWater(int arr[], int n){
    int r_maximum[n];
    int tmp=arr[n-1];
    for(int i=n-1;i>=0;i--){
        tmp=max(arr[i],tmp);
        r_maximum[i]=tmp;
    }
    tmp=arr[0];
    int l_maximum[n];
    for(int i=0;i<n;i++){
        tmp=max(arr[i],tmp);
        l_maximum[i]=tmp;
    }
    int res=0;
    for(int i=1;i<n-1;i++){
        int mx=min(l_maximum[i],r_maximum[i]);
        if(mx>arr[i]){
            res+=(mx-arr[i]);
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
        int arr[n];
        loop(i,0,n)cin>>arr[i];
        cout<<trappingWater(arr,n);
    }while(t--);

    return 0;
}
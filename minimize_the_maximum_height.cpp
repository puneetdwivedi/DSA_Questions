#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n,k;cin>>n>>k;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sm=arr[0]+k;
        int lg=arr[n-1]-k;
        int ans=arr[n-1]-arr[0];
        int mi,mx;
        loop(i,0,n-1){
            mi=min(sm,arr[i+1]-k);
            mx=max(lg,arr[i]+k);
            if(mi>=0)ans=min(ans,mx-mi);
        }
        cout<<ans<<endl;
    }while(t--);

    return 0;
}
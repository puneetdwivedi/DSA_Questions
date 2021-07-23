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
        ll n;cin>>n;
        n++;  
        ll arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        ll totalsum=(n*(n+1))/2;
        ll totalsqsum=(n*(n+1)*((2*n)+1))/6;
        ll currsum=0;
        ll currsqsum=0;
        loop(i,0,n){
            currsum+=arr[i];
            currsqsum+=(arr[i]*arr[i]);
        }
        // cout<<totalsqsum<<" "<<totalsum;
        // cout<<endl;
        // cout<<currsqsum<<" "<<currsum;
        // cout<<endl;
        int xmy=totalsum-currsum;
        totalsqsum-=currsqsum;
        totalsqsum/=xmy;
        totalsqsum+=xmy;
        totalsqsum/=2;
        xmy-=totalsqsum;
        xmy=-xmy;
        cout<<xmy;
        // cout<<endl;
        // cout<<totalsqsum;

    }while(t--);

    return 0;
}
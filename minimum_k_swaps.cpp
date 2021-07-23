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
        int n;cin>>n;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        int k;cin>>k;
        int total=0;
        loop(i,0,n){
            if(arr[i] <= k)total++;
        }
        int curr=0;
        loop(i,0,total){
            if(arr[i] <= k)curr++;
        }
        int res=total-curr;
        int i=total;
        while(i<n){
            if(arr[i-total] <= k)curr--;
            if(arr[i] <= k)curr++;
            res=min(res,total-curr);
            i++;
        }
        cout<<res<<endl;

    }while(t--);

    return 0;
}
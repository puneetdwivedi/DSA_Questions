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
        sort(arr,arr+n);
        if(n%2==0){
              int x=arr[n/2]+arr[n/2-1];
              cout<<x/2;
        }
        else{
            cout<<arr[n/2];
        }

    }while(t--);

    return 0;
}
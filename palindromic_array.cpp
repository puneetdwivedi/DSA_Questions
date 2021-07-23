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
        int counter=0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        int rev=0;
        while(x>0){
            rev=rev*10+(x%10);
            x/=10;
        }
        if(arr[i]== rev)counter++;
        
    }
    if(counter==n)cout<<1;
    else cout<<0;

    }while(t--);

    return 0;
}
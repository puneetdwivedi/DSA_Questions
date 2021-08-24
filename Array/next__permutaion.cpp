#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

void _next_permutation(int arr[],int n){
    if(n<=1)return;
    int ind1=-1,ind2;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind1=i;break;
        }
    }
    if(ind1>=0){
        for(int i=n-1;i>=ind1;i--){
            if(arr[ind1]< arr[i]){
                ind2=i;break;
            }
        }
        swap(arr[ind1],arr[ind2]);
    }
    reverse(arr+ind1+1,arr+n);
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
        _next_permutation(arr,n);
        loop(i,0,n)cout<<arr[i]<<" ";

    }while(t--);

    return 0;
}
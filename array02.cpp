// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;


int max(int arr[],int n){
    int res=arr[0];
    loop(i,1,n){
        res=max(arr[i],res);
    }
    return res;
}

int min(int arr[],int n){
    int res=arr[0];
    loop(i,1,n){
        res=min(res,arr[i]);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t=0;
    cin>>t;t--;
    do{
        int n;cin>>n;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        cout<<max(arr,n)<<" ";
        cout<<min(arr,n)<<endl;
        
    }while(t--);

    return 0;
}
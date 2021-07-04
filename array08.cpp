// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

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
        int res=arr[0];
        int sum=0;
        int i=0;
        while(i<n){
            sum+=arr[i];
            res=max(res,sum);
            if(sum<0)sum=0;
            i++;
        }
        cout<<res<<endl;
    }while(t--);

    return 0;
}
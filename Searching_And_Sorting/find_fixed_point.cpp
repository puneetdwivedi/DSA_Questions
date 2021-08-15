#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

vector<int> valueEqualToIndex(int arr[], int n) {
    vector<int>res;
    for(int i=0;i<n;i++){
        if(arr[i]==i+1)res.push_back(i+1);
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
        vector<int>res=valueEqualToIndex(arr,n);
        loop(i,0,res.size()){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }while(t--);

    return 0;
}
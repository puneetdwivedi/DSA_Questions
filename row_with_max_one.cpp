#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;


int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    int ans=-1;
    int i=0;
    int j=m-1;
    while(i<n && j>=0){
        if(arr[i][j]==1){
            j--;ans=i;
        }
      else if(arr[i][j]==0)i++;
    }
    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n,m;cin>>n>>m;
        vector<vector<int>>arr;
        loop(i,0,n){
            vector<int>temp(m,0);
            loop(j,0,m)cin>>temp[j];
            arr.push_back(temp);
        }
        cout<<rowWithMax1s(arr,n,m);

        
    }while(t--);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;


bool searchMatrix(vector<vector<int>>& arr, int target){
    int n=arr.size();
    int m=arr[0].size();
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(arr[i][j] < target) i++;
        else if(arr[i][j] > target) j--;
        else return true;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n,m;cin>>n>>m;
        int target;cin>>target;
        vector<vector<int>>arr;
        for(int i=0;i<n;i++){
            vector<int>temp(m,0);
            loop(j,0,m){
                cin>>temp[j];
            }
            arr.push_back(temp);
        }
        cout<<searchMatrix(arr,target);
    }while(t--);

    return 0;
}
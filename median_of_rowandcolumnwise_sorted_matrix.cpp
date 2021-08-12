#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int median(vector<vector<int>> &arr, int r, int c){
    int lo=1,hi=2000;      // totallly depends on the constraints
    while(lo<=hi){
        int count=0;
        int mid=(lo+hi)/2;
        loop(i,0,r){
            count+=( upper_bound(arr[i].begin(),arr[i].end(),mid)-arr[i].begin() );
        }
        if(count <= (r*c)/2)lo=mid+1;
        else hi=mid-1;
    }
    return lo;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int r,c;cin>>r>>c;
        vector<vector<int>> arr;
        loop(i,0,r){
            vector<int>temp (c,0);
            loop(j,0,c){
                cin>>temp[j];
            }
            arr.push_back(temp);
        }
        cout<<median(arr,r,c);
    }while(t--);

    return 0;
}
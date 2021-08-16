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
        vector<pair<int,int>>arr;
        loop(i,0,n){
            int x,y;cin>>x>>y;
            arr.push_back({x,y});
        }
        sort(arr.begin(),arr.end());
        vector<pair<int,int>>res;
        int f=arr[0].first;
        int l=arr[0].second;
        for(int i=1;i<n;i++){
            if(f==-1){
                f=arr[i].first;
                l=arr[i].second;
            }
            else if(arr[i].first <= l){
                l=arr[i].second;
            }
            else{
                res.push_back({f,l});
                f=-1;
                l=-1;
            }
        }
        cout<<f<<" "<<l<<endl;
        loop(i,0,res.size()){
            cout<<"["<<res[i].first<<","<<res[i].second<<"] ";
        }
    }while(t--);

    return 0;
}
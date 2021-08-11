#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

vector<vector<int>> sortedMatrix(vector<vector<int>> Mat) {
    vector<int>res;
    for(auto v:Mat){
        res.insert(res.end(),v.begin(),v.end());
    }
    sort(res.begin(),res.end());
    int c=0;
    for(int i=0;i<Mat.size();i++){
        for(int j=0;j<Mat[i].size();j++){
            Mat[i][j]=res[c];
            c++;
        }
    }
    return Mat;
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
        arr=sortedMatrix(arr);
        loop(i,0,n){
            loop(j,0,m)cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        
    }while(t--);

    return 0;
}
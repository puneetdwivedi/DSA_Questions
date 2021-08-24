#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
    int strt_column=0;
    int strt_row=0;
    int end_column=c-1;
    int end_row=r-1;
    int size=r*c;
    vector<int>res;
    while(strt_row <= end_row && strt_column <=end_column){
        if(res.size()== size)break;
        for(int i=strt_column;i<=end_column;i++){
            res.push_back(matrix[strt_row][i]);
        }
        strt_row++;
        if(res.size()==size)break;
        for(int i=strt_row;i<=end_row;i++){
            res.push_back(matrix[i][end_column]);
        }
        end_column--;
        if(res.size()==size)break;
        for(int i=end_column;i>=strt_column;i--){
            res.push_back(matrix[end_row][i]);
        }
        end_row--;
        if(res.size()==size)break;
        for(int i=end_row;i>=strt_row;i--){
            res.push_back(matrix[i][strt_column]);
        }
        strt_column++;
    }
    return res;
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
            vector<int>tmp(m,0);
            loop(j,0,m){
                cin>>tmp[j];
            }
            arr.push_back(tmp);
        }
        vector<int>res=spirallyTraverse(arr,n,m);
        loop(i,0,res.size())cout<<res[i]<<" ";
    }while(t--);

    return 0;
}
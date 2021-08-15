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
        int r,c;cin>>r>>c;
        int arr[r][c];
        loop(i,0,r){
            loop(j,0,c)cin>>arr[i][j];
        }
        
    }while(t--);

    return 0;
}
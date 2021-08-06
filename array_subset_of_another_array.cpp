#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int>us;
    for(int i=0;i<n;i++){
        us.insert(a1[i]);
    }
    int res=0;
    for(int i=0;i<m;i++){
        if(us.find(a2[i]) != us.end())res++;
    }
    if(res==m)return "Yes";
    return "No";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n,m;cin>>n>>m;
        int a1[n],a2[m];
        loop(i,0,n)cin>>a1[i];
        loop(i,0,m)cin>>a2[i];
        cout<<isSubset(a1,a2,n,m);
    }while(t--);

    return 0;
}
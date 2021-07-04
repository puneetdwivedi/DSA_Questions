// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

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
        int n,m;cin>>n>>m;
        int a[n],b[m];
        set<int>s;
        loop(i,0,m+n){
            int x;cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }while(t--);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int middle(int a, int b, int c){
    int mn=min(a,min(b,c));
    int mx= max(a,max(b,c));
    return (a+b+c)-(mx+mn);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int a,b,c;cin>>a>>b>>c;
        cout<<middle(a,b,c)<<endl;
    }while(t--);

    return 0;
}
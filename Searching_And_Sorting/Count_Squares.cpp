#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

 int countSquares(int N) {
    int i=sqrt(N);
    if(i*i == N)return i-1;
    else return i;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n;cin>>n;
        cout<<countSquares(n);
    }while(t--);

    return 0;
}




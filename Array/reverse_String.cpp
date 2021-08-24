#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;


void reverse_string(string &st,int n){
    int i=0,j=n-1;
    while(i<j){
        char tmp=st[i];
        st[i]=st[j];
        st[j]=tmp;
        i++;j--;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n;cin>>n;
        string st;cin>>st;
        reverse_string(st,n);
        cout<<st;
    }while(t--);

    return 0;
}
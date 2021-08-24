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
        string st;cin>>st;
        int n=st.length();
        unordered_map<char,int>mp;
        loop(i,0,n){
            mp[st[i]]++;
        }
        for(auto it=mp.begin();it != mp.end();it++){
            if(it->second >1){
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
    }while(t--);

    return 0;
}
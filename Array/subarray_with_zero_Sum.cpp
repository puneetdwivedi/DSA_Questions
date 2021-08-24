#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

bool subArrayExists(int arr[], int n){
    unordered_map<int,int>mp;
    int curr=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        mp[curr]++;
    }
    for(auto it=mp.begin();it != mp.end();it++){
        if(it->second >1)return true;
        if(it->first ==0)return true;
    }
    return false;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n;cin>>n;
        int arr[n];
        loop(i,0,n)cin>>arr[i];
        if(subArrayExists(arr,n))cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }while(t--);

    return 0;
}

/*
BRUTE FORCE:: o(n^2)


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
        int arr[n];
        loop(i,0,n)cin>>arr[i];
        bool isres=false;
        loop(i,0,n){
            int curr=0;
            loop(j,i,n){
                curr+=arr[j];
                if(curr==0){
                    isres=true;
                    break;
                }
            }
        }
        if(isres)cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }while(t--);

    return 0;
}


*/
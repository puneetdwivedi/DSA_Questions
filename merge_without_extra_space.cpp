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
        int arr1[n],arr2[m];
        loop(i,0,n)cin>>arr1[i];
        loop(i,0,m)cin>>arr2[i];
        
    }while(t--);

    return 0;
}
/*
1st METHOD: BRUTE FORCE USE A SPACE OF O(n+m)
2nd METHOD:
{

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
        int arr1[n],arr2[m];
        loop(i,0,n)cin>>arr1[i];
        loop(i,0,m)cin>>arr2[i];
        loop(i,0,n){
            if(arr1[i]>arr2[0]){
                swap(arr1[i],arr2[0]);
            }
            int j=0;
            while(j<m && arr2[j]>arr2[j+1]){
                swap(arr2[j],arr2[j+1]);
                j++;
            }
        }
        loop(i,0,n)cout<<arr1[i]<<" ";
        loop(i,0,m)cout<<arr2[i]<<" ";
    }while(t--);

    return 0;
}
// code end;
}

3rd METHOD:
gap method
*/
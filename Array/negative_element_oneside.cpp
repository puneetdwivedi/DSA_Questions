// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

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
        loop(i,0,n){
            cin>>arr[i];
        }        
        int i=0,j=0;
        while(i<n){
            if(arr[i] < 0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;j++;
            }
            else{
                i++;
            }
        }
        loop(i,0,n){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }while(t--);

    return 0;
}
// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    cin>>t;t--;
    do{
        int n;cin>>n;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        int i=0;int j=n-1;
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;j--;
        }
        loop(i,0,n){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }while(t--);

    return 0;
}
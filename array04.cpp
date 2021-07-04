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
        int zero=0;int i=0;
        int two=n-1;
        while(i<=two){
            if(arr[i] ==0){
                int temp=arr[i];
                arr[i]=arr[zero];
                arr[zero]=temp;
                zero++;
                i++;
            }
            else if(arr[i] ==  2){
                int temp=arr[i];
                arr[i]=arr[two];
                arr[two]=temp;
                two--;
            }
            else i++;
        }
        loop(i,0,n){
            cout<<arr[i]<<" ";
        }
    }while(t--);

    return 0;
}
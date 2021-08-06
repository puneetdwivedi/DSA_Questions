#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int first_occurance(int arr[],int n,int x){
    int l=0;int h=n-1;
    int res=-1;
    while(l<=h){
    int mid=l+((h-l)/2);
        if(arr[mid]==x){
            res=mid;
            h=mid-1;
        }
        else if(arr[mid] > x){
            h=mid-1;
        }
        else l=mid+1;
    }
    return res;
}

int last_occurance(int arr[],int n,int x){
    int l=0;int h=n-1;
    int res=-1;
    while(l<=h){
    int mid=l+((h-l)/2);
        if(arr[mid]==x){
            res=mid;
            l=mid+1;
        }
        else if(arr[mid] > x){
            h=mid-1;
        }
        else l=mid+1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n,x;cin>>n>>x;
        int arr[n];
        loop(i,0,n)cin>>arr[i];
        cout<<first_occurance(arr,n,x)<< " "<< last_occurance(arr,n,x)<<endl;
    }while(t--);

    return 0;
}
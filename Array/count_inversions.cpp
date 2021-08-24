#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

void merge(int arr[],int lo,int mid,int hi,int &res){
    int i=lo;
    int j=mid+1;
    int k=lo;
    int temp[hi+1];
    while(i<=mid && j<=hi){
        if(arr[i] > arr[j]){
            res+=(mid+1-i);
            temp[k]=arr[j];
            k++;j++;
        }
        else{
            temp[k]=arr[i];
            k++;i++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;i++;
    }
    while(j<=hi){
        res+=(mid+1-i);
        temp[k]=arr[j];
        k++;j++;
    }
    loop(x,lo,hi+1){
        arr[x]=temp[x];
    }
}

void merge_sort(int arr[],int lo,int hi,int &res){
    int mid=(lo+hi)/2;
    if(lo < hi){
        merge_sort(arr,lo,mid,res);
        merge_sort(arr,mid+1,hi,res);
        merge(arr,lo,mid,hi,res);
    }
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
        int res=0;
        merge_sort(arr,0,n-1,res);
        cout<<res<<endl;
    }while(t--);

    return 0;
}

/*
BRUTE FORCE (O(N^2))
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
        int res=0;
        loop(i,0,n-1){
            loop(j,i+1,n){
                if(arr[i] > arr[j])res++;
            }
        }
        cout<<res<<endl;
    }while(t--);

    return 0;
}

// Use the idea of merge sort algo
*/
// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

// the idea is to use quick select

#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int partition(int arr[],int l,int h){
    int i=l,j=l;
    while(i<h){
        if(arr[i] <=  arr[h]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;i++;
        }
        else{
           i++;
        }
    }
    int temp=arr[h];
    arr[h]=arr[j];
    arr[j]=temp;
    return j;
}

int quickselect(int arr[],int l,int h,int k){
    int pi=partition(arr,l,h);
    if(pi < k-1){
        return quickselect(arr,pi+1,h,k);
    }
    else if(pi > k-1){
        return quickselect(arr,l,pi-1,k);
    }
    else{
        return arr[pi]; 
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    cin>>t;t--;
    do{
        int n,k;cin>>n>>k;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        cout<< quickselect(arr,0,n-1,k) << endl;
    }while(t--);

    return 0;
}
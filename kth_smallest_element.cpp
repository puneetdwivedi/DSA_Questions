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


/*
GFG Code

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition(int arr[], int low, int high){
    int pivot = arr[high];
 
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++){
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
    int partition_rand(int arr[], int low, int high){
        int random = low + rand() % (high - low+1);
        swap(arr[random], arr[high]);
        return partition(arr, low, high);
    }
    int kthSmallest(int arr[], int l, int h, int k) {
        int pi=partition_rand(arr,l,h);
        if(pi > k-1){
            kthSmallest(arr,l,pi-1,k);
        }
        else if(k-1> pi){
            kthSmallest(arr,pi+1,h,k);
        }
        else{
            return arr[pi];
        }
    }
};


*/
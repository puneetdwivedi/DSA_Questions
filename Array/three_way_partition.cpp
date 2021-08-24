 #include<bits/stdc++.h>
 using namespace std;
 #define loop(i,l,h) for(int i=l;i<h;i++)
 #define endl "\n"
 typedef long long int ll;
 
 int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 
     int t=0;
    //  cin>>t;t--;
     do{
        int n;cin>>n;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        int a,b;cin>>a>>b;
        int lo=0;int hi=n-1;
         int i=0;
         while(i<=hi){
             if(arr[i] < a){
                 int tmp=arr[i];
                 arr[i]=arr[lo];
                 arr[lo]=tmp;
                 lo++;
                 i++;
             }
             else if(arr[i] > b){
                 int tmp=arr[hi];
                 arr[hi]=arr[i];
                 arr[i]=tmp;
                 hi--;
             }
             else{
                i++;  
             }
         }
         loop(i,0,n){
             cout<<arr[i]<<" ";
         }
     }while(t--);
 
     return 0;
 }
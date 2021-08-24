#include<iostream>
using namespace std;

void factorial(int n){
    int arr[2569]={0};
    arr[0]=1;
    int len=1;
    for(int i=2;i<=n;i++){
        int j=0;
        int num=0;
        while(j<len){
            int x=(arr[j]*i)+num;
            arr[j]=(x%10);
            num=(x)/10;
            j++;
        }
        while(num>0){
            len++;
            int x=(arr[j]+num);
            arr[j]=x%10;
            num=x/10;
            j++;
        }
    }
    for(int i=len-1;i>=0;i--){
        cout<<arr[i];
    }
    
}
int main(){

    int n;
    cin>>n;
    factorial(n);
    return 0;
}


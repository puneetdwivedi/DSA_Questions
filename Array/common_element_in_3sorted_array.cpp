#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;        
    vector <int> res;
    int last = INT_MIN;
    while (i < n1 and j < n2 and k < n3){
        if (A[i] == B[j] and A[i] == C[k] and A[i] != last) {
            res.push_back (A[i]);
            last = A[i];
            i++;j++;k++;
        }
        else if (min ({A[i], B[j], C[k]}) == A[i]) i++;
        else if (min ({A[i], B[j], C[k]}) == B[j]) j++;
        else k++;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        int n1,n2,n3;cin>>n1>>n2>>n3;
        int a[n1],b[n2],c[n3];
        loop(i,0,n1)cin>>a[i];
        loop(i,0,n2)cin>>b[i];
        loop(i,0,n3)cin>>c[i];
        vector<int>res;
        res=commonElements(a,b,c,n1,n2,n3);
        loop(i,0,res.size())cout<<res[i]<<" ";
    }while(t--);

    return 0;
}
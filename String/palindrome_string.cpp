#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define endl "\n"
typedef long long int ll;

int isPlaindrome(string s){
	int i=0;
	string st=s;
	int j=s.length()-1;
	while(i<j){
	    char tmp=s[i];
	    s[i]=s[j];
	    s[j]=tmp;
	    i++;j--;
	}
	if(st==s)return 1;
	return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
    // cin>>t;t--;
    do{
        string st;cin>>st;
        if(isPlaindrome(st))cout<<1;
        else cout<<0;
        cout<<endl;
    }while(t--);

    return 0;
}
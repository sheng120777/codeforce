#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        a=a/3;
        b=b/2;
        cout<<min(a,b)<<'\n';
    }
}

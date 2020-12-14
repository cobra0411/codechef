#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll result=1;
        while(result*2<=n){
            result*=2;
        }
        cout<<result<<endl;
        // 1 2 3 4 5 6 7 8 9 10
    }
    return 0;
}
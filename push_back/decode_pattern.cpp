#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        ll k2=k;
        for(ll i=0;i<=k;i++){
            for(ll j=0;j<k-i;j++){
                cout<<" ";
            }
            for(ll j=k-i;j<=k;j++){
                cout<<j;
            }
            cout<<endl;
        }
        for(ll i=1;i<=k;i++){
            for(ll j=0;j<i;j++){
                cout<<" ";
            }
            for(ll j=i;j<=k;j++){
                cout<<j;
            }cout<<endl;
        }
    }
    return 0;
}
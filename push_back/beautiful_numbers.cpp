#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    vector<ll> vt(100001,0);
    for(int i=1;i<100001;i++){
        int num=i;
        while(num&(num<<1)){
            num--;
        }
        vt[i]=num;
    }
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        cout<<vt[k]<<endl;
    }
    return 0;
}
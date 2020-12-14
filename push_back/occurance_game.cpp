#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        vector<ll> vt(b,0);
        for(ll i=0;i<b;i++){
            cin>>vt[i];
        }
        ll idx1=-1;
        ll idx2=-1;
        
        for(int i=0;i<b;i++){
            if(vt[i]==a){
                idx1=i;
            }
        }
        for(int i=b-1;i>=0;i--){
            if(vt[i]==a){
                idx2=i;
            }
        }
        if(idx1==idx2){
            cout<<-1<<endl;
        }else{
            cout<<idx2+1<<" "<<idx1+1<<endl;
        }
    }
    return 0;
}
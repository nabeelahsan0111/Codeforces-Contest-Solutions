#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define forl(i,a,b) for(ll i=a;i<b;i++)
using namespace std;


int main(){
    fastread();
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >>n;
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        if(n%2){
            cout << -1 << endl;
            continue;
        }
        forl(i,0,n){
            if(i%2==0) cout<<n-i<<" ";
            else cout<<i<<" ";
        }
        cout<<endl;
    }
}
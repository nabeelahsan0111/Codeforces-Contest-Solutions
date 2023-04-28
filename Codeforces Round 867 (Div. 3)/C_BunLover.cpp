#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main(){
    fastread();
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >>n;
        ll ans = n*4;
        n = n-1;
        for(int i=0;i<2;i++){
            ans += ((n*(n+1))/2);
            n--;
        }
        cout << ans+1 << endl;
    }
}
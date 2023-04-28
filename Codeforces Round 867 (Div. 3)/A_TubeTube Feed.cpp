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
        ll n,t;
        cin >> n >> t;
        vector<int>tim(n);
        vector<int>ent(n);
        for(int i=0;i<n;i++){
            cin >> tim[i];
        }
        for(int i=0;i<n;i++){
            cin >> ent[i];
        }
        ll mx = LLONG_MIN;
        ll pos = -1;
        for(int i=0;i<n;i++){
            if(i+tim[i] <= t){
                if(mx<ent[i]){
                    mx = ent[i];
                    pos = i; 
                }
            }
        }
        if(pos == -1) cout << -1 << endl;
        else cout << pos+1 << endl;
    }
}
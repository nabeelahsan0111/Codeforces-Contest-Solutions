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
        ll n,m,c;
        cin >> n >> m >> c;
        vector<ll> g[n+1];
        vector<ll>dis1(n+1,1e8);
        vector<ll>dis2(n+1,1e8);
        for(ll i=0;i<n-1;i++){
            ll u,v;
            cin >> v >> u;
            g[v].push_back(u);
            g[u].push_back(v);
        }

        queue<ll>q;
        q.push(1);
        dis1[1] = 0;
        ll current_v;
        while(!q.empty()){
            current_v = q.front();
            q.pop();
            for(auto child : g[current_v]){
                if(dis1[child] == 1e8){
                    dis1[child] = dis1[current_v] + 1;
                    q.push(child);
                }
            }
        }
        q.push(current_v);
        dis2[current_v] = 0;
        while(!q.empty()){
            current_v = q.front();
            q.pop();
            for(auto child : g[current_v]){
                if(dis2[child] == 1e8){
                    dis2[child] = dis2[current_v] + 1;
                    q.push(child);
                }
            }
        }
        ll mx = -1;
        for(ll i=1;i<=n;i++){
            mx = max(mx,(m*dis2[i]-c*dis1[i]));
        }
        cout << mx << endl;
    }
    return 0;
}
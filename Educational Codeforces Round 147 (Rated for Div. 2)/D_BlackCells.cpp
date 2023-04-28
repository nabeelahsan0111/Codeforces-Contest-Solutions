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
        ll n,k,ans=LLONG_MAX;
        cin >> n >> k;
        vector<ll>l(n);
        vector<ll>r(n);
        ll pos=0;
        ll c = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> l[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> r[i];
        }
        ll flag = 0;
        
        for (int i = 0; i < n; ++i)
        {
            ll length = r[i]-l[i]+1;
            if(pos+length>=k){
                flag = 1;
                ll skip_one = min(c,length-(k-(pos)));
                ans = min(ans,(l[i]+k-pos+skip_one-1)+ 2*i - 2*skip_one+2);
            }
            pos += length;
            if(length == 1) c++;
        }
        if(flag == 0) cout << -1 << endl;
        else cout << ans << endl;
     }
}
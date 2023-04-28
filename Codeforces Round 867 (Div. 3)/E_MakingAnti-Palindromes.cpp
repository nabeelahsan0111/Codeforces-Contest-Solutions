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
        string s;
        cin >> s;
        if(n%2){
            cout << -1 << endl;
            continue;
        }
        map<char,ll>m;
        ll fq = -1;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            fq = max(fq,m[s[i]]);
        }
        if(fq>(n/2)){
            cout << -1 << endl;
            continue;
        }
        m.clear();
        ll c=0;
        ll mx = -1;
        for(int i=0;i<(n/2);i++){
            if(s[i] == s[n-i-1]){
                m[s[i]]++;
                c++;
                mx = max(mx,m[s[i]]);
            }
        }
        cout << max(mx,(c+1)/2) << endl;
    }
}
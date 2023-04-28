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
        string s;
        cin >> s;
        ll sum=1;
        for(int i=1;i<s.size();i++){
            if(s[i]=='?'){
                sum *=10;
            }
        }
        if(s[0] == '?') sum *= 9;
        if(s[0] == '0') cout << 0 << endl;
        else if(sum == 1) cout << 1 << endl;
        else cout << sum << endl;
     }
}
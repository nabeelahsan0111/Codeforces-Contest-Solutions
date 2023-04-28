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
        ll mn=INT_MAX;
        for(char a='a';a<='z';a++){
            ll c = 0,mx=0; 
            for(int i=0;i<s.size();i++){
                if(s[i] != a){
                    c++;
                    mx = max(mx,c);
                }
                else{
                    c=0;
                }
            }
            mn = min(mn,mx);
        }
        ll op=0;
        if(mn == 0){
            cout << 0 << endl;
            continue;
        }
        while(mn!=1){
            mn = mn / 2;
            op++;
        }
        cout << mn+op << endl;
     }
}
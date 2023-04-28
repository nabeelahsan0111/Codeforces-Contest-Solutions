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
        cin >> n;
        vector<int>v1(n);
        vector<int>v2(n);
        ll first=-1,second=-1;
        for(int i=0;i<n;i++){
            cin >> v1[i];
        }
        for(int i=0;i<n;i++){
            cin >> v2[i];
        }
        for(int i=0;i<n;i++){
            if(v1[i] != v2[i]){
                first = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v1[i] != v2[i]){
                second = i;
                break;
            }
        }
        for(int i=first;i>0;i--){
            if(v2[i]>=v2[i-1]){
                first = i - 1;
            }
            else{
                break;
            }
        }
        for(int i=second;i<n-1;i++){
            if(v2[i]<=v2[i+1]){
                second = i + 1;
            }
            else{
                break;
            }
        }
        cout << first+1 << " " << second+1 << endl;
     }
}
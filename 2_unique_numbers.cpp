#include <bits/stdc++.h>
using namespace std;
#define MAXI INT_MAX
#define MINI INT_MIN
#define MAX 100000
#define ll long long
#define ld long double
#define modulo 1000000007
#define modAdd(a,b) (a%modulo + b%modulo)%modulo
#define modSub(a,b) (a%modulo - b%modulo + modulo)%modulo
#define pb push_back
#define mp make_pair
#define lin(t) long long t; cin >> t;
#define din(t) long double t; cin >> t;
#define speedUp() ios::sync_with_stdio(0); cin.tie(0);
const ll fastPow(ll x, ll y) {ll res=1;x=x%modulo;
    while(y>0){if(y&1)res=(res*x)%modulo;y=y>>1;x=(x*x)%modulo;}return res; 
}

int main() {
	speedUp();
	lin(t);
	while(t--){
        lin(n); ll arr[n], total=0, totalPro=1;
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            total ^= arr[i];
            totalPro *= arr[i];
        } ll a, b;
        for(ll i=0; i<n; i++){
            ll tmp = arr[i]^total;
            if(tmp^total == arr[i]){
                a = tmp;
                b = arr[i];
                ld tmp = sqrt(totalPro /a*b);
                if(tmp-(ll)tmp==0){
                    break;
                }
            }
        } cout << a << " " << b << endl;
    }
}
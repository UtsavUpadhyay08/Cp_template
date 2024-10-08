#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int
 
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define sll set<ll>

#define f first
#define sc second
#define pb push_back
#define yes cout << "YES"
#define no cout << "NO"
#define pno cout << -1

#ifdef UTSAV
#include "handle_debug.hpp"
#define debug(...) cout<<'[';debug_print(#__VA_ARGS__, __VA_ARGS__);cout<<"]\n";
#else
#define debug(...)
#endif

const ll mod=1e9+7;

#define fori(i,a,b) for(ll i=a;i<b;i++)
#define vprint(v) for (auto it : v) cout << it << " "
#define all(a) a.begin(),a.end()

ll gcd(ll a, ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a, ll b){return (a/gcd(a,b))*b;}

void solve(){
	ll n,k;cin>>n>>k;
	vll s(n);for(auto &x:s) cin>>x;
	if(n==1){
		if(s[0]>k) no;
		else yes;
		return;
	}
	sort(all(s));
	ll mx=0,mn=s[0],i=1;
	while(i<n){
		mx+=2*mn;
		if(i==(n-1)) mx-=mn;
		i++;
	}
	if(mx<=k) yes;
	else no;
	// string s;cin>>s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	// solve();
    ll t;cin>>t;
    fori(u,1,t+1){
    	cout<<"Case #"<<u<<": ";
    	solve();
    	cout<<"\n";
	}
    return 0;
}
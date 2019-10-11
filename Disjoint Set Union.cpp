#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define    endl        '\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define mpi         map<pair<ll int,ll int>,ll int>
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define vii         vector<pair<ll int, ll int>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
#define time        cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
using namespace std;
#define N  100005

/* 
Instructions :
    1. Set p each i of p eqaul to i initailly.
    2. rank is initiialised with 0.
    3. To know parent run a loop for each value call find function.
*/
ll high[N];
ll p[N];       // set p of i equal to i initially        
ll find(ll x)
{
    if(p[x]!=x)
        p[x]=find(p[x]);
    return p[x];
}
void merge(ll x,ll y)
{
    ll Px,Py;
    Px=find(x);
    Py=find(y);
    if(high[Px]>high[Py]) 
        p[Py]=Px;
    else
        p[Px]=Py;
    if(high[Px]==high[Py])
        high[Py]++;
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    rep(i,0,n+1)
    p[i]=i;
    rep(i,0,m)
    {
        ll u,v;
        cin>>u>>v;
        merge(u,v);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
//    cin>>TESTS;
    while(TESTS--)
    {
        solve();
    }
    time
    return 0;
}

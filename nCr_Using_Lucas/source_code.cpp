 
/*                                             सम्भवामि युगे युगे ॥                                      */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define inf std::numeric_limits<int>::max();
#define mod 1000003
#define yup cout<<"YES"<<endl;
#define nope cout<<"NO"<<endl;

// binary expo!
ll binaryExpo(ll base, ll e)
{
    ll res=1;
    while (e)
    {
        if(e&1) (res *= base)%=mod;
        (base *= base)%=mod; e/=2;
    } return res;
}

vector<ll> fact;
ll factorial(ll n, ll r) 
{
    if(n<r) return 0;
    if(n-1==r || r==1) return n;
    if(r==0 || n==r) return 1;

    fact.resize(n+1);
    fact[0]=fact[1]=1;
    for (int i = 2; i <= n; i++)
    { fact[i] = (fact[i-1]*i)%mod; } 
    ll a = fact[n], b = binaryExpo(fact[r], mod-2), c = binaryExpo(fact[n-r], mod-2);
    return ((a * b)%mod * c)%mod;
}

int nCr(long long n, long long r) 
{
    if(r==0) return 1;

    // Lucas theorem
    return (nCr(n/mod, r/mod) * factorial(n%mod, r%mod))%mod;
}

void solutioN()
{
    ll n, r; cin>> n >> r;
    cout<< nCr(n, r) <<endl;
}

void solve_mul()
{ ll test; cin>>test; while (test--) {solutioN();} }

void solve_single(){solutioN();}

int main()
{
    ios_base::sync_with_stdio(false);
    solve_mul();
    //solve_single();
}






/*                                Ⓒ All rights reserved to Prnc                              */
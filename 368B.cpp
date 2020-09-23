#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   
    ll n , m;
    cin >> n >> m;
    ll a[n] , b[n];
    set<ll> s;
    for(ll i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    for(ll i = n - 1 ; i >= 0 ; i--)
    {
        s.insert(a[i]);
        b[i]=s.size();
    }
    ll x;
    for(ll i = 0 ; i < m ; i++)
    {
        cin >> x;
        x--;
        cout << b[x] << endl;
    }
    return 0;
}
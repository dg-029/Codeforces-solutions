#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int

using namespace std;
typedef pair<ll,ll> Pair;



ll find_ans(ll n){
    if(n==0)
        return 0;
    ll temp=0,num=n;
    while(num){
        temp=max(temp,num%10);
        num/=10;
    }
    return find_ans(n-temp)+1;
}
int main()
{

  
    ll n;
    cin>>n;
    cout<<find_ans(n)<<endl;
    
    return 0;
   }


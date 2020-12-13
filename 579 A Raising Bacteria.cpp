#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    scanf("%d",&n);
    while(n){
        if(n&1)ans++;
        n>>=1;
    }
    printf("%d\n",ans);
    return 0;
}
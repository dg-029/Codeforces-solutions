/*We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.

You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

Input
The first line contains a single positive integer, n (1 ≤ n ≤ 105), showing how many numbers are in the array. The next line contains n space-separated integers xi (1 ≤ xi ≤ 1012).

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.

Output
Print n lines: the i-th line should contain "YES" (without the quotes), if number xi is Т-prime, and "NO" (without the quotes), if it isn't.

Examples
inputCopy
3
4 5 6
outputCopy
YES
NO
NO
Note
The given test has three numbers. The first number 4 has exactly three divisors — 1, 2 and 4, thus the answer for this number is "YES". The second number 5 has two divisors (1 and 5), and the third number 6 has four divisors (1, 2, 3, 6), hence the answer for them is "NO".*/

#include <bits/stdc++.h>
using namespace std;
#define LIMIT 1000000
long long i, j;
long long prime_flag[LIMIT];
void calculate_prime_flag(){
    prime_flag[0] = prime_flag[1] = 1;
    for(i=2;i<LIMIT;i++){
        if (prime_flag[i]==0){
            for(j=i*i;j<LIMIT;j+=i){
                prime_flag[j] = 1;
            }
        }
    }
}
int check_perfect_square(long long n){
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    calculate_prime_flag();
    long long total_numbers, n;
    cin>>total_numbers;
    for(i=0;i<total_numbers;i++){
        cin>>n;
        if (n==4){ // only 4 is a even no which is a square of a prime number
            cout<<"YES"<<endl;
        }
        else if (n%2==0){ //divisible by 2 
            cout<<"NO"<<endl;
        }
        else if(check_perfect_square(n)==1 && prime_flag[int(sqrt(n))]==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
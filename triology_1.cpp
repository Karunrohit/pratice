#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main(){
    int a,b;
    cin>>a>>b;

    int x=1;
    int count=0;
    if(b%2==0 and a>=0){
        if(isprime(1+b))
            count++;
    }
    else{
        if (isprime(1 + b)) {
            count++;
        }
        for (int i = 2; i <= a; i++) {
            x = x * i;
            if (isprime(x + b)) {
                count++;

            }
        }
    }
    cout<<count;
}
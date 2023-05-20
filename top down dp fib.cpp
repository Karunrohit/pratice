#include <bits/stdc++.h>
using namespace std;

int *lookup;
void init_mem(int num){
    for(int i=0;i<num+1;i++){
        lookup[i]=-1;
    }
    }
int fib(int n)
{
    if (lookup[n] == -1) {
        if (n <= 1)
            lookup[n] = n;
        else
            lookup[n] = fib(n - 1) + fib(n - 2);
    }

    return lookup[n];
}
int main() {
    int num;
    cin >> num;
    lookup=new int[num+1];
    init_mem(num);
    cout<<fib(num)<<endl;
    for(int i=0;i<num+1;i++){
        cout<<lookup[i];
    }

}
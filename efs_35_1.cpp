//#include<bits/stdc++.h>
//using namespace std;
//bool isPrime(long long n)
//{
//
//    if (n <= 1)
//        return false;
//    if (n <= 3)
//        return true;
//    if (n % 2 == 0 || n % 3 == 0)
//        return false;
//    for (int i = 5; i * i <= n; i = i + 6)
//        if (n % i == 0 || n % (i + 2) == 0)
//            return false;
//
//    return true;
//}
//int gcd(int a, int b)
//{
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);
//}
//
//// Returns LCM of array elements
//long long findlcm(vector<int> arr, int q)
//{
//    // Initialize result
//    long long ans = arr[0];
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    vector<int> ans;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }
    vector<int> y;
    vector<int> z;
    if(ans[0]>0){
        y.push_back(0);
        z.push_back(ans[0]);
    }
    else{
        z.push_back(0);
        y.push_back(ans[0]);
    }
    for(int i=1;i<num;i++){
        if(ans[i]>0){
            y.push_back(ans[i]);
            z.push_back(0);
        }
        else{
            z.push_back(ans[i]);
            y.push_back(0);
        }
    }
    for(int i=1;i<num;i++){
        while(y[i]<y[i-1] or z[i]>z[i-1]){
            y[i]++;
            z[i]--;
        }
    }
    int sum=0;
    for(int i=0;i<num;i++){
        sum+=abs(z[i])+abs(y[i]);
    }
    cout<<sum;
}

//    // ans contains LCM of arr[0], ..arr[i]
//    // after i'th iteration,
//    for (int i = 1; i < arr.size(); i++)
//        if(arr[i]!=q)
//            ans = (((arr[i] * ans)) /(gcd(arr[i], ans)));
//
//    return ans;
//}
//
//int main() {
//    string s;
//    getline(cin, s);
//    stringstream ss(s);
//    int t;
//    vector<int> v;
//    while (ss >> t)
//        v.push_back(t);
//    long long q =*min_element(v.begin(),v.end());
//    long long p= findlcm(v,q);
//    p += q;
//    if (isPrime(p)) {
//        cout << p << endl;
//
//    } else {
//        cout << "None" << endl;
//    }

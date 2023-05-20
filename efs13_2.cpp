#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<int> greycode;
    greycode.push_back(0);
    for (int i = 0; i < num; i++) {
        int b = 1 << i;
        for (int j = greycode.size() - 1; j >= 0; j--) {
            greycode.push_back(greycode[j] ^ b);
        }
    }
    for (auto i: greycode)
        cout << i << " ";
}
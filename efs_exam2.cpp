/*
There are N cities, and M routes[], each route is a path between two cities.
routes[i] = [city1, city2], there is a travel route between city1 and city2.
Each city is numbered from 0 to N-1.

There are one or more Regions formed among N cities.
A Region is formed in such way that you can travel between any two cities
in the region that are connected directly and indirectly.

Your task is to findout the number of regions formed between N cities.

Input Format:
-------------
Line-1: Two space separated integers N and M, number of cities and routes
Next M lines: Two space separated integers city1, city2.

Output Format:
--------------
Print an integer, number of regions formed.


Sample Input-1:
---------------
5 4
0 1
0 2
1 2
3 4

Sample Output-1:
----------------
2


Sample Input-2:
---------------
5 6
0 1
0 2
2 3
1 2
1 4
2 4

Sample Output-2:
----------------
1

Note: Look HINT for explanation.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
int findParent(int a){
    if(parent[a]==a){
        return a;
    }
    return parent[a]=findParent(parent[a]);
}
void union1(int a,int b){
    a=findParent(a);
    b=findParent(b);

    if(a!=b){
        parent[b] = a;
    }
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    for(int i=0;i<n;i++){
        parent.push_back(i);
    }
    for(int i=0;i<k;i++){
        int temp;
        int temp2;
        cin>>temp>>temp2;

        union1(temp,temp2);

    }


    int count[n];
    for (int i = 0; i < n; ++i) {
        count[i]=0;
    }
    for(int i=0;i<parent.size();i++){
        count[parent[i]]++;

    }
    sort(count,count+n);
    for(int i=0;i<n;i++){
        if(count[i]==0)
            continue;
        else
            cout<<count[i]<<" "<<i<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
class  fendwickTree
{
private:
    vector<int> arr1;
    int n;
public :
    fendwickTree(vector<int> &arr){
        n=arr.size();
        arr1.resize(n+1);
        fill(arr1.begin(),arr1.end(),0);
        for(int i=1;i<n+1;i++){
            update(i,arr[i-1]);
        }
    }
    void update(int i,int x)
    {
        for(;i<=n;i+=(i&(-i))){
            arr1[i]+=x;
        }
    }
    int sum(int i)
    {
        int ans=0;

        for(i=i;i>0;i-=(i&-i))
            ans+=arr1[i];
        return ans;
    }
};
int main()
{
    int num,P;
    cin>>num>>P;
    vector<int> arr(num);
    for(int i=0;i<num;i++)
        cin>>arr[i];
    fendwickTree sol(arr);
    while(P--){
        int l,r;
        cin>>l>>r;
        cout<<sol.sum(r+1)-sol.sum(l)<<endl;

    }
}
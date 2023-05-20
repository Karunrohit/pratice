#include <bits/stdc++.h>
using namespace std;
bool binary_s(int low, int high, int number,vector<int> arr) {
    if(high>=low) {
        int mid = (low + high) / 2;
        if(arr[mid]==number){
            return 1;//return true
        }
        else if(arr[mid]<number){
            return binary_s(mid+1,high,number,arr);//re-initializing
        }
        else{
            return binary_s(low,mid-1,number,arr);
        }
    }
    return 0;
}
int main(){
    int row,column;//initializing row and column
    cin>>row>>column;
    vector<vector<int>> arr(row,vector<int>(column,0));//initializing 2d vector
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            int temp;
            cin>>temp;
            arr[i][j]=temp;//reinitializing 2d vector
            }
    }
    for(int i=0;i<column;i++){
        int count=1;//count function
        for(int j=1;j<row;j++){
            if(binary_s(0,row,arr[0][i],arr[j])){
                count++;//true case
            }
            if(j==row-1 and count==row){
                cout << arr[0][i];//if matches the base case
                return 0 ;
            }

        }
        cout<<count<<endl;
    }
    cout<<-1;//else case
}
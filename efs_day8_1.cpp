/*There is a board with M*N size.
The board contains M*N blocks of 1*1 size.
Each block is printed a number on it.

You will be given a number, your task is to find whether the number is printed on
any of the blocks or not. If found print true, otherwise print false.

NOTE:
- The numbers printed on the board in each row are in increasing order.
- Next row starting number is greater than the last number of the previous row.

Constarint:
-----------
Can you solve it in log(M)+ log(N) time.


Input Format:
-------------
Line-1 -> Two integers M and N, board size.
Next M lines -> N space separated integers.
Last Line -> An integer T, number to search.

Output Format:
--------------
Print a boolean value, 'true' if number found.
otherwise, 'false'.


Sample Input-1:
---------------
4 4
1 3 6 10
12 15 19 23
24 28 32 36
37 41 44 47
15

Sample Output-1:
----------------
true


Sample Input-2:
---------------
4 4
1 3 6 10
12 15 19 23
24 28 32 36
37 41 44 47
26

Sample Output-2:
----------------
false
*/
#include <bits/stdc++.h>
using namespace std;
int row;
int column;
bool binary_s2(vector<vector<int>> &arr,int low, int high, int number,int row_no){
        if(high>=low){
            int c =(low+high)/2;
            if(arr[row_no][c]==number){
                return 1;
            }
            else if(arr[row_no][c]<number){
                return binary_s2(arr,c+1,high,number,row_no);
            }
            else{
                return binary_s2(arr,low,c-1,number,row_no);
            }
        }
        return 0;
}
bool binary_s(vector<vector<int>> arr,int low, int high, int number) {

    if(high>=low) {
        int r = (low + high) / 2;
        if(arr[r][column]==number){
            return 1;
        }
        else if(arr[r][column]<number){
            if(arr[r+1][column]>number){
                cout<<"here";
                return binary_s2(arr,0,column,number,r+1);
            }
            return binary_s(arr,r+1,high,number);
        }
        else{
            if(arr[r-1][column]<number){
                return binary_s2(arr,0,column,number,r);
            }
            return binary_s(arr,low,r-1,number);
        }
    }
    return 0;

}
int main(){
    cin>>row>>column;
    vector<vector<int>> grid(row,vector<int>(column,0));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            int temp;
            cin>>temp;
            grid[i][j]=temp;
        }
    }

    int num;
    cin>>num;
    if(binary_s(grid,0,row,num)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}

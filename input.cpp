#include <bits/stdc++.h>
using namespace std;
int num;//global variable
vector<int> iterate(vector<int> &arr,int i,string itr){
    //base conditions
    if(num == i && itr == "+"){
        return arr;//returning the given data to the main function
    }
    if(i == -1 && itr == "-"){
        return arr;//returning the given data to the main function
    }
    //recursion is taken place
    if(itr == "+"){
        int temp;// initializing a variable for clearing the buffer.
        cin>>temp;// initializing by our costume value.
        arr[i]=temp;//re allocating the value with the input given.
        return iterate(arr, i+1 , itr);//iterating the value.
    }
    if(itr == "-"){
        int temp;// initializing a variable for clearing the buffer.
        cin>>temp;// initializing by our costume value.
        arr[i]=temp;//re allocating the value with the input given.
        return iterate(arr, i-1 , itr);//iterating the value.
    }

}
int main(){
    cout<<"enter the size of the list:"<<'\t';
    cin >> num;//taking the input for initializing the list/array/vector.
    cout<<endl<<"enter the operator for the iterating intialization( + or -) : "<<'\t';
    vector<int> arr(num);//already initialized with zero, so it doesn't need a "vector.push_back()" function for inserting a value.
    string itr;//taking input for optimizing the iteration
    cin >> itr;//initializing the operator
    cout<<endl<<"enter the  elements of the array/list/vector"<<endl;
    if(itr == "+") {
        iterate(arr, 0, itr);//calling of the function.

        for(auto i : arr){
            cout<< i <<" ";//output of the given list/array/vector.
        }
        cout<<endl;
    }
    else {
        iterate(arr, num-1, itr);//calling of the function.
        //output of the given list/array/vector.
        for (auto i: arr) {
            cout << i << " ";//output of the given list/array/vector.
        }
    }
    return 0;
}
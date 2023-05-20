#include <bits/stdc++.h>
using namespace std;
int solver(int mid,vector<int> time,int varieties,int types){
    int count=0;//count function
    int cake=0;//total cakes done in the giving mid
    for(int i=0;i<time.size();i++){

        if(time[i]<=mid){
            count++;
        }
        else{
            count=0;
        }
        if(count>=types){
            cake++;
            count=0;
        }
        if(cake==varieties){
            break;
        }

    }

    return cake==varieties;
}
int binary_s(vector<int> time,int varieties,int types ,int low,int high) {
    int mid = (low + high) / 2;//creating/re-initializing the mid
    if (low < high)/*base condition*/ {
        if (solver(mid, time,varieties,types)) {
            high = mid;
        }
        else {
            return binary_s(time, varieties,types, mid + 1, high);;
        }
    }
    return mid;//else

}
int main(){
    int creams,varieties,types;//initializing the inputs
    cin>>creams>>varieties>>types;//getting inputs
    vector<int> times;//initializing vector
    //input of the array
    for (int i = 0; i < creams; i++) {
        int temp;
        cin>>temp;
        times.push_back(temp);
    }
    //base condition according to question
    if(creams<varieties*types){
        cout<<-1<<endl;
        return 0;
    }
    int min=INT_MAX;//initalizing the low
    int max=0;//initalizing the high
    for(auto i: times){
        if(min>i){
            min=i;
        }
        else if(max<i){
            max=i;
        }
    }
    cout<<binary_s(times,varieties,types,min,max);//function calling for binary search
}
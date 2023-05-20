#include<bits/stdc++.h>
using namespace std;





bool isPossible(vector<int> weights, int n, int m, int curr_min) {
        int boats = 1;
        int curr_sum = 0;

        for (int i = 0; i < n; i++) {

            if (weights[i] > curr_min)
                return false;


            if (curr_sum + weights[i] > curr_min) {

                boats++;


                curr_sum = weights[i];

                if (boats> m)
                    return false;
            } else
                curr_sum += weights[i];
        }
        return true;
    }
    int find_num_of_Trips(vector<int> weights, int n, int m) {
        if (n < m)//size is greater than partitions
            return -1;
        long long int low = 0, high = accumulate(weights.begin(), weights.end(), 0);//initializing low and high
        int result = INT_MAX;//result
        while (low <= high)/*binary implementation*/ {

            int mid = (low + high) / 2;//mid initialization
            if (isPossible(weights, n, m, mid)) {
                result = mid;
                high = mid - 1;
            } else

                low = mid + 1;
        }
        return result;


    }



int main() {
    int size,partition;//initialization of the size,weights to be optimized
    cin>>size>>partition;//input
    vector<int> A(size,0);//initialization of the weights vector/array/list
    for(int i=0;i<size;i++)/*input*/{
        int temp;
        cin>>temp;
        A[i]=temp;
    }
    cout << find_num_of_Trips(A, size, partition) << endl;//calling binary search
    return 0;
}
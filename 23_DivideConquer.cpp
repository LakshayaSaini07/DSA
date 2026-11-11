
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int majorityElement(vector <int> nums){
    int element = 0;
    int count = 0;

    for(int i = 0 ; i  <nums.size() ;i++){
        
        if(count == 0){
            element = nums[i];
        }

        if(nums[i] == element){
            count++ ;
        }

        else{
            count--;
        }
    }

    return element ;
}

void merge(vector<string>& arr, int low, int mid, int high) {
    vector<string> temp;

    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= high) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = low; k <= high; k++) {
        arr[k] = temp[k - low];
    }
}

void mergeSort(vector<string>& arr, int low, int high) {
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main() {
    // vector<string> arr = {
    //     "sun", "earth", "mars", "mercury"
    // };

    // int n = arr.size();

    // mergeSort(arr, 0, n - 1);

    // cout << "Sorted array: ";

    // for (string s : arr) {
    //     cout << s << " ";
    // }


    vector<int> nums = {1, 2, 2, 2, 2, 2, 7, 8};
    cout << "Majority element  : " << majorityElement(nums) << endl;

    return 0;
}

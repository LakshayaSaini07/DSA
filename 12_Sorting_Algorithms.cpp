#include <iostream>
using namespace std;

void bubblesort(int arr[] , int n){
    bool isSwap = false;
    for (int i = 0 ; i<n-1 ;i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout << arr[i];
    }
}


void SelectionSort(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        int minIdx = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i] , arr[minIdx]);
    }
    for(int i = 0 ; i<n ; i++){
        cout << arr[i];
    }
}

void InsertionSort(int arr[] , int n){
    for(int i = 1 ; i<n ; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev] , arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    for(int i = 0 ; i<n ; i++){
        cout << arr[i];
    }
}

void CountSort(int arr[] , int n){
    int freq[100000];
    int minVal = INT32_MAX , maxVal = INT32_MIN;
    for(int i = 0 ; i< n ;i++){
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }

    for(int i = 0 ; i<n ; i++){
        freq[arr[i]]++ ;
    }
    for(int i = minVal , j = 0 ; i<= maxVal ;i++){
        while(freq[i] > 0){
            arr[j++] = i ;
            freq[i]--;
        }
    }
     for(int i = 0 ; i<n ; i++){
        cout << arr[i];
    }
}

void Insertion(char arr[] , int n){
    for(int i = 1 ; i<n ; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev] , arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    for(int i = 0 ; i<n ; i++){
        cout << arr[i];
    }


}

int main(){
    int arr[5] = {5 , 4 ,1 ,3, 2} ;
    // bubblesort(arr , 5);
    // SelectionSort(arr , 5);
    // InsertionSort(arr, 5);
    // CountSort(arr , 5);

    char ch[6] = {'f' , 'b' , 'a' , 'e' , 'c' , 'd'};
    Insertion(ch , 6);
    


    return 0;
}
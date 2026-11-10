#include <iostream>
#include <vector>
#include <string>
using namespace std;

int search(int arr[] , int si , int ei , int tar){

    if(si > ei){
        return -1;
    }

    int mid = si + (ei-si)/2;
    if(arr[mid] == tar){
        return mid;
    }

    if(arr[si] <= arr[mid]){

        if(arr[si] <= tar && tar < arr[mid]){
            // left
            return search(arr , si , mid-1 , tar); 
        }
        else{
            return search(arr , mid+1 , ei , tar);
        }

    } else{
        if(arr[mid] <= tar && tar <= arr[ei]){
            return search(arr , mid+1 , ei , tar);
        }else{
            return search(arr , si , mid-1 , tar);
        }
    }
}

int partition(int arr[] , int si , int ei){
    int i = si-1;
    int pivot = arr[ei];

    for(int j = si ; j < ei ; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }

    i++;
    swap(arr[i] , arr[ei]);
    return i;
}

void quickSort(int arr[] , int si , int ei){
    if(si >= ei){
        return;
    }
    int pivotIdx = partition(arr , si , ei);

    quickSort(arr, si , pivotIdx-1);
    quickSort(arr , pivotIdx+1 , ei);
}

void merge(int arr[] , int si , int mid , int ei){
    vector<int> temp ;
    int i = si ;
    int j = mid+1 ;

    while(i<= mid && j <= ei){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i++]);
        } else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<= mid){
        temp.push_back(arr[i++]);
    }

    while(j<= ei){
        temp.push_back(arr[j++]);
    }

    for(int idx = si , x = 0 ; idx <= ei ; idx++){
        arr[idx] = temp[x++];    
    }
}

void mergeSort(int arr[] , int si , int ei){

    if(si >=ei){
        return;
    }

    int mid = (si+ei)/2 ; // si + (ei - si)/2  to avoid int overflow condition in case the arr size is very large
    mergeSort(arr , si , mid); // left half
    mergeSort(arr , mid+1 , ei); // right half

    merge(arr , si , mid , ei); //conquer
}

void printArr(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[7] ={4,5,6,7,0,1,2};
    int n = 7;

    // mergeSort(arr , 0 , n-1);
    // printArr(arr , n);

    // quickSort(arr , 0 , n-1);
    // printArr(arr , n);

    // cout << "Index :" << search(arr , 0 , n-1 , 0) << endl;
    return 0;
}
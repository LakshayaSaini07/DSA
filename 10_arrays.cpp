#include <iostream>
using namespace std;

int LinearSearch(int *arr , int n , int key ){
     for(int i = 0 ; i<n ;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int *arr , int n , int key){
    int start = 0 ;
    int end = n-1;
   
    while(start <= end){
         int mid = (start+end)/2;
        if(arr[mid] == key){
        return mid;
        }
        else if (arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1 ;
        }  
    }
    return -1;
}

int main(){
    
    // int n ; 
    // cout << "Enter the Size of array : " << endl;
    // cin >> n;
    // int arr[n];

    // cout << "Enter the elements : " ; 
    // for(int i = 0 ; i<n ;i++){
    //     cin >> arr[i];
    // }

    // for (int i = 0 ; i<n ;i++){
    //     cout << arr[i] << " , ";
    // }
    // cout << endl;




    // int max = arr[0];
    // for (int i = 0 ; i<n ; i++){
    //     if(max < arr[i]){
    //         max = arr[i];
    //     }
    // }
    // cout << max << endl;




    // int arr[] = {2,4,6,8,10,12,14,16,18 ,20};
    // int n = sizeof(arr)/sizeof(int);

    // int key ;
    // cout << "Enter the value to be searched : ";
    // cin >> key ; 
   
    // cout << LinearSearch(arr,n ,key) ;




    // int j;
    // int arr[] = {2,4,6,8,10,12,14,16,18,20};
    // int n = sizeof(arr)/sizeof(int);
    
    // int copiedArr[n];
    // for(int i = 0 ; i<n ; i++){
    //     j = n-i-1;
    //     copiedArr[i] = arr[j];
    // }

    // for(int i = 0 ; i<n ;i++){
    //     arr[i] = copiedArr[i];
    // }

    // for(int i = 0 ; i<n ;i++){
    //     cout << arr[i] << " , ";
    // }




    // int arr[] = {2,4,6,8,10,12,14,16,18,20};
    // int n = sizeof(arr)/sizeof(int);
    
    // int start = 0 , end = n-1;
    // while(start < end){
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    //     // swap(arr[start],arr[end])
    // }

    // for(int i = 0 ; i<n ;i++){
    //     cout << arr[i] << " , ";
    // }




    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int n = sizeof(arr)/sizeof(int);

    cout << BinarySearch(arr , n , 18) << endl;
    
    return 0;
}
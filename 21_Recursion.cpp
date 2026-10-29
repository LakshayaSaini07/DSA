# include <iostream>
# include <vector>
#include <string>
using namespace std;


void towerOfHanoi(int n , char source , char auxillary , char destination){

    if(n==1){
        cout << "Move Disk 1 from " << source << " to " << destination << endl;
        return;
    }

    towerOfHanoi(n-1 , source , destination , auxillary);

    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    towerOfHanoi(n-1 , auxillary , source , destination) ;
}

int BinarySearch(vector <int>& arr ,int left , int right , int key){

    if(left > right){
        return -1;
    }

    int mid = left + (right - left)/2;

    if(key == arr[mid]){
        return mid;
    }


    if(key < arr[mid]){
        return BinarySearch(arr , left , mid-1 , key);
    }

    return BinarySearch(arr , mid+1 , right , key);
}



void IdxFinder(int arr[] , int key ,int index, int size){

    if(index == size){
        return;
    }
    if(arr[index] == key){
        cout << index ;
    }

    IdxFinder(arr , key ,index+1 , size);
}



void binString(int n , int lastPlace , string ans){

    if(n == 0){
        cout << ans << endl;
        return;
    }

    if(lastPlace != 1){
        binString(n-1 , 0 , ans + '0');
        binString(n-1 , 1 , ans + '1');
    } else{
        binString(n-1 , 0 , ans + '0');
    }
}


int friendsPairing(int n){
    if(n == 1 || n == 2){
        return n;
    }
    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
}

void removeDuplicates(string str , string ans , int i , int map[26]){

    if (i == str.size()){
        cout << "Ans : " << ans << endl;
        return;
    }

    int mapIdx = (int)(str[i]- 'a');
    

    if(map[mapIdx]){
        removeDuplicates(str , ans , i+1 , map);
    }else {
        map[mapIdx] = true;
        removeDuplicates(str , ans+str[i] , i+1 , map);
    }

}

int tilingProblem(int n){

    if(n == 0 || n == 1 ){
        return 1;
    }

    return tilingProblem(n-1) + tilingProblem(n-2);
}


int main(){

    // int n = 5;
    // cout << tilingProblem(n);


    // string str = "lakshaya";
    // string ans = "" ;
    // int map[26] ={false};
    // removeDuplicates(str , ans ,0 , map);


    // cout << friendsPairing(4) ;

    // string ans = "";
    // binString(3 , 0 , ans);


    // vector <int> arr = { 1,2,3,4,5,6,7};
    // int n = 7;
    // int key = 5;
    // cout << BinarySearch(arr , 0 , n-1 ,key) << endl;


    // int arr[] = {3 ,2, 4, 5, 6, 2 , 7 ,2, 2};
    // int key = 2 ;
    // int size = 9;
    // IdxFinder(arr , key , 0,size);

    int n = 3;
    towerOfHanoi(n , 'A' , 'B' ,'C');
    return 0;
}
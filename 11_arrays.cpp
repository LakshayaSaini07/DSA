#include <iostream>
using namespace std;

void printsubarrays(int *arr , int n){
    
    for(int start = 0 ; start <n ; start++){
        for(int end = start ; end <n ; end++){
            // cout << "(" << start <<"," <<  end << ") " ;
            for(int i = start ; i<=end ;i++){
                cout << arr[i];
            } 
            cout <<" , ";
            
        }
        cout << endl;
    }

}

void MaxSubarraySum(int *arr , int n){
    int maxSum = INT32_MIN;
    
    for(int start = 0 ; start <n ; start++){
        for(int end = start ; end <n ; end++){
            int currSum = 0;
            for(int i = start ; i<= end ;i++ ){
                currSum += arr[i];
           }
           maxSum = max(currSum , maxSum);
        }
        cout << endl;
    }
    cout << maxSum;

}

void MaxSubarraySum1(int *arr , int n){
    int maxSum = INT32_MIN;
    
    for(int start = 0 ; start <n ; start++){
        int currSum = 0;
        for(int end = start ; end <n ; end++){
            currSum += arr[end];
            maxSum = max(currSum , maxSum);
        }
    }
    cout << maxSum;
}

void MaxSubArraySum2(int *arr , int n){
    int currSum = 0;
    int maxSum = INT32_MIN;

    for(int i = 0 ; i<n ; i++){
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum;
}

void maxProfit(int *prices , int n){
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;
    for(int i = 1 ; i< n ;i++){
        bestBuy[i] = min(bestBuy[i-1] , prices[i-1]);
    }
    
    int maxProfit = 0;
    for (int i = 1 ; i< n ; i++){
        int currPrices = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit , currPrices);
    }
    cout << maxProfit ;
}


void trap(int *heights ,int n){
    int leftMax[20000];
    leftMax[0] = heights[0];
    for(int i = 1 ; i < n ; i++){
        leftMax[i] = max(leftMax[i-1] , heights[i-1]);
    }
    cout << endl;
    int rightMax[20000];
    rightMax[n-1] = heights[n-1];
    for(int i = n-2 ; i>= 0 ;i--){
        rightMax[i] = max(rightMax[i+1] , heights[i+1]);
    }

    int waterTrapped = 0;
    for(int i = 0 ; i< n ; i++){
        int currWater = min(leftMax[i] , rightMax[i]) - heights[i];
        if(currWater > 0){
            waterTrapped += currWater;
        }
    }
    cout << "Water Trapped = " << waterTrapped ;
}



int main(){

    // int arr[] = {1 , -7 , 6, 2, 10 , 7, -8};
    // int n = 7;

    // int prices[6] ={7,1,5,3,6,4};
    // int n = sizeof(prices)/sizeof(int);




    // printsubarrays(arr, n);
    


    // MaxSubarraySum(arr , n);
    // MaxSubarraySum1(arr , n);
    

    // MaxSubArraySum2(arr , n);



    // maxProfit(prices , n);



    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);

    trap(heights , n);
    return 0;
}
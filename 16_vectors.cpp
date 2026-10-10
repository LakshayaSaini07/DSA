# include <iostream>
# include <vector>
using namespace std;


void funcInt(){
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr;
    delete ptr;
}


void funcArr(){
    int size;
    cin >> size;

    int *ptr = new int[size];
    int x = 1;
    for(int i = 0 ; i<size ;i++){
        ptr[i] = x;
        x++;
    }

    for(int i = 0 ; i<size ;i++){
        cout <<  ptr[i] << " ";
    }

    delete [] ptr;
}

vector <int> pairSum(vector <int> arr ,int target){
    int st = 0 , end = arr.size()-1;
    int currSum = 0;
    vector <int> ans;

    while(st < end){
        currSum = arr[st] + arr[end];
        if (currSum == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(currSum < target){
            st++;
        }else{
            end--;
        }
    }
    return ans;
}

int main(){

    // static memory allocation
    // int arr[100] ={1,2,3,4,5};

    // dynamic memory allocation
    // int size;
    // cin >> size;
    // int *arr = new int[size];


    
    // for(int i = 0 ; i<size ;i++){
    //     cin >> arr[i];
    // }

    // for(int i = 0 ; i<size ;i++){
    //     cout <<  arr[i];
    // }

    // funcInt();
    // cout << endl;
    // funcArr();


    // int rows , cols ;
    // cout << "Enter rows : ";
    // cin >> rows;

    // cout << "Enter Cols : ";
    // cin >> cols;

    // int **matrix = new int*[rows];

    // for( int i = 0 ; i< rows ; i++){
    //     matrix[i] = new int[cols];
    // }

    // int x = 1;
    // for(int i = 0 ; i < rows ; i++){
    //     for(int j = 0 ; j< cols ;j++){
    //         matrix[i][j] = x++;
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector <int> vec1 = {1,2,4,5};
    // cout << vec1.size();

    // vector <int> vec2(5,-1);
    // for(int i = 0 ; i<vec2.size() ; i++){
    //     cout << vec2[i];
    // }
    

    // vector <int> vec1 = {1,2,3,4};
    // cout << vec1.size() << endl;
    // cout << vec1.capacity() << endl;

    // vec1.push_back(4);
    // cout << vec1.size() << endl;
    // cout << vec1.capacity() << endl;

    // vec1.pop_back();
    // cout << vec1.size() << endl;
    // cout << vec1.capacity() << endl;
    

    // vector <int> vec = {2,7,11,15};
    // int target = 9;
    // vector <int> ans = pairSum(vec , target);
    // cout << ans[0] << " " << ans[1];


    // vector < vector <int> > matrix = {{1,2,3} ,{4,5,6} ,{7,9}};

    // for(int i = 0 ; i< matrix.size() ; i++){
    //     for(int j = 0 ; j<matrix[i].size() ; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector <int> v;

    for(int i = 0 ; i < 5 ; i++){
        v.push_back(i);
    }

    cout << v.size() << endl;
    cout << v.capacity() << endl;


    return 0;
}
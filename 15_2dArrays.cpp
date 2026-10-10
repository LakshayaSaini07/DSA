#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m)
{

    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;
    while (srow <=erow && scol <= ecol){
        for (int j = scol; j <= ecol; j++){
            cout << mat[srow][j] << ' ';
        }

        for (int i = srow + 1; i <= erow; i++){
            cout << mat[i][ecol] << ' ';
        }

        for (int j = ecol - 1; j >= scol; j--){
            if(srow == erow){
                break;
            }
            cout << mat[erow][j] << ' ';
        }

        for (int i = erow - 1; i >= srow; i--){
            cout << mat[i][scol] << ' ';
        }

        srow++ , scol++ ;
        erow-- , ecol--;
    }
}

int diagonalsum(int matrix[][4] ,int n){
    int sum = 0;
    for(int i = 0 ; i<n ;i++){
        sum += matrix[i][i];
        if(i != n-i-1){
            sum += matrix[i][n-i-1];
        }
    }
    return sum;
}

bool search(int matrix[][4] , int n ,int m, int key){
    int i = 0 , j = m-1;
    while(i<n && j >= 0){
        if(matrix[i][j] == key){
            cout << i << j ;
            return true;
        }else if(matrix[i][j] > key){
            j--;
        }
        else{
            i++;
        }
    }
    cout << "not found";
    return false;
}

int seven(int matrix[][4] , int n , int m){
    int count = 0;
    for(int i = 0 ; i<= n ;i++){
        for(int j = 0 ; j< m ;j++){
            if(matrix[i][j] == 7){
                count += 1;
            }
        }
    }

    return count;
}

int sum(int matrix[1][4] , int m){
    int sum = 0;
    for(int j= 0 ;j< m ; j++){
        sum = sum + matrix[1][j];
    }
    return sum;
}

void transpose(int matrix[][4] , int n , int m){
    int trans[4][4];
    
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<n ;j++){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{

    // int student[3][3] = { {100 ,100 ,100},
    //                       {85 , 74 , 89} ,
    //                       {90 , 99 , 85} };
    // for(int i = 0 ; i <3 ; i++){
    //     for(int j = 0 ; j<3 ;j++){
    //          cout << student[i][j] << " ";
    //     }
    // }

    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 7, 11, 12},
                        {13, 14, 7, 16}};

    // spiralMatrix(matrix,4,4);

    
    // int sum = diagonalsum(matrix , 4);
    // cout << sum;

    // int key = 15;
    // search(matrix , 4, 4, 15);

    // int count = seven(matrix , 4,4);
    // cout << count ;

    // int nums = sum(matrix , 4);
    // cout << nums;

    transpose(matrix , 4 ,4);
    

    return 0;
}
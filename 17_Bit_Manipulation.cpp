# include <iostream>
using namespace std;

int getithbit(int n , int i){
    int bitmask = 1 << i ;
    
    if(n & bitmask){
        return 1;
    }else{
        return 0 ;
    };
}

int powerOfTwo(int n){
    // for(int i = 1 ; i <= n ; i++){
    //     cout << (1 << i) << " ";
    // }
    if(!(n &(n-1))){
            cout << "Even"  << " ";
    }
}

int update(int num , int i , int val){
    int bitmask = (1 << i);
    num = num & ~(bitmask) ;
    num =  num | (val << i);
    return num ;
}

int clear(int num , int i){
    int bitmask = ~0 << i ;
    num = num & bitmask;
    return num;
}

int countSetBis(int num){
    int count = 0 ; 
    while(num > 0 ){
        int lastdigit = num & 1;
        if(lastdigit & 1){
            count ++ ;
            num =  num >> 1;
        }
    }
    return count;
}

int fastExpo(int x , int n){
    int ans = 1;

    while(n > 0){
        int lastbit = n & 1;
        if(lastbit){
            ans = ans*x;
        }
        x = x*x;
        n = n >> 1;
    }

    cout << ans;

}

int range(int num , int i , int j ){
    int a = (~0) << (j+1);
    int b = 1 << (i-1);

    int bitmask = a|b;
    num = num & bitmask;
    return num;
}

int main(){
    // int num ;
    // cin >> num;

    // if(num & 1){
    //     cout << "Odd";
    // }else{
    //     cout << "Even" ;
    // }

    // int n , i ;
    // cin >> n ;
    // cin >> i;
    // cout << getithbit(n , i) ;

    // int n ;
    // cin >> n;
    // powerOfTwo(n);

    // int num , i , val;
    // cin >> num ;
    // cin >> i;
    // cin >> val;
    // cout << update(num , i , val);

    // int num , i;
    // cin >> num ; 
    // cin >> i;
    // cout << clear(num , i); 

    // int num ; cin >> num ;
    // cout << countSetBis(num);

    // int x , n;
    // cin >> x;
    // cin >> n;
    // fastExpo(x,n);


    int num , i , j ;
    cin >> num ;
    cin >> i;
    cin >> j;
    cout << range(num , i , j);
    return 0 ;
}
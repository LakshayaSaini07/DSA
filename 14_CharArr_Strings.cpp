#include <iostream>
#include <string>
using namespace std;

void count(string user , int n){
    int vowCount = 0;
    for (int i = 0 ; i<n ;i++){
       if(user[i]>95){
            if(user[i]=='a'||user[i]=='e'||user[i]=='i'||user[i]=='o'||user[i]=='u'){
                vowCount++;
            }
        }
    }
    cout<< vowCount;
}

bool areequal(string s1 , string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    char diffChar1 , diffChar2;
    int diff = 0;
    for(int i = 0 ; i< s1.length() ;i++){
        if(s1[i] != s2[i]){
            if(!diff){
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }else{
                if(s1[i] != diffChar2 || s2[i] != diffChar1){
                    return false;
                }
                diff++;
            }
        }

        if(diff>2){
            return false;
        }
    }
    if(diff==1){
        return false;
    }
    
    return true;
}
    

int main(){
    // string user;
    // cout << "Enter the String : " ;
    // getline(cin , user);
    // count(user , user.length());


    string s1 = "bank";
    string s2 = "kanb";
    cout << areequal(s1 , s2);


}
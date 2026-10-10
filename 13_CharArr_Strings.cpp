#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void toLower(char word[] , int n){
    for(int i = 0 ; i<n ;i++){
        char ch = word[i];
        if(ch >= 'a'){
            continue;
        }else{
            word[i] = ch +  32;
        }
    }

    cout << word ;
}


void reverse(char word[] , int n){
    int start = 0 , end = n-1;
    while(start< end){
        swap(word[start] , word[end]);
        start++;
        end--;
    }
    cout << word;
}

bool isPalindrome(char word[] , int n){
    int start = 0 , end = n-1;
    while(start < end){
        if(word[start++] != word[end--]){
            cout << "No";
            return false;
        }
    }
    cout << "Valid";
    return true;
}

bool isAnagram(string s ,string t){
    int count[26] = {0};
    if (s.length() != t.length()){
        return false;
    }else{
        for(int i= 0 ; i <s.length() ;i++){
            int idx = s[i] - 'a' ;
            count[idx]++;
        }
        for(int i = 0 ; i< t.length() ; i++){
            int idx = t[i] - 'a';
            if(count[idx] == 0){
                return false;
            }
            count[idx]--;

        }
    }
    return true;
}


int main(){
    // char ch = 'a';
    // cout << (int) ch ;

    // char arr[6] ={'a' ,'b' , 'c' , 'd' , 'e' ,'f'};
    // char arr1[5] = {'c' , 'o' ,'d' ,'e' ,'\0'};
    // cout << arr << endl;
    // cout << arr1 << endl;

    // char work[] = "Software";
    // cout << work;

    // char word[10];
    // cin >> word;

    // cout << word << endl;
    // cout << strlen(word) << endl;

    // char sentence[50];
    // cin.getline(sentence , 50, '%');
    // cout << sentence << endl;
    // cout << strlen(sentence) << endl;


    // char word[] = "racecar" ;

    // toLower(word , strlen(word));
    // reverse(word , strlen(word));

    // bool ans = isPalindrome(word , strlen(word));
    

    // char str1[100] = "M";
    // char str2[100] = "Lucky is the best";
    // strcpy(str1, str2);
    // cout << str1 << endl;

    // strcat(str1, str2);
    // cout << str1 << endl <<  str2;

    // cout << strcmp("Mbc" ,"Iyz");

    // string str = "Lakshaya is greatest";
    // cout << str << endl;
    // str = "Lakshaya is the best coder.";
    // cout << str;
    // string str2;
    // getline(cin , str2);
    // cout << str2;

    // for(char ch : str2){
    //     cout << ch << " , ";
    // }
    // cout << endl;

    // cout << str2.length() << endl;
    // cout << str.at(8);
    // cout << str.substr(5,10);
    // cout << str2.find("best");

    string s = "anagram" , t = "nagaram" ;
    cout << isAnagram(s , t);
    
    return 0;
}
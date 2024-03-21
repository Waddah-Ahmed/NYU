#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str);

int main(){
string str;
cout<<"Please enter a word: ";
cin>>str;
if(isPalindrome(str)){
    cout<<str<<" is a palindrome";
}else{
    cout<<str<<" is not a palindrome";
}

    return 0;
}

bool isPalindrome(string str){
    string revers=str;
    for(int i=0;i<str.length();i++){
        revers[i]=str[str.length()-1-i];
       
    }
    if(str==revers){
        return true;
    }else{
        return false;
    }

}
#include<iostream>
#include<string>
using namespace std;

bool compare(string first,string second);
bool compareletterCount(int letter1[],int letter2[]);
int main(){
    string first,second;
    cout<<"Please enter the first sentence: \n";
    getline(cin,first);
    cout<<"Please enter the second sentence: \n";
    getline(cin,second);


    if(compare(first,second)){
        cout<<"The two strings are anagrams";
    }else{
        cout<<"The  two strings are not anagrams";
    }
    return 0;
}

bool compare(string first,string second){
    int letters1[26]={0};
    int letters2[26]={0};
    for(int i=0;i<first.length();i++){
        if(first[i]>='a'&&first[i]<='z'){
            letters1[first[i]-'a']++;
        }else if(first[i]>='A'&&first[i]<='Z'){
             letters1[first[i]-'A']++;
        }
    }
     for(int i=0;i<second.length();i++){
        if(second[i]>='a'&&second[i]<='z'){
            letters2[second[i]-'a']++;
        }else if(second[i]>='A'&&second[i]<='Z'){
             letters2[second[i]-'A']++;
        }
    }
    if(compareletterCount(letters1,letters2)){
        return true;

    }else{
        return false;
    }
}

bool compareletterCount(int letter1[],int letter2[]){
    for(int i=0;i<26;i++){
        if(letter1[i]!=letter2[i]){
            return false;
        }
    }
    return true;
}
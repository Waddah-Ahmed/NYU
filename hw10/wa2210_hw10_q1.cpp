#include<iostream>
#include<string>
using namespace std;
string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){
 string std;
 int wordsArrSize;
cout<<"Please enter sentence: ";
 getline(cin,std);
 

string *words=createWordsArray(std,wordsArrSize);
cout<<"New array size: "<<wordsArrSize<<endl;
cout<<"New array elements: ";
for(int i=0;i<wordsArrSize;i++){
    cout<<words[i]<<" ";
}

    delete[] words;
    return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize){
    int count=1;

    for(int i=0;i<sentence.length();i++){
        if(sentence[i]==' '&&i!=0){
            count++;
        }
    }
    string original=sentence;
    string *arr= new string[count];
    int index=0;
    string word="";
    for(int i=0;i<sentence.length();i++){
        word+=sentence[i];
        if(sentence[i]==' '&&i!=0||i==sentence.length()-1){
          word="\""+word+"\"" ;
          arr[index]=word;
          index++; 
          word="";
        }
    }
outWordsArrSize=count;
return arr;
}
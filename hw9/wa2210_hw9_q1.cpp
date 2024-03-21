#include<iostream>
#include<string>
using namespace std;

void extract(string std);

int main(){
    string std;
    cout<<"Please enter a line of text:\n";
    getline(cin,std);
    extract(std);
    return 0;
}

void extract(string std){
int countWords=0;
int countletters=0;
int Letters[26]={0};
for(int i=0;i<std.length();i++){
    if(std[i]==' '||std[i]=='.'||std[i]==','){
        if(countletters!=0){
            countWords++;
            countletters=0;
        }
    }else{
            if(std[i]>='a'&&std[i]<='z'){
                Letters[std[i]-'a']++;
                countletters++;}
                else if(std[i]>='A'&&std[i]<='Z'){
                Letters[std[i]-'A']++;
                countletters++;    

                }
        }
}
cout<<countWords<<"\t words"<<endl;

for(int i=0;i<26;i++){
    if(Letters[i]>0){
        cout<<Letters[i]<<"\t"<<char('a'+i)<<endl;
    }
}
}
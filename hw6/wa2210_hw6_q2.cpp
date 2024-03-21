#include<iostream>
using namespace std;

void printShiftedTriangle(int lines,int margin , char symbol);
void printPineTree(int n, char symbol);

int main(){
    int lines1,lines2,margin;
    char symbol1,symbol2;
    cout<<"please enter positive integer to print shifted Tringle :\n";
    cout<<"numbers of lines: ";
    cin>>lines1;
    cout<<"numbers of margin: ";
    cin>>margin;
    cout<<"symbol: ";
    cin>>symbol1;
    printShiftedTriangle(lines1,margin,symbol1);

    cout<<"please enter positive integer to print Pine Tree :\n";
    cout<<"numbers of lines: ";
    cin>>lines2;
    cout<<"symbol: ";
    cin>>symbol2;
    printPineTree(lines2,symbol2);

    return 0;
}
void printPineTree(int n, char symbol){
    for(int i=1;i<=n;i++){
        printShiftedTriangle( i+1, n-i , symbol);
    }

}

void printShiftedTriangle(int lines,int margin , char symbol){

    for(int i=1;i<=lines;i++){
        for(int j=1;j<=margin;j++){
            cout<<" ";
        }
        for(int k=1;k<=lines-i;k++){
            cout<<" ";
        }
        for(int n=1;n<=(2*i)-1;n++){
            cout<<symbol;
        }
        cout<<endl;
    }

}


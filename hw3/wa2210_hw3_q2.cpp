#include<iostream>
#include<string>

using namespace std;

int main(){

    string studentName,status;
    int graduationYear,currentYear,yearsDifference ;


    cout<<"Please enter your name: ";
    cin>>studentName;

    cout<<"Please enter your graduation year: ";
    cin>>graduationYear;

    cout<<"Please enter current year: ";
    cin>>currentYear;

    yearsDifference=graduationYear-currentYear;

    if(yearsDifference==0){
        status="Graduated";
    }else if( yearsDifference==4){
        status="Freshman";
    }else if(yearsDifference==3){
        status="Sophomore";
    }else if (yearsDifference==2){
        status="Junior";
    }else if(yearsDifference==1){
        status="senior";
    }else{
        status="unknown status";
    }

    cout<<studentName<<", you are a "<<status;
    return 0;
}
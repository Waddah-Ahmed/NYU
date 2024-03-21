#include<iostream>
using namespace std;


int printMonthCalender(int numOfDays, int startingDay);
bool leapOrNot(int year);
void printYearCalender(int year, int startingDay);


int main(){
    int year,startingDay;
    cout<<"Please enter the Year: ";
    cin>>year;
    cout<<"Please enter the starting day: ";
    cin>>startingDay;
    printYearCalender(year,startingDay); 


    return 0;
}



int printMonthCalender(int numOfDays, int startingDay){

     cout<<"Mon\tTue\tWed\tThr\tFri\tSat\tSun\t"<<endl;
    for(int i=1;i<numOfDays+startingDay;i++){
        if(i<startingDay){
            cout<<"\t";
        }else{
        
            cout<<i-startingDay+1<<"\t";
             if(i%7==0){
                     cout<<endl;
                        }
             }

    }
    cout<<endl;
    return ((startingDay+numOfDays-1)%7);
}



bool leapOrNot(int year){
    if(year%4==0){
        if(year%100!=0){
            return true;
        }else{
            if(year%400==0){
                return true;
            }else{
                return false;
            }
        }

    }else{return false;}
}


void printYearCalender(int year, int startingDay){
    int numOfDays;
    
    for(int i=1;i<=12;i++){
        switch(i){
            case(1):{cout<<"January "<<year<<endl;break;}
            case(2):{cout<<"February "<<year<<endl;break;}
            case(3):{cout<<"March "<<year<<endl;break;}
            case(4):{cout<<"April "<<year<<endl;break;}
            case(5):{cout<<"May "<<year<<endl;break;}
            case(6):{cout<<"June "<<year<<endl;break;}
            case(7):{cout<<"July "<<year<<endl;break;}
            case(8):{cout<<"August "<<year<<endl;break;}
            case(9):{cout<<"September "<<year<<endl;break;}
            case(10):{cout<<"October "<<year<<endl;break;}
            case(11):{cout<<"November "<<year<<endl;break;}
            case(12):{cout<<"December "<<year<<endl;break;}
        }
        if(i%2==0&&i<=7){
            if(i==2){
                if(leapOrNot(year)){numOfDays=29;}else{numOfDays=28;}
            }else{numOfDays=30;}
        }else if(i%2!=0&&i<=7){numOfDays=31;}
        else if(i%2==0&&i>7){
            numOfDays=31;
        }else if(i%2!=0&&i>7){numOfDays=30;}

    
        startingDay=(printMonthCalender(numOfDays,startingDay))+1;       
        cout<<endl;
    }
   
}
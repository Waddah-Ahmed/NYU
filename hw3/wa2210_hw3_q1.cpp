#include<iostream>
using namespace std;

int main(){


    double firstItems,secondItem,firstDiscount,secondDiscount,taxRate,total;
    char membership;


    cout<<"Enter the price of first item: ";
    cin>>firstItems;
    cout<<"Enter the price of second item: ";
    cin>>secondItem;

    // counting the first discount"Buy	one	get	one	half	off	promotion:	the	lower	price	item	is	half	price."
    if(firstItems>secondItem)
        firstDiscount=firstItems+(secondItem/2.0);
    else
        firstDiscount=secondItem+(firstItems/2.0);
      
    //If	the	customer	is	club	card	member,	additional	10%	off.
    cout<<"Dose customer have a club card?(Y/N): ";
    cin>>membership;
    if(membership=='y'||membership=='Y'){
        secondDiscount=(0.9*firstDiscount);
    }else if(membership=='n'||membership=='N'){
        secondDiscount=firstDiscount;
    }

    //Tax	is	added.
    cout<<"Enter tax rate, e.g. 5.5 for	5.5%    tax rate :";
    cin>>taxRate;

    //Total after discount
    total=secondDiscount+(secondDiscount*taxRate/100);

    //print the result
    cout<<"Based price: "<<firstItems+secondItem<<endl;
    cout<<"Price after Discount: "<<secondDiscount<<endl;
    cout<<"Total price: "<< total;
    return 0;
}
#include<iostream>
using namespace std;
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
void print(int arr[],int size);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSize);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);



int main(){
int size=6;
int arr[size]={3, -1, -3, 0, 6, 4};
int positiveSize1;

int *postive1= getPosNums1(arr,size,positiveSize1);
cout<<"getPosNums1: ";
print(postive1,positiveSize1);
cout<<"Size1: "<<positiveSize1<<endl;
delete[] postive1;
postive1=nullptr;

int positiveSize2;
int *postive2=getPosNums2(arr,size, &positiveSize2);
cout<<"getPosNums2: ";
print(postive2,positiveSize2);
cout<<"Size2: "<<positiveSize2<<endl;
delete[] postive2;
postive2=nullptr;


int* positiveArr3;
int positiveSize3;
getPosNums3(arr,size,positiveArr3,positiveSize3);
cout<<"getPosNums3: ";
print(positiveArr3,positiveSize3);
cout<<"Size3: "<<positiveSize3<<endl;
delete[] positiveArr3;
positiveArr3=nullptr;

int* positiveArr4;
int positiveSize4;
getPosNums4(arr,size,&positiveArr4,&positiveSize4);
cout<<"getPosNums4: ";
print(positiveArr4,positiveSize4);
cout<<"Size4: "<<positiveSize4<<endl;
delete[] positiveArr4;
positiveArr4=nullptr;



    return 0;
}



int* getPosNums1(int* arr, int arrSize, int& outPosArrSize){

int index=0;
int count=0;
for(int i =0;i<arrSize;i++){
  if(arr[i]>0){
    count++;
  }
}
int* postivArr= new int[count];
for(int i=0;i<arrSize;i++){
      if(arr[i]>0){
               
        postivArr[index]=arr[i];
        index++;

    }
}
outPosArrSize=count;
return postivArr;
}

int* getPosNums2(int* arr, int arrSize, int* outPosArrSize){

int index=0;
int count=0;
for(int i =0;i<arrSize;i++){
  if(arr[i]>0){
    count++;
  }
}
int* postivArr= new int[count];
for(int i=0;i<arrSize;i++){
      if(arr[i]>0){
               
        postivArr[index]=arr[i];
        index++;

    }
}
    *outPosArrSize=count;
return postivArr;
}

void getPosNums3(int* arr, int arrSize,int*& outPosArr, int& outPosArrSize){
outPosArr=getPosNums1(arr,arrSize,outPosArrSize);
}
void getPosNums4(int* arr, int arrSize,int** outPosArrPtr, int* outPosArrSizePtr){
    int index=0;
int count=0;
for(int i =0;i<arrSize;i++){
  if(arr[i]>0){
    count++;
  }
}
int* postivArr= new int[count];
for(int i=0;i<arrSize;i++){
      if(arr[i]>0){
               
        postivArr[index]=arr[i];
        index++;

    }
    *outPosArrPtr=postivArr;
    *outPosArrSizePtr=count;


}}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
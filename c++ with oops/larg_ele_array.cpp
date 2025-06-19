#include <iostream>
using namespace std;

int findLargest(int numbers[],int size) {
    if (size<=0){
        cout<<"Error: Array is empty or invalid."<<endl;
        return -1;
    }

    int largest = numbers[0];
    for (int i=1; i<size; i++){
        if(numbers[i]>largest){
            largest = numbers[i];
    
    }

}
return largest;

}

int main() {
    int myArray[]={10,5,20,8,15};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int theLargestNumber =findLargest(myArray,arraySize);
    if(theLargestNumber!=0){
        cout<<"The largest number in the array is: "<<theLargestNumber<<endl;
    }
    return 0;
}
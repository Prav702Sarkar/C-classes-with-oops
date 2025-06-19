#include <iostream>
using namespace std;

class Large{
    int* number;
    int size;
    public:
    Large(int number[],int size){
        if(size==0){
            cout<<"Array is empty!";
            this->number=NULL;
            this->size=0;
        }
        else{
            this->size=size;
            this->number=new int[size];
            for(int i=0;i<size;i++){
                this->number[i]=number[i];
            }
        }
    }

    int isProcess(){
        if(size==0||number==NULL){
            return -1;
        }
        int largest = number[0];
        for(int i=1; i<size; i++){
            if(number[i]>largest){
                largest = number[i];
            }
        }
        return largest;
    }
    public:
    void display() {
        int result = isProcess();
        if (result == -1) {
            cout << "Array is empty or invalid!" << endl;
        } else {
            cout << "The largest number in the array is: " << result << endl;
        }
    }
    
};

int main(){
    int numbers[]={1,2,3,4,5,6};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    Large l(numbers,size);
    l.display();
    return 0;
}
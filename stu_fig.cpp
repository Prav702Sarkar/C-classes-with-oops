#include <stdio.h>  
#include <string.h>  

union student {  
    char name[50];  
    int rollNumber;  
    float marks;  
};  

void display(union student s) {  
    printf("Student Name: %s\n", s.name);  
    printf("Roll Number: %d\n", s.rollNumber);  
    printf("Marks: %.2f\n", s.marks);  
}  

int main() {  
    union student s;  

    strcpy(s.name, "Alice");  
    printf("Student Name: %s\n", s.name);  

    s.rollNumber = 10;   
    printf("Roll Number: %d\n", s.rollNumber);  

    s.marks = 95.5;   
    printf("Marks: %.2f\n", s.marks);  

    display(s);  
    
    return 0;  
}
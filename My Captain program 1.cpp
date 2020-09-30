
// C program to find the size of int, char, 
// float and double data types 
  
#include <stdio.h> 
  
int main() 
{ 
    int integerType; 
    char charType; 
    float floatType; 
    double doubleType; 
  
    // Calculate and Print 
    // the size of integer type 
    printf("Size of int is: %ld\n", 
           sizeof(integerType)); 
  
    // Calculate and Print 
    // the size of charType 
    printf("Size of char is: %ld\n", 
           sizeof(charType)); 
  
    // Calculate and Print 
    // the size of floatType 
    printf("Size of float is: %ld\n", 
           sizeof(floatType)); 
  
    // Calculate and Print 
    // the size of doubleType 
    printf("Size of double is: %ld\n", 
           sizeof(doubleType)); 
  
    return 0; 
} 


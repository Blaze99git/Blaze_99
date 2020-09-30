
#include <iostream>
using namespace std;
 
float main()
{
    float x, y, multiplication;
    
    cout << "Enter two integers for multiplication: ";
    cin >> x >> y;
 
    // stored result in third variable
    multiplication = x * y;
 
    // Prints multiplication value 
    cout << x << " * " <<  y << " = " << multiplication;     
 
    return 0;
}

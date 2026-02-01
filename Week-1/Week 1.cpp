#include <iostream>
using namespace std;
//simple function
int add(int a, int b) {
    return a + b;
}
//fuction with error handling abilities.
double divide(double a, double b) {
    if (b == 0 || a == 0) {
        cout << "Error cannot divide by ";
        return 0.0;
    }
    return a / b;
}

int main() {
    
cout << add(5,3) << endl;

cout << "------------------------------------" << endl;

cout << divide(10, 2) << endl;
cout << divide (0,14) << endl;

cout << "------------------------------------" << endl;

int num[4] {1, 2, 3, 4};
cout << "calling first number: " << num[0] << endl;
cout << "calling last number: " << num[3] << endl;
// changing element
num[0] = 5;
cout << num[0] << endl;

//looping array 
for(int i(0); i < 4; ++i) {
    cout << num[i] << " " ;
}

cout << endl << "------------------------------------" << endl;

// pointers example. 
int number(23); //regular variable
int* pointer(&number);
cout << "value of number " << number << endl;
cout << "address of number " << &number << endl;
cout << "pointer address " << pointer << endl;
cout << "value point to by the pointer " << *pointer << endl;
//you can change the value of the number through the pointer
*pointer = 50;
cout << "numbers new value is " << number << endl;









    return 0;
}
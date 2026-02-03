// Pointers
#include <iostream>
using namespace std;


int main () {
   /* 
  //step 1 declare a variable. 
  int a;
  
  //step 2 declare a Pointers
  
  int *p;
  
  //step 3 make the pointer point to 'a'
  // '&a' means address of a"
p = &a; // p holds the address of a 

//step 4 assign a value to a
a = 15;

//step 5 print values and addresses

cout << "p (address stored in p): " << p << endl; //the address of a
cout << "&p (the address of p): " << &p << endl; //address of p 
cout << "&a (address of a): " << &a << endl; //address of a 
cout << "*p (value pointed to by p): " << *p << endl; // the value of a
cout << "a (value of a): " << a << endl;
cout << endl;
//step 6 modify the value of 'a' using the pointer
// '*p' means go to the address of p points to and change the value there.
*p = 14;
//step 7 print a again and see what happens.
cout << "a (after point p = 14): " << a << endl;


cout << endl;

// new code to explain An Array of pointers to integers


    
*/
    
    // explain this code when you get home.
    int *p[10];
    /*
    for (int i(0); i <10; ++i) {
        *p[i] = i;
        cout << *p[i] << endl;
    }
    */
    
    for (int i(0); i < 10; ++i) {
        p[i] = new int;
        *p[i] = i;
        cout << p[i] << endl;
    } // this will print 10 addresses.
    
    return 0;
}
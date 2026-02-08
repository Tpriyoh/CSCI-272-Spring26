//template 
#include <iostream> 
using namespace std;

/*
//find max value 
template <typename T> //we use T because its short for Template or any other var you want 
T myMax(T a, T b) {
    return (a > b) ? a : b; //you can write it with if else as well.
    
    
}
*/

/*
//function template to calculate total bill with tip
template <typename T>
T calculateTotalBill(T billAmount, T tipPercent) {
T tipAmount = billAmount * (tipPercent/100);
T totalBill = billAmount + tipAmount;
    
cout << "your total bill amount is $" << billAmount << endl;
cout << "your tip amount is " << tipPercent << "%) $" << tipAmount << endl;
cout << "Total Bill: $" << totalBill << endl;    
    return totalBill;
}

*/

//function template 2.
//one general template.
template <typename T>
T applyPercentage(T amount, T percent, bool add){
    T change = amount * (percent / 100);
    
if (add) 
return amount + change; //tip or tax.

else 
return amount - change; //discount
    
}











int main () {
    
/*
// part 2 of function template.
  double bill  = 100.00;
  double tipP = 15.0;

  
  calculateTotalBill(bill, tipP);

return 0;
    */

//part 2 of function template 2.  general template

double bill = 100.00;
// 1. Tip.
double totalWithTip = applyPercentage(bill, 15.0, true); //if you just put 15 it will print an error so make sure the tip is a decimal.
cout << "Total with tip: $" << totalWithTip << endl;


//with tax
double totalWithTax = applyPercentage(bill, 8.875, true);
cout << "Total with tax $" << totalWithTax << endl;

double discountedBill = applyPercentage(bill, 10.0, false);
cout << "After discount: $" << discountedBill << endl;
    
 int intBill = 50;
 int roundedTotal = applyPercentage(intBill, 10, true);
 cout << "Rounded Total: $" << roundedTotal << endl;
    
    
    
    
    
/*
   
cout << "int: " << myMax (3, 7) << endl;
cout << "double: " << myMax (3.14, 2.71) << endl;
cout << "Char: " << myMax('a', 'z') << endl;
cout << "Char: " << myMax('a', 'Z') << endl;
//ASCII value is a hexa decimal number and determines the larger of the 2 to pick the max we use single quote for char because char is a single character.

*/
    
    
    
    
    return 0;
   
    
}
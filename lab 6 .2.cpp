#include <iostream> 

using namespace std;

int main() {

int firstValue;

int secondValue;

int *pPointer = nullptr;

//assign pointer with the address of firstValue pPointer = &firstValue; 
*pPointer = 10;
 //Indirection 

*pPointer = 20; //Indirection 
cout << "firstValue is " << firstValue << '\n';
cout << "secondValue is" << secondValue << '\n'; 

return 0; 
 
}
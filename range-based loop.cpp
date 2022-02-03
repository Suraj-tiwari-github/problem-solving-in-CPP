/* A program to demostrate a example of range-based loop or for-each loop.This is also 
called as enhanced for loop.
This loop works on iterable like string,array, set
syntax of range-based loop

for(dataType variable : iterable){
  //* body of the loop;
}
 
/!note: auto keyword can be used to deduce the type of element
*/
#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,2,3,4,5,6,7, 8, 9};
  for(int x: arr){// Instead of int we can use auto too for less errors.
    cout<<" "<< x<< endl;
  }
  return 0;
}

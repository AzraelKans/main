#include <iostream>
#include "fibonacci.h"

 
using namespace std;
 
main()
{
   int n;
 
   cout << "Enter the number of terms of Fibonacci series you want" << endl;
   cin >> n;
 
   cout << "First " << n << " terms of Fibonacci series are :- " << endl;

   fibonacci(n);
 
 
   return 0;
}
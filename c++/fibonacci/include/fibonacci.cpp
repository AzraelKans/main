#include <iostream.h>
#include "fibonacci.h"

int c, next, second;

void fibonacci(int n){
	
	for ( c = 0 ; c < n ; c++ )
	{
	if ( c <= 1 )
      next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }
}
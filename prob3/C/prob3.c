#include <stdio.h>

// Brute-force C solution

int is_prime(num)
{
  int output = 1;
  unsigned long factor;
  for(factor = 2; factor*factor < num; factor++)
  {
    if(num % factor == 0)
      output = 0;
  }

  return output;
}

int main(void)
{
  unsigned long composite = 600851475143;
  unsigned long largest_prime = 2;
  unsigned long factor = 2;

  while(factor*2 < composite)
  {
    if((composite % factor == 0) && (is_prime(factor)))
    {
      largest_prime = factor; 
    }

   factor++; 
  }

  return 0;
}


#include <stdio.h>
#define UPPER_BOUND 2000000

int is_prime(num)
{
  int output = 1;
  unsigned long factor;
  for(factor = 2; factor*factor <= num; factor++)
  {
    if(num % factor == 0)
      output = 0;
  }

  return output;
}

int main(void)
{
  unsigned long answer;
  answer = 0;

  unsigned long indx;
  for(indx = 2; indx < UPPER_BOUND; indx++)
  {
    if(is_prime(indx))
      answer = answer + indx;
  }

  printf("ANSWER: %lu\n", answer);

  return 0;
}


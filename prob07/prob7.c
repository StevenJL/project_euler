#include <stdio.h>

int is_prime(int num)
{
  int output;
  output = 1;

  int indx;
  for (indx = 2; indx * indx <= num; indx++)
  {
    if(num % indx == 0)
      output = 0;
  }

  return output;
}

int get_new_prime(current_prime)
{
  int cand;
  cand = current_prime+1;
  while(!is_prime(cand))
  {
    cand++; 
  }

  return cand;
}

int main(void)
{
  int primes_found;
  primes_found = 1;

  unsigned long current_prime;
  current_prime = 2;

  while(primes_found < 10001)
  {
    current_prime = get_new_prime(current_prime);
    printf("CURRENT PRIME: %lu\n", current_prime);
    primes_found++;
    printf("PRIMES FOUND: %d\n", primes_found);
  }

  printf("PRIME: %lu\n", current_prime);
  return 0;
}


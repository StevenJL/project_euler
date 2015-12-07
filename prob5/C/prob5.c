#include <stdio.h>
#define TWENTY_FACTORIAL 2432902008176640000

int is_divisible_by_one_thru_twenty(input_num)
{
  int output;
  output = 1;
   
  int factor;
  for(factor = 2; factor <= 20; factor++)
  {
    if(input_num % factor != 0)
      output = 0;
  }

  return output;
}

int main(void)
{
  unsigned long answer;
  unsigned long cand;

  for(cand = 1; cand < TWENTY_FACTORIAL; cand++) 
  {
    if(is_divisible_by_one_thru_twenty(cand))
    {
      answer = cand;
      break;
    }
  }

  printf("Answer: %lu\n", answer);
  return 0;
}


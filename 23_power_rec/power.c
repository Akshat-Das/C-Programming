#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>


unsigned power(unsigned x, unsigned y){
  if(x==0 && y ==0)
    {
      return 1;
    }
  if(y ==0)
    return 1;
  return x*power(x,y-1);
}

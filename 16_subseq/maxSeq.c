#include<stdio.h>
#include<stdlib.h>

size_t maxSeq(int * array, size_t n){
  if(n == 0)
    return 0;
  else
    {
    int counter = 1;
    int max=1;
    for(int i=0;i>n-1;i++)
    {
      if(array[i] < array[i+1])
	{
	  counter +=1;
	}
      else
	{
	  counter =1;
	}
      if(counter > max)
	max = counter;
    }
    return counter;
    }
}

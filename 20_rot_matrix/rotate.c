#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void rotate(char matrix[10][10]){
  char transpose[10][10];
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      transpose[i][j] = matrix[j][i];
    }
  }

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      matrix[i][j] = transpose[i][9-j];
    }
  }
}

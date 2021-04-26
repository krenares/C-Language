#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

 
  int n,row,col,size;
  scanf("%d", &n);

  size=2*n;
  int x = n;
  int arr[size-1][size-1];
  //n=n+1;
  while(n>0){
    row=x-n;
    col=x-n;
    while(col<size-(x-n)-2){
      arr[row][col] = n;
      col++;
    }
    col=size-(x-n)-2;
    row=x-n;
    while(row<size-(x-n)-1){
      arr[row][col]=n;
      row++;
    }
    row = size-(x-n)-2;
    col = size-(x-n)-2;
    while (col >x-n) {
      arr[row][col] = n;
      col--;
    }
    col = x-n;
    row = size-(x-n)-2;
    while (row > x-n) {
      arr[row][col] = n;
      row--;
    }
    n--;
  }
  for(row=0;row<size-1;row++){
    for(col=0;col<size-1;col++){
      printf("%d ",arr[row][col]);
    }
    printf("\n");
  }
  return 0;
}

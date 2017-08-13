#include <stdio.h>

int main(){
  int row, column, r, c;

  scanf("%d", &row);
  scanf("%d", &column);

  int myarray[row][column];

  for(r = 0; r < row; r++){
    for(c = 0; c < column; c++){
      scanf("%d", &myarray[r][c]);
    }
  }

  for(r = 0; r < row; r++){
    for(c = 0; c < column; c++){
      printf("%d ", myarray[r][c]);
    }
    printf("\n");
  }
}

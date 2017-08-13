#include <stdio.h>
#include <math.h>

int main(){
  char result[100];
  int decimal, r, q, i;

  scanf("%d", &decimal);

  i = 0;

  while(decimal > 0){
    r = decimal % 2;
    result[i] = r + '0';
    decimal /= 2;
    i++;
  }

  while(i > -1){
    printf("%c", result[i]);
    i--;
  }
}

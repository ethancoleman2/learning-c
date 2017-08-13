#include <stdio.h>
#include <math.h>

int power(int b, int p){
  if(p == 0){
    return 1;
  }
  else{
    return b * power(b, p - 1);
  }
}

int main(){
  int b, p, exponent;

  printf("Please enter the base: \n");
  scanf("%d", &b);

  printf("Please enter the power: \n");
  scanf("%d", &p);

  // if(p == 0){
  //   printf("1");
  // }
  // else if(p > 0){
  //   exponent = b;
  //   for(loopcounter = 1; loopcounter < p; loopcounter++){
  //     exponent *= b;
  //   }
  //   printf("%d", exponent);
  // }

  printf("%d", power(b, p));
}

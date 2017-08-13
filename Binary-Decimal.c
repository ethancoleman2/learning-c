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
  char myarray[100];
  int loopcounter1, loopcounter2, exponent, size, decimal, binary;

  for(loopcounter1 = 0; loopcounter1 < 100; loopcounter1++){
    scanf("%c", &myarray[loopcounter1]);
    if(myarray[loopcounter1] == '\n'){
      size = loopcounter1;
      break;
    }
  }

  exponent = 0;

  for(loopcounter2 = size - 1; loopcounter2 > - 1; loopcounter2--){
      if(myarray[loopcounter2] == '0'){
        exponent++;
      }
      else {
        decimal += power(2, exponent);
        exponent++;
      }
  }
  printf("%d \n", decimal);
}

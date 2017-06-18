#include <stdio.h>
#include <math.h>

int main(){
int loopcounter, values[5];

loopcounter = 0;

while(loopcounter < 5){
scanf("%d", &values[loopcounter]);
loopcounter++;
}

loopcounter = 0;

while(loopcounter < 5){
  printf("%d", values[loopcounter]);
       loopcounter++;
}
}

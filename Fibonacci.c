#include <stdio.h>
#include <math.h>

int fibb(int stop){
  if(stop == 0){
    return 0;
  }
  else if(stop == 1){
    return 1;
  }
  else{
    return (fibb(stop - 1) + fibb(stop - 2));
  }
}

int main(){
  int stop, loopcounter, r, s, l;
  scanf("%d", &stop);

  // s = 0;
  // l = 1;
  //
  // for(loopcounter = 1; loopcounter < stop; loopcounter++){
  //    r = s + l;
  //    s = l;
  //    l = r;
  // }
  printf("%d", fibb(stop));
}

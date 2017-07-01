#include <stdio.h>
#include <math.h>

void sa_prism(){
  double sa, bp, ph, ba;
  printf("Enter the base perimeter: \n");
  scanf("%lf", &bp);
  printf("Enter the prism height: \n");
  scanf("%lf", &ph);
  printf("Enter the base area: \n");
  scanf("%lf", &ba);
  sa = (bp * ph) / 2 * (2 * ba);
  printf("The surface area of the prism is : %lf \n", sa);
}

void a_circle(){
  double r, a;
  printf("Enter the radius here: \n");
  scanf("%lf", &r);
  a = M_PI * (r * r);
  printf("The area of the circle is : %lf \n", a);
}

int main(){
  int input;

  input = 1;

  while(input > 0){
    printf("Press 1 for SA of Prism \n\
Press 2 for Area of Circle \n\
Press any negative number to stop code \n");

    scanf("%d", &input);

    if(input < 1){
      printf("Thanks for using our code! \n");
    }
    else if(input == 1){
      sa_prism();
    }
    else if(input == 2){
      a_circle();
    }
    else{
      printf("Invalid number! \n");
    }
  }
}

#include <FPT.h>

int main(){
  int lowleftx, lowlefty, width, height;

  printf("Enter the lowleftx value: \n");
  scanf("%d", &lowleftx);
  printf("Enter the lowlefty value: \n");
  scanf("%d", &lowlefty);
  printf("Enter the width here: \n");
  scanf("%d", &width);
  printf("Enter the height here: \n");
  scanf("%d", &height);

  G_init_graphics(600, 600);
  G_rectangle(lowleftx, lowlefty, width, height);
  G_wait_key();
  G_rgb(1, 0, 0);
  G_fill_rectangle(lowleftx, lowlefty, width, height);
  G_wait_key();

}

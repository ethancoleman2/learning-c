#include <FPT.h>

int main(){
  int llx, lly, width, height, loopcounter1, loopcounter2, x1, y1, x2, y2,\
   x3, y3, x4, y4;
  G_init_graphics(800, 800);
  G_rectangle(200, 200, 400, 400);

  y4 = 200;

  for(loopcounter2 = 600; loopcounter2 > 200; loopcounter2 -= 5){
    x4 = loopcounter2;

    G_line(600, 600, x4, y4);
  }

  y2 = 600;

  for(loopcounter1 = 200; loopcounter1 < 600; loopcounter1 += 5){
    x2 = loopcounter1;

    G_line(200, 200, x2, y2);
  }

  G_wait_key();
}

#include <FPT.h>

int main(){
  int lowleftx, lowlefty, width, height, g, b, n;
  double color[4][3] = {
    {0.392157, 0.529412, 0.113725},
    {0.29804, 0.337255, 0.255353},
    {0.43922, 0.639216, 0.035294},
    {0.56078, 0.58824, 0.509804},
  }, angle, loopcounter, x2, y2, r, angle2;

  //0.392157, 0.529412, 0.113725;
  //0.29804, 0.337255, 0.22353;
  //0.43922, 0.639216, 0.035294;
  //0.56078, 0.58824, 0.509804;
  G_init_graphics(400, 400);
  G_circle(200, 200, 100);
  G_wait_key();

  n = 7;
  r = 100;

  for(loopcounter = 0; loopcounter < n; loopcounter++){
    angle = 2 * M_PI * (loopcounter / n);
    x2 = r * cos(angle) + 200;
    y2 = r * sin(angle) + 200;
    angle2 = 2 * M_PI * ((loopcounter + 1) / n);
    G_rgb(0.06 * loopcounter, 0.06 * loopcounter, 0.06 * loopcounter);
    G_fill_sector(200, 200, 100, angle, angle2);
    G_line(200, 200, x2, y2);
  }
  G_wait_key();
}

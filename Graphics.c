#include <FPT.h>
#include <math.h>

  int SWIDTH, SHEIGHT, X, Y, X1, X2, Y1, Y2;
  double R, G, B;

void d_point(){
  int choice;

    printf("What color would you like to make your point? \n");
    printf("Put your shade of red here: ");
    scanf("%lf", &R);
    printf("Put your shade of green here: ");
    scanf("%lf", &G);
    printf("Put your shade of blue here: ");
    scanf("%lf", &B);

    R = R / 255;
    G = G / 255;
    B = B / 255;

  choice = 3;

  while(choice > 1){
    printf("Enter your value for the x axis here: \n");
    scanf("%d", &X);

    if(X > SWIDTH){
      printf("Please enter a lower value! \n");
    }
    else if(X < 0){
      printf("Please enter a higher value! \n");
    }
    else{
      break;
    }
  }

  choice = 4;

  while(choice > 1){
    printf("Enter your value for the y axis here: \n");
    scanf("%d", &Y);

    if(Y > SHEIGHT){
      printf("Please enter a lower value! \n");
    }
    else if(Y < 0){
      printf("Please enter a higher value! \n");
    }
    else{
      break;
    }
  }
}

void d_line(){
    int choice;
    printf("What color would you like to make your line? \n");
    printf("Put your shade of red here: ");
    scanf("%lf", &R);
    printf("Put your shade of green here: ");
    scanf("%lf", &G);
    printf("Put your shade of blue here: ");
    scanf("%lf", &B);

    R = R / 255;
    G = G / 255;
    B = B / 255;

    choice = 2;

    while(choice > 1){
      printf("Enter your value for the first x coordinate here: \n");
      scanf("%d", &X1);

      if(X1 > SWIDTH){
        printf("Please enter a lower value! \n");
      }
      else if(X1 < 0){
        printf("Please enter a higher value! \n");
      }
      else{
        break;
      }
    }

    choice = 3;

    while(choice > 1){
      printf("Enter your value for the first y coordinate here: \n");
      scanf("%d", &Y1);

      if(Y1 > SHEIGHT){
        printf("Please enter a lower value! \n");
      }
      else if(Y1 < 0){
        printf("Please enter a higher value! \n");
      }
      else{
        break;
      }
    }

    choice = 4;

    while(choice > 1){
      printf("Enter your value for the second x coordinate here: \n");
      scanf("%d", &X2);

      if(X2 > SWIDTH){
        printf("Please enter a lower value! \n");
      }
      else if(X2 < 0){
        printf("Please enter a higher value! \n");
      }
      else{
        break;
      }
    }

    choice = 5;

    while(choice > 1){
      printf("Enter your value for the second y coordinate here: \n");
      scanf("%d", &Y2);

      if(Y2 > SHEIGHT){
        printf("Please enter a lower value! \n");
      }
      else if(Y2 < 0){
        printf("Please enter a higher value! \n");
      }
      else{
        break;
      }
    }
}

int main(){
  int choice;
  double r,g,b;

  SWIDTH = 2;

  while(SWIDTH > 1){
    printf("Enter the width of your window here: \n");
    scanf("%d", &SWIDTH);

    if(SWIDTH > 800){
      printf("Please enter a lower number! \n");
      }
    else if(SWIDTH < 1){
      printf("Please enter a higher number! \n");
    }
    else{
      break;
      }
  }

  SHEIGHT = 3;

  while(SHEIGHT > 1){
    printf("Enter the height of your window here: \n");
    scanf("%d", &SHEIGHT);

    if(SHEIGHT > 800){
      printf("Please enter a lower number! \n");
    }
    else if(SHEIGHT < 1){
      printf("Please enter a higher number! \n");
      }
    else{
      break;
    }
  }

  choice = 3;

    while(choice > 1){
      printf("Press 1 for a point \n\
Press 2 for a line \n");
      scanf("%d", &choice);

      if(choice > 2){
        printf("Please select a number abiding by the guidlines! \n");
      }
      else if(choice == 1){
        d_point();
        break;
      }
      else if(choice == 2){
        d_line();
        break;
      }
      else{
        printf("Invalid Number! \n");
      }
    }

    G_init_graphics(SWIDTH, SHEIGHT);
    G_rgb(R, G, B);
    G_line(X1,Y1, X2, Y2);
    G_point(X, Y);
    G_wait_key();
}

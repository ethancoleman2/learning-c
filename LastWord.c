#include <stdio.h>

int main(){
  char sent[100];
  int loopcounter, size, lastword_size;

  loopcounter = 0;

  while(loopcounter < 100){
    scanf("%c", &sent[loopcounter]);
    if(sent[loopcounter] == '\n'){
      size = loopcounter;
      break;
    }
    loopcounter++;
  }

  loopcounter = size;
  lastword_size = 0;

  while(loopcounter >= 0){
    if(sent[loopcounter] == ' '){
      lastword_size--;
      break;
    }
  loopcounter--;
  lastword_size++;
  }

  loopcounter = size - 1 - (lastword_size - 1);

  while(loopcounter <= size){
    printf("%c", sent[loopcounter]);
    loopcounter++;
  }

  printf("%d", lastword_size);
}

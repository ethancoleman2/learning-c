#include <stdio.h>

int main(){
  char letters[20], a, e, i, o, u;
  int loopcounter, vowels, word_size;

  loopcounter = 0;

  while(loopcounter < 20){
    scanf("%c", &letters[loopcounter]);

    if(letters[loopcounter] == '\n'){
      break;
    }
    loopcounter++;
  }

  word_size = loopcounter;
  loopcounter = 0;
  vowels = 0;

  while(loopcounter < word_size){
    if(letters[loopcounter] == 'a'){
      vowels++;
    }
    else if(letters[loopcounter] == 'e'){
      vowels++;
    }
    else if(letters[loopcounter] == 'i' ){
      vowels++;
    }
    else if(letters[loopcounter] == 'o' || letters[loopcounter] == 'O'){
      vowels++;
    }
    else if(letters[loopcounter] == 'u'){
      vowels++;
    }
    loopcounter++;
  }
    printf("There are %d vowels in your string \n", vowels);
}

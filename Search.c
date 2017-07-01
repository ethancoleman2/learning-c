#include <stdio.h>

int main(){
  char input_string[100], search_string[50];
  int sslc, islc, ss_size, is_size, branch_point, matches, word_index;

  islc = 0;

  while(islc < 100){
    scanf("%c", &input_string[islc]);
    if(input_string[islc] == '\n'){
      is_size = islc;
      break;
    }
    islc++;
  }

  sslc = 0;

  while(sslc < 50){
    scanf("%c", &search_string[sslc]);
    if(search_string[sslc] == '\n'){
      ss_size = sslc;
      break;
    }
    sslc++;
  }

  sslc = 0;
  islc = 0;
  matches = 0;

  while(islc < is_size){
    if(input_string[islc] == search_string[sslc]){
      branch_point = islc;

      while(sslc < ss_size){
        if(search_string[sslc] != input_string[islc]){
          break;
        }
        sslc++;
        islc++;
      }

      if(sslc == ss_size){
        matches++;
    }

    }
    islc++;
  }
  printf("Matches = %d \n", matches);
}

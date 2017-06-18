
#include <stdio.h>

int main(){
char letters[10], loopcounter;

loopcounter = 0;

while(loopcounter < 10){
scanf("%c", &letters[loopcounter]);
loopcounter++;
}

loopcounter = 0;

while(loopcounter < 10){
printf("%c", letters[loopcounter]);
loopcounter++;
}
}

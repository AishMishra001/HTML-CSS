#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int length ; 
  char str[100];
    gets(str);
    length=strlen(str); 
    printf("%d",length); 
    
  if(length<3){
      printf(-1); 
  }
}

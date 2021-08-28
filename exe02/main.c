//==================BIBLIOTECAS=====================
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//=================INICIO CODIGO====================
int main (){
  int i, vector[1000], s, n;
  scanf("%d", &n);
    for(i=0; i<n; i++){
      scanf("%d", &vector[i]);
    }
  s = smaller (vector, n);
 printf("O menor numero eh: %d\n", s);
  return 0;
}
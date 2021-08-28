//==================BIBLIOTECAS=====================
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//=================INICIO CODIGO====================
int main (){
  int i, vector[1000], ss, ll, n;
  scanf("%d", &n);
    for(i=0; i<n; i++){
      scanf("%d", &vector[i]);
    }
  smaller_bigger (vector, n, &ss, &ll);
 printf("O menor numero eh: %d\n", ss);
 printf("O maior numero eh: %d\n", ll);
  return 0;
}
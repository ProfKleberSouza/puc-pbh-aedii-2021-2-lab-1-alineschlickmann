
#include "functions.h"

void  smaller_bigger ( int vector [], int n, int *s, int *l){
  int i;

  *s = vector[0];
  *l = vector[1];
  for(i=0; i<n;i++){
    if(*s>vector[i])
     *s = vector[i];
    if(*l<vector[i])
     *l = vector[i];
  }
}
#include "functions.h"

int smaller (int vector [], int n){
  int i;
  int small;
   small = vector[0];
   for(i=0; i<n; i++){
    if (vector[i]<small){
      small = vector[i];
    }

  }
  
  return small;
}
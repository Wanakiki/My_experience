#include<stdio.h>
#include<stdlib.h>
int main(){
  float * p;
  p=(float*)malloc(100);
  for(int i=0;i<25;i++)
    p[i]=i+1;
  for(int i=0;i<10;i++)
    printf("%f ",p[i]);
  free(p);
}

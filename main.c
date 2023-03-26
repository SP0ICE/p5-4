#define array_size 5
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
int a[array_size]={2,3,5,7,11};
int b[array_size];
int i;
int k;
k=0;
for (i=array_size-1;i>-1;i--){
   b[k]=a[i];
   k++;}
printf("Array A: ");
for (i=0;i<array_size;i++){
   printf("%d ",a[i]);}
printf("\n");
printf("Array B: ");
for (i=0;i<array_size;i++){
   printf("%d ",b[i]);}
}

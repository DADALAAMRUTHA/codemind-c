#include<stdio.h>
#include<stdlib.h>
int main(){
   int a[50],i,j,k, count = 0, dup[50], number;
   scanf("%d",&number);
   for(i=0;i<number;i++){
      scanf("%d",&a[i]);
      dup[i] = -1;
   }
   for(i=0;i<number;i++){
      for(j = i+1; j < number; j++){
         if(a[i] == a[j]){
            for(k = j; k <number; k++){
               a[k] = a[k+1];
            }
            j--;
            number--;
         }
      }
   }
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
}
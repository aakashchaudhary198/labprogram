#include<stdio.h>
void main(){
    int x=4,y;                                      
    printf("enter number");
    scanf("%d",x);
    y=1;
    for(int i =1 ; i<=x; i++ ){
        for(int j =1 ; i<x; j++ ){
            printf("_");
        }
        for(int j =1 ; i<=i; j++ ){
            printf("*");
        }
         printf("\n");
        }
           
    }


#include<stdio.h>

int main(){
    int num,row,col;
    printf("Enter a number :");
    scanf("%d",&num);

    for(row =1;row<=num;row++){
        for(col=1;col<=num-row;col++){
                    printf(" ");
            for(col=1;col<=2*row-1; col++){
                printf("#");
                printf("\n");
            }

        }
    }
}
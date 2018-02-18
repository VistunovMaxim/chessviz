
#include<stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 8; i++){
        printf("\n");
        for (j = 1; j <= 8; j++){
            if (i % 2 == 0){
            if (j % 2 == 0){
                printf("O ");
            } else {
                printf("X ");
            }
            } else {
                if (j % 2 == 0){
                    printf("X ");
                } else {
                    printf("O ");
                }
            }
        }
    }
    printf("\n \n");
}

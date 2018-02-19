#include<stdio.h>

int main() {
    for (int i = 1; i <= 9; i++){
        if (i==1){
            printf("1 r n b q k b n r");
        }else if(i==8){
            printf("\n8 R N B Q K B N R");
        }else if(i==2){
            printf("\n2 p p p p p p p p");
        }else if(i==7){
            printf("\n7 p p p p p p p p");
        }else if(i==9){
            printf("\n  a b c d e f g h");
        }else{
            printf("\n%d", i);
        }
        
        
        
    }
    printf("\n\n");
}


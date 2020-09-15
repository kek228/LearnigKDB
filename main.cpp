#include <iostream>

void ft_putnbr(int nb){
    printf("%d\n", nb);
}

void ft_is_negative(int n){
    if(n < 0)
        printf("%s", "N");
    else
        printf("%s", "P");
}

int main(void){
    ft_is_negative(-1);
//    int i, j, k;
//    for (i = 0; i <= 9; i++) {
//        for (j = i+1; j <= 9; j++) {
//            for (k = j+1; k <= 9; k++) {
//                printf("%d%d%d\n", i, j, k);
//            }
//        }
//    }
}
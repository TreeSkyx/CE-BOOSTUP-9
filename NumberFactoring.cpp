#include <stdio.h>
int main(){
    int k,x = 2;
    scanf("%d", &k);
    while(k != 1){
        while(k % x == 0){
            printf("%d ", x);
            k = k / x;
        }
        x++;
    }
    return 0;
}


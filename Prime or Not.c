#include <stdio.h>

int main() {
    int num, flag =0;
    
    printf("Enter the Number: ");
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        if(num%2==0) {
        flag = 1;
    }
    }
        if(flag==0){
            printf("The Number %d is Prime", num);
        }
        else {
            printf("The Number %d is Not Prime", num);
        }

    return 0;
}

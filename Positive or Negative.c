#include <stdio.h>

int main() {
    int num;
    
    printf("Enter the Number: ");
    scanf("%d", &num);
    
    if(num<0){
        printf("The Number is Negative");
    }
    else if (num == 0){
        printf("Number is Zero");
    }
    else {
        printf("The Number is Positive");
    }

    return 0;
}

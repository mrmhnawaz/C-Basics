#include <stdio.h>

int main() {
    int num, rev=0, rem;
    
    printf("Enter the Number: ");
    scanf("%d", &num);
    
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    
    printf("The Reversed Number is \n%d", rev);

    return 0;
}

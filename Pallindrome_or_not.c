#include <stdio.h>

int main() {
    int num, rev=0, rem, temp;
    
    printf("Enter the Number: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0){
        rem = temp%10;
        rev = rev*10+rem;
        temp = temp/10;
    }
        if(num==rev){
            printf("The Number %d is \nPallindrome", num);
        }
        else {
            printf("The Number %d is \nNot Pallindrome", num);
        }

    return 0;
}

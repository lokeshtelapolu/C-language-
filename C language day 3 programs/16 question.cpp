#include <stdio.h>

int isPalindrome(int num);

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPalindrome(num))
        printf("%d is palindrome", num);
    else
        printf("%d is not palindrome", num);
    
    return 0;
}

int isPalindrome(int num)
{
    static int rev = 0;
    
    if (num == 0)
        return num;
    else
    {
        rev = (rev * 10) + (num % 10);
        isPalindrome(num / 10);
    }
    
    if (num == rev)
        return 1;
    else
        return 0;
}

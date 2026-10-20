/* C program to find the smallest of three numbers */
#include<stdio.h>
int main()
{
    int i1, i2, i3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &i1, &i2, &i3);
    if(i1 < i2 && i1 < i3) 
    
        printf("%d is the smallest number.", i1);
    else if(i2 < i1 && i2 < i3) 
        printf("%d is the smallest number.", i2);
    else 
        printf("%d is the smallest number.", i3);
        return 0;
}
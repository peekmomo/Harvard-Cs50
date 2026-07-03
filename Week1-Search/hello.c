#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("please input number\n");

    for (int i = 1; i <= num; i++)
    {
       for(int j=0;j<num-i;j++){
        printf(" ");
       }
       for(int m=0;m<i;m++){
         printf("*");
       }
       printf("\n");
    }
}

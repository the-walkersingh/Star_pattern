#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,j,k;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        

    }
        
    

    return 0;
}
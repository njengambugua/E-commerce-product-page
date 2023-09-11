#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string names[] = {"Bill","John","Joan","Wilfred","James","Harry","Victor"};
    for (int i = 0; i < 7; i++)
    {
        if(strcmp(names[i], "Blue") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
    
}

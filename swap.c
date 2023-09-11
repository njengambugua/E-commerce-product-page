#include<stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 0;
    int y = 1;

    printf("x: %i,\t y: %i\n", x,y);
    swap(&x,&y);
    printf("x: %i,\t y: %i\n", x,y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
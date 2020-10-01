#include<stdio.h>

int main()
{
    int i, first=0, second=1;
    for(i=0; i<6; i++)
    {
        int temp;
        printf(" %d ", first);
        temp = first + second;
        first = second;
        second = temp;
    }

    return 0;
}
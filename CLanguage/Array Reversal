#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *arr, i,a,b;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
        scanf("%d", arr + i);
    for(i=0;i<num/2;i++)
    {
        a=*(arr+i);
        *(arr+i)=*(arr+num-i-1);
        *(arr+num-i-1)=a;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

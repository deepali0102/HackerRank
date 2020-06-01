#include <stdio.h>
#include <string.h>
int main() 
{
    int n,i,j,len,temp;
    scanf("%d", &n);
    len=n*2-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            temp=i<j?i:j;
            temp=temp<len-i?temp:len-i-1;
            temp=temp<len-j-1?temp:len-j-1;
            printf("%d ",n-temp);
        }
        if(i!=n*2-1)
            printf("\n");
    }
    return 0;
}

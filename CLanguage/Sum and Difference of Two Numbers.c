#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float roundnum(float);

int main()
{
	int n,m,sum1=0,diff1=0;
    float a,b,sum2=0,diff2=0;
     scanf("%d %d", &n, &m);
     scanf("%f %f", &a, &b);
     sum1=n+m;
     sum2=a+b;
     diff1=n-m;
     diff2=a-b;
     printf("%d %d \n",sum1,diff1);
     printf("%.1f %.1f \n",sum2,diff2);
    return 0;
}


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int diff,n,min=+2147483647,count=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {   diff=abs(a[i]-a[j]);
        if(min==diff)
        {
            count++;
        }
          if(i!=j&&min>=diff)
          {
              min=diff;
              
          }
          
        }
    }
    printf("%d %d",min,count-1);
    return 0;
}
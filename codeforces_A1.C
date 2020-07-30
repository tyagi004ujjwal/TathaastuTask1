#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void sort(int *a,int n)
{   int i,j,key;
     for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
}
int main()
{
    int diff,n,min=+2147483647,count=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    sort(a,n);
    for(int i=1;i<n;i++)
    {
        diff=abs(a[i]-a[i-1]);
        if(diff==min)
        {
            count++;
        }
        if(min>=diff)
        {
            min=diff;
        }
    }
    printf("%d %d",min,count+1);
    return 0;
}
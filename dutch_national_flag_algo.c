//sort 0s,1s,2s.
#include <stdio.h>

int main()
{
    int a[10], n, i;
    int count0=0, count1=0, count2=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements (0,1,2): ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]==0)
            count0++;
        else if(a[i]==1)
            count1++;
        else
            count2++;
    }

    i=0;

    while(count0--)
        a[i++]=0;

    while(count1--)
        a[i++]=1;

    while(count2--)
        a[i++]=2;

    printf("Sorted Array:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
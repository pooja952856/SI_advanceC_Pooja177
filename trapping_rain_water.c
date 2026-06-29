// trapping rain water problem.
#include<stdio.h>

int main()
{
    int h[]={3,0,2,0,4};
    int n=5;
    int left,right,water=0,i,j;

    for(i=1;i<n-1;i++)
    {
        left=h[i];

        for(j=0;j<i;j++)
            if(h[j]>left)
                left=h[j];

        right=h[i];

        for(j=i+1;j<n;j++)
            if(h[j]>right)
                right=h[j];

        water+=(left<right?left:right)-h[i];
    }

    printf("Water = %d",water);

    return 0;
}
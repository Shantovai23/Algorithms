#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    printf("array size\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n descending order \n:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}

#include<stdio.h>
int merge_sort(int arr[],int lb,int ub)
{
       int mid=0;
    if(lb<ub)
    {

        mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,ub,mid);
    }
}
 void merge(int arr[],int lb,int ub,int mid)
{
    int b[100];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid&&j<=ub)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
        else
        {
            while(i<=mid)
            {
                b[k]=arr[i];
                i++,k++;
            }
        }

    for(int k=lb;k<=ub;k++)
    {
        arr[k]=b[k];
    }
}
int main()
{
    int arr[100];
    int n;
    printf("enter numbers in array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int lb=0,ub=n-1;

    merge_sort(arr,lb,ub);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

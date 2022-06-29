#include<stdio.h>
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
int partition(int arr[],int p,int q)
{
    int i;
    int x;
    x=arr[p];
    i=p;
    for(int j=p+1;j<=q;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[p],arr[i]);
        return i;
}
 int quick_sort(int arr[],int lb,int ub)
{
    int m=0;
    if(lb==ub)
    return(arr[lb]);
    else
    {
       m= partition(arr,lb,ub);
       quick_sort(arr,lb,m-1);
       quick_sort(arr,m+1,ub);
    }
}
int main()
{

    int arr[100];
    int n;
    printf("enter the total number of elements in array");
    scanf("%d",&n);
     int lb=0;
    int ub=n-1;
    printf("enter your elements:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    quick_sort(arr,lb,ub);
    printf("your sorted array is:");
    for(int j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }

}

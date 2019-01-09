#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[23],i,l,x,q,h,n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter %d elements in nondecreasing order\n",n);
    for(i=0;i<n;i++)
    {
                   scanf("%d",&a[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&x);
    l=0;
    h=n-1;
    q=Binsrch(a,l,h,x);
    if(q>=l&&q<=h)
               printf("element %d in array is at index %d ",x,q);
    else
               printf("number is not present in the list\n");
    return 0;
}
int Binsrch(int a[],int l,int h,int x)
{
               int mid;
               if(l==h)
               {
                              if(x==a[l])
                                             return l;
                              else
                                             return 999;
               }
               else
               {
                              mid=(l+h)/2;
                              if(x==a[mid])
                                             return mid;
                              else if(x<a[mid])
                                             return Binsrch(a,l,mid-1,x);
                              else
                                 return Binsrch(a,mid+1,h,x);



               }

}

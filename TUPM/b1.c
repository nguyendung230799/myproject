#include<stdio.h>

void main()
{
    int i,s=0,n;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            s=s+i*i;
        }
    }
    printf("Tong binh phuong cac so le be hon %d la: %d",n,s);

}    
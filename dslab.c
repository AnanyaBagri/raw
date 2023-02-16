#include<stdio.h>
#define MAX 10
main()
{
    int a[MAX],i,n,ch;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ch=ap(a,n);
    if(ch==1)
        printf("It is an ap series");
    else
        printf("It is not an ap series");
}
ap(int a[],int n){
int i,k=0,d;
d=a[1]-a[0];
for(i=1;i<n;i++){
    if(a[i+1]-a[i]==d)
        k++;
    else
        break;
}
if(k==n-2)
    return 1;
else
    return 0;
}

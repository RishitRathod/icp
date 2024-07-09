#include<stdio.h>
void main() {
    int n,i,j,a,x=0,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            scanf("%d",&y);
            if(y>=1000)
            x++;
        }
        printf("%d",x);
}
}


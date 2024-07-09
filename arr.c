#include<stdio.h>

int main() {
    int n[50],j,d=0,i;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<i;j++)
    {
      d=d+n[i];
    }
    printf("%d",d);
    return 0;
}

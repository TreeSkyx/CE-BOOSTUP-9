#include<stdio.h>
int main() 
{
    int m,n,ans;
    scanf("%d %d",&m,&n);
    if (m == 0 && n >= 0)
    printf("%d",0);
    else{
    ans = (m*n)-n;
    printf("%d",ans);
    }
    return 0;
}

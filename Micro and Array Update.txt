#include <stdio.h>
 
int main()
{
    int t,n,i,c=0,k,max=0;
    scanf("%d",&t);
    while(t--)
    {
       	k=0;n=0;max=0; 
        scanf("%d%d",&n,&k);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<k)
            {
                c=k-a[i];
                if(c>=max)
                    max=c;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
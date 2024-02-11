#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int n[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }
   // int m;
    //scanf("%d",&m);
     int cnt[7]={0};
     for(int i=0;i<x;i++)
     {
         //int value=n[i];
         cnt[n[i]]++;

     }
     for(int i=0;i<7;i++)
     {
         printf("%d = %d\n",i,cnt[n[i]]);
     }
}

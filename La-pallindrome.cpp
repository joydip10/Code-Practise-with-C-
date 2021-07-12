
#include<stdio.h>
#include<string.h>
int main()
{
char s[1002],c;
int i,j,k,t,l,mid0,mid1,cnt1,cnt0,flag;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
 scanf("%s",s);
 l=strlen(s);;
 mid0=l/2;
     if(l%2==0)
      mid1=mid0;
      else mid1=mid0+1;
  j=0;
  while(j!=mid0)
  { c=s[j++];
    cnt0=0; cnt1=0;
    k=0;
   while(k!=mid0)
     {if(s[k++]==c)
      cnt0++;}
   k=mid1;
    while(k!=l+1)
   { if (s[k++]==c)
       cnt1++;}
  if (cnt0!=cnt1)
    {    flag=0;
    break;  }
    else flag=1;
    }
  if (flag==0)
   printf("NO\n");
   else printf("YES\n");
  }
  return 0;
}

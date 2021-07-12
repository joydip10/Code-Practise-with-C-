#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int arr[1000];
    while(scanf("%d",&n) != EOF)
    {
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        for(int j=0;j<n;j++)
        {

            if((arr[j+1]-arr[j])== (arr[j+2]-arr[j+1]))
            {
               printf("yes\n");
                break;
            }
            else
            {
                printf("no\n");
                break;
            }

        }
    }
    return 0;
}

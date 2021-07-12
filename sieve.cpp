#include<iostream>
#include<math.h>
using namespace std;

bool status[1100002];
void sieve(int N)
{
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;

}

int main()
{
    int n=562;
    sieve(n);
    for(int i=1;i<=562;i++)
    {
        if(status[i]==0)
        {
            cout<<i<<endl;
        }
    }
}

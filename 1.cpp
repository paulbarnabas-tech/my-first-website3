#include<iostream>
using namespace std;
int main()
{	int n,i;
	float p,sum;
	n=100,sum=0,i=1;
	while(i<=n)
	{p=1.0/i;
	sum=sum+p;
	i++;
	}
	cout<<sum<<endl;
	return 0;
}
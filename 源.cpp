# define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"

int main()
{

	int x;                                                                             
	scanf("%d",&x);
	long long* en = new long long[x];
	int* sn = new int[x];
	int* kn = new int[x];
	for (int i = 0; i < x; i++)
	{
		scanf("%lld %d %d",&en[i],&sn[i],&kn[i]);
	}
	int n;
	scanf("%d",&n);
	int* pn = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &pn[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (pn[i] == sn[j])printf("%lld %d\n",en[j],kn[j]);
		}
	}

	return 0;

}
#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n, k, t, j;
	j = 0;
        scanf("%d %d", &n,&k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		if(t%k==0)
		{
			j++;
		}
	}
	printf("%d\n", j);
}

#include <cstdio>

using namespace std;

int main()
{
	int t;
	int o = 1;

	scanf("%d", &t);

	for(int i=0; i<t; i++)
	{
		int n;
		unsigned long long int o = 1;
		scanf("%d", &n);
		for(int j=1; j<=n; j++)
		{
			o = o * j;
		}
		printf("%d\n", o);
	}
	return 0;
}

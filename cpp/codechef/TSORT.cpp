#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	int N[t];

	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &N[i]);
	}

	for (int i = 1; i < t; i++)
	{
		if (N[i]>=N[i-1])
		{
			int temp;
			temp = N[i];

		}
	}
	return 0;
}

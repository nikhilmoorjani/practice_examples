using namespace std;
#include <iostream>
#include <conio.h>

const int MAX = 9999;

int min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}

int minimumJumps(int arr[], int n)
{
	int *noofjumps = new int[n+1];  // jumps[n-1] will hold the result
	int *previouspos = new int[n + 1];
	int *result = new int[n];

	int i, j, k, index, value;

	for (i = 0; i < n+1; i++)
	{
		noofjumps[i] = MAX;
		previouspos[i] = -1;
	}
		
	if (n == 0 || arr[0] == 0)
		return MAX;

	noofjumps[0] = 0;	
	
	// noofjumps[i] represent minimum number of jumps required to reach i from arr[0]

	for (i = 1; i <= n; i++)
	{
		noofjumps[i] = MAX;

		for (j = 0; j < i; j++)
		{
			if (i <= j + arr[j] && noofjumps[j] != MAX)
			{
				noofjumps[i] = min(noofjumps[i], noofjumps[j] + 1);
				if (noofjumps[i] >= (noofjumps[j] + 1))
					previouspos[i] = j;
				break;
			}
		}
	}



	i = n;
	k = 0;
	while (i != 0)
	{
		
			index = previouspos[i];
			if (index == -1)
				break;

			value = arr[index];
			result[k++] = value;
			i = index;
	}
	

	cout << "\n";
	if (index!=-1)
	{
		cout << result[k - 1];
		for (i = k - 2; i >= 0; i--)
			cout << "," << result[i];

	}


	return noofjumps[n];	//returns minimum number of jumps required to go out of array bounds from arr[0]
}

int main()
{
	int arr[] = { 0, 3, 0, 0, 1, 9 };
	int size = sizeof(arr) / sizeof(int);

	cout << "\nMinimum number of jumps : " << minimumJumps(arr, size);

	_getch();
	return 0;
}
#include <iostream>

using namespace std;

int arr[100000];

int main()
{
	int n, k, x;
	
	cin >> n;
	
	cin >> k;
	
	for (int i = 0; i < n; i++)
		
		cin >> arr[i];
		
	for (int h = 0; h < k; h++)
	{
		cin >> x;
		
		int left = 0;
		
		int right = n;
		
		while (left < right)
		{
			int middle = left + (right - left) / 2;
			
			if (arr[middle] >= x)
				
				right = middle;
				
			else
				
				left = middle + 1;
		}

		if ((left < n) && (arr[left] == x))
			
			cout << "YES" << endl;
			
		else
			
			cout << "NO" << endl;
	}
	
	return 0;
	
}
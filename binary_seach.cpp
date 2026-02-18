#include <vector>
#include <iostream>
using namespace std;
// divide and conquor to find the target(basic binary search
int binary_search(vector<int>& arr , int target)
{
	int left = 0;
	int right = arr.size()-1;

	cout << "Initially:\n left = " << left << " right = " << right << endl;

	while(left <= right)
	{
		int mid = left + (right-left)/2; // prevents overflow
		cout << "Mid index = " << mid  << " Mid value = " << arr[mid] << endl;

		if(arr[mid] == target)
		{
			return target;
		}	// found the target
		else if(arr[mid] < target)
		{
			cout << "Target > arr[mid]" << "So shift lift ahead\n" << "Left = " << mid+1 << endl;
			left = mid+1;  // element greater than middle so ahead
		}
		else
		{
			cout << "Target > arr[mid]" << "So shift right back\n" << "Right = " << mid-1 << endl;
			right = mid-1;
		}
	}
	return -1; // element not found
}
int main()
	{
		int n;
		cout << "Enter number of elements" << endl;
		cin >> n;
		cout << "Enter elments: " << endl;
		vector<int> arr;
		for(int i = 0;i<n;i++)
		{
			int r;
			cin >> r;
			arr.push_back(r);
		}
		int target;
		cout << "Enter target: " << endl;
	        cin >> target;
	        int result = binary_search(arr,target);
	        cout << "Found Element = " << target << " at position " << result << endl;	
		return 0;
	}

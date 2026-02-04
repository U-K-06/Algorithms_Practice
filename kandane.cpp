#include <vector>
#include <iostream>
using namespace std;
int findMaxSubArraySumKandane(vector<int> nums)
{
	int current_sum = nums[0];
	int result = nums[0];
	for(int i = 1;i<nums.size();i++)
	{
		cout << "Current array Element = " << nums[i] <<  endl;
		cout << "Current_sum = " << current_sum << " and result = " << result << endl;
		cout << "current_sum + nums[i] = " <<  current_sum + nums[i] << endl;
		cout << ((current_sum+nums[i]<nums[i])?"START OVER":"WE ADD TO CURRENT")<< endl;
		current_sum = (current_sum+nums[i]<nums[i])?nums[i]:current_sum+nums[i];
		cout <<"result<currentsum = " << (result < current_sum) << endl;
		result = (result<current_sum)?current_sum:result;
		cout  << "----------------------------------------------------------------------------------------------" << endl;
	}
	return result;

}


int main()
{
	int n;
	cout << "Enter number of elements in array[INT]:" << endl;
	cin >> n;
	vector<int> arr(n);
	cout <<  "Enter Elements:" << endl;
	for(int i = 0;i<n;i++)
	{
		cin >> arr[i];
	}
	int result = findMaxSubArraySumKandane(arr);
	cout << "FINAL RESULT: " << result << endl;
	return 0;

}	

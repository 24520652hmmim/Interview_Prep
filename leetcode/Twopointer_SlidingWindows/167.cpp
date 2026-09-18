#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = numbers[left] + numbers[right];
        if (sum == target)
        {
            return {left + 1, right + 1};
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return {};
}
int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(numbers, target);
    cout << "[" << ans[0] << ", " << ans[1] << "]";

    return 0;
}

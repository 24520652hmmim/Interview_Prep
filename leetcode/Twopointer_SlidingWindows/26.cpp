#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int left = 0;

    for (int right = 1; right < nums.size(); right++)
    {
        if (nums[left] != nums[right])
        {
            left++;
            nums[left] = nums[right];
        }
    }

    return left + 1;
}

int main()
{
    vector<int> nums = {1, 1, 2};

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;

    cout << "nums = [";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i];

        if (i < k - 1)
        {
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}

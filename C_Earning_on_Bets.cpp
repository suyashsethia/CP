class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int n = nums.size();
        int first = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                first = i;
                break;
            }
        }
        if (first == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int smallest_less_first = INT_MAX;
        int smallest_index = -1;
        for (int i = first; i < n; i++)
        {
            if (nums[i] < nums[first] && nums[i] < smallest_less_first)
            {
                smallest_less_first = nums[i];
                smallest_index = i;
            }
        }
        if (smallest_index != -1)
        {
            swap(first, smallest_index);
            reverse(nums.begin() + first + 1, nums.end());
        }
        else
        {
            reverse(nums.begin() + first, nums.end());
        }
    }
};

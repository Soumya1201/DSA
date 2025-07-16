void merge(vector<int>& nums, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int>ls;
    while(left <= mid && right <= high)
    {
        if(nums[left] <= nums[right])
        {
            ls.push_back(nums[left]);
            left++;
        }
        else 
        {
            ls.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        ls.push_back(nums[left]);
        left++;
    }
    while(right <= high)
    {
        ls.push_back(nums[right]);
        right++;
    }
    for(int i = low; i<=high; i++)
    {
        nums[i] = ls[i-low];
    }
}
int countPairs(vector<int>& nums, int low, int mid, int high)
{
    int right = mid + 1;
    int count = 0;
    for(int i = low; i<=mid; i++)
    {
        while(right <= high && nums[i] > 2LL * nums[right]) right++;
        count += (right - (mid + 1));
    }
    return count;
}

int mergeSort(vector<int>&nums, int low, int high)
{
    int count = 0;
    if(low >= high) return count;
    int mid = low + (high - low) / 2;
    count += mergeSort(nums, low, mid);
    count += mergeSort(nums, mid + 1, high);
    count += countPairs(nums, low , mid, high);
    merge(nums, low, mid, high);

    return count;
}
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
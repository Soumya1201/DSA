class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;

        // int officer = 0;
        // int res = 1;
        // int cm = 1;

        // while(cm < n)
        // {
        //     if(nums[cm] == nums[cm - 1])
        //     {
        //         cm++;
        //         continue;
        //     }
        //     nums[officer + 1] = nums[cm];
        //     officer++;
        //     res++;
        //     cm++;
        // }   
        // return res;


        int index = 1;
        // int res = 1;
        for(int i = 1; i<n; i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[index++] = nums[i];
            }
        }
        return index;
    }
}
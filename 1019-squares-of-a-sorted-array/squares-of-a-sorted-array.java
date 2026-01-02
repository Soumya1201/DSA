class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;

        ArrayList<Integer> neg = new ArrayList<>();
        ArrayList<Integer> pos = new ArrayList<>();

        int[] res = new int[n];

        for(int num : nums)
        {
            if(num < 0) neg.add(num * num);
            else pos.add(num * num);
        }

        Collections.reverse(neg);

            int i = 0, j = 0;
            int index = 0;
            while(i < pos.size() && j < neg.size())
            {
                if(pos.get(i) <= neg.get(j))
                {
                    res[index++] = pos.get(i);
                    i++;
                }
                else
                {
                    res[index++] = neg.get(j);
                    j++;
                }
            }

            while(i < pos.size())
            {
                res[index++] = pos.get(i);
                i++;   
            }

            while(j < neg.size())
            {
                res[index++] = neg.get(j);
                j++;   
            }
        
        return res;
    }
}
class Solution {
public:
    //if descending order number, then next perm not possible
    //thus we find the first dip from the right
    //swap out the dipping number with the next greater from the rightmost side.
    //right is priority because we want literally the next number only.
    void nextPermutation(vector<int>& nums) {
        int flag=0;
        int dip=0;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                flag=1;
                dip=i-1;
                break;
            }
        }
        
        if(flag==0) //totally in non-increasing order
        {
            sort(nums.begin(),nums.end());
            return;
        }
        
        int nextbig=dip+1;
        
        for(int i=nums.size()-1;i>=dip+1;i--)
        {
            if(nums[i]>nums[dip])
            {
                nextbig=i;
                break;
            }
        }
        
        swap(nums[nextbig],nums[dip]);
        reverse(nums.begin()+dip+1,nums.end()); //this is basically sorting the right most part to make the number even smaller after swapping.
    
    }
};
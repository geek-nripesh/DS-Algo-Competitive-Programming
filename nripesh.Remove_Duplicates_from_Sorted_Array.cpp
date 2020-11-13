class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int l=0;
    if(nums.size()==0)
          return 0;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]!=nums[i+1]){
            nums[l]=nums[i];
            l+=1;
        }
    }
    nums[l]=nums[nums.size()-1];
    return (l+1);      
}
};

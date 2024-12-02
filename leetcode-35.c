int searchInsert(int* nums, int numsSize, int target)
{
    int r;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
         return i;
        }
        else if(target>nums[i])
        {
            r=i+1;
        }     
    }
    return index;
}

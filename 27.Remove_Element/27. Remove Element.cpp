int removeElement(int* nums, int numsSize, int val) 
{
    int count = 0; // Initialize count variable to determine the numsSize without val in nums
    for(int i = 0; i < numsSize; i++) // for one pointer approach
	{ 
        if(nums[i] != val)// To check the condition if number in nums is not equal to given val 
		{ 
            nums[count++] = nums[i]; // Keeping elements not equal to val
        }
    }
    return count;
}


/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 

Constraints:

1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is an ascending array that is possibly rotated.
-104 <= target <= 104
*/
public class Solution {
    public int Search(int[] nums, int target) {

        int left = 0;
        int right = nums.Length -1 ;
        int endVal = nums[right];
        int mid = left + (right -left);

        Console.WriteLine( $"left is: {left} ");
        Console.WriteLine( $"right is: {right}");
        //Console.WriteLine( $"end val is: {endVal}");

        //first we will address edge cases

        if(nums[left] == target){
            return left;
        }
        if(nums[mid] == target){
            return mid;
        }
        if(nums[right] ==target){
            return right;
        }

        bool searchLeft = false;
        bool pivotRight = false;
        //first find the pivot point

            //if the midpoint is more than the last index, the pivot is on the right
            // this means the indices to the left side of the midpoint is sorted
            if(nums[mid] > nums[right]){
                pivotRight = true;
                if((target >= nums[left]) && (target < nums[mid])){
                    // if the target is inbetween the midpoint and first index we can search for target there
                    searchLeft = true;
                }
            }

            //search left of midpoint, left of midpoint is ordered
            if(searchLeft && pivotRight){
                right = mid;
                while(left < right){
                    mid = left + (right -left);
                    if(target == nums[mid]){
                        return mid;
                    }
                    if(target > nums[mid]){
                        left = mid + 1;
                    }
                    if(target < nums[mid]){
                        right = mid -1;
                    }
                    if(target == nums[right]){
                        return right;
                    }
                    if(target == nums[left]){
                        return left;
                    }
                }
            }

            //search right, right of midpoint is ordered
             if((!searchLeft) && (!pivotRight)){
                left = mid;
                while(left < right){
                    mid = left + (right -left);
                    if(target == nums[mid]){
                        return mid;
                    }
                    if(target > nums[mid]){
                        left = mid + 1;
                    }
                    if(target < nums[mid]){
                        right = mid -1;
                    }
                    if(target == nums[right]){
                        return right;
                    }
                    if(target == nums[left]){
                        return left;
                    }
                }
            }
            /* if the target hasn't been returned yet it's either not in the array or 

                pivot on left, search left
                pivot on right and search right

                */



        return -1;
    }
}
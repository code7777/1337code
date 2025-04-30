/*

DOESN'T PASS SOME EDGE CASES 

#include <iostream>
#include <vector>
#include <algorithm>  // For std::rotate
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            vector<int>::iterator ptr1 = nums.begin();
            vector<int>::iterator ptr2 = nums.end();

            while (ptr1 < ptr2) {
            std::cout << "ptr1 " << *ptr1 << " " << std::endl;

            if(*ptr1 == 0){
                rotate(ptr1, ptr1 +1, ptr2);
            }
                for (int num : nums) {
                    cout << num << " ";
                }
            ptr2--;
            if(*ptr1 != 0){
                ptr1 ++;
            }
 
           
        }
    }
   
};

*/

/* PASSES (could have been the for loop slowed it down too much for large edge cases tbh )*/

#include <iostream>
#include <vector>
#include <algorithm>  // For std::rotate
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         
         int i = 0;
         int len = nums.size();
         int j = len-1;

        if(len > 2){
         while(i < j){
            
                if(nums[i]==0){
                    std::rotate(nums.begin() + i, nums.begin() + i + 1, nums.begin() + j + 1);

                    j--;
                }
                if(nums[i]!=0){
                    i ++;
                }
            }
           
         }

        if (len <3){
            if((nums[i]==0)&& (nums[j]!=0)){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
           
        }//end move zeros
    
   
};


/*wrong answer*/

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


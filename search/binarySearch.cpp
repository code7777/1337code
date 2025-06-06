class Solution {
    public:
        int search(vector<int>& nums, int target) {
            
                /*
                bool isOdd = false;
                int medien = 0;
                int len = nums.size();
                if(( len %2 ) != 0){
                    isOdd = true;
                    std:: cout << "isOdd is " << isOdd << std::endl;
                }
                if(isOdd){
                    medien = ((size -1)/2)+1; //the true medien is still size/2 but 
                    // we are flooring it to a whole number 
                    /* if target > medien
                    then see if target is 3/4 (in between medien and end)
                    if target < medien 
                    then see if target is 1/4 in between medien and end  
                    repeat midpoint of nodes until u find target
                        
                        
                }
                else {
                    medien = size/2;
                }
                
            }*/


        //actual solution 

        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
        }
    };
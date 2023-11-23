class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        
        //odd
        if(len %2 == 1){
            
            int half = (len-1)/2 ;
            char temp;
            
            for(int i = 0; i < half; i++){
                temp = s[i];
                s[i] = s[s.size()- i-1];
                s[s.size()- i -1] = temp;
            }
            
        }
        
        //even
        if(len %2 != 1){
            
            int half = (len)/2 ;
            char temp;
            
            for(int i = 0; i < half; i++){

                temp = s[i];
                s[i] = s[s.size()- i-1];
                s[s.size()- i -1] = temp;
            }
            
        }
    }
};
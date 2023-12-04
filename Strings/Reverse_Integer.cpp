
/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

Example 3:

Input: x = 120
Output: 21

Constraints:

    -2^31 <= x <= 2^31 - 1

*/
#include <typeinfo>
#include <iostream>

#include <string> // header file for string
#include <cmath>
#include <climits> 
#include <limits.h>
#include <limits>
#include <stdlib.h>  


class Solution {
public:
    int reverse(int x) {
         /*
        //stringstream  string_object_name;

        //string_object_name << x;
        //string_object_name >> mystring;
        //cout << mystring << endl; 
        //cout << typeid(mystring).name() << endl;
        //mystring = to_string(x);
        //  -2^31 <= x <= 2^31 - 1
       
            long value = Long.parseLong(inputString);
        if (value < Integer.MAX_VALUE && value > Integer.MIN_VALUE)
        */
        long y = (long long)x;
        int upper_bound = 2147483647;
        int lower_bound = -2147483648; 
        string result = "";
        bool negative = false;
        //cout << upper_bound << endl;
        //cout << lower_bound << endl;
        cout << y;
        
        if( y < lower_bound || y > upper_bound ){
            return 0;
        }
        string mystring;
        mystring = to_string(x);
        cout << " my string is " << mystring << endl;
        int l = mystring.length();
        
        if ( x < 0){
            l = l-1;
            negative = true;
        }
        
        cout << "length of string is " << l << endl;
        int ans[l+1];
        for(int i = 1; i < l+1; i++){
            ans[0+ i -1 ]= x % 10;
            cout <<  ans[0+ i -1 ] << endl;
            result += to_string(abs(ans[0+ i -1 ]));
            cout << result << endl;
            x /= 10;
        }
    
        
        int fin_ans;

        try {
        fin_ans = stoi(result);
        }catch (const std::out_of_range& e) {
        return 0; // Return 0 in case of overflow
        }

        cout << "ans is " <<  fin_ans << endl;
         if (negative == true ){
         fin_ans = -fin_ans;   
        }
        
        //cout << "String representation of num1: " << mystring << '\n';
        return fin_ans;
    }
};
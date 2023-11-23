#include <typeinfo>
#include <iostream>

#include <string> // header file for string
#include <cmath>
#include <climits> 
#include <limits.h>
#include <limits>

class Solution {
public:
    int reverse(int x) {
        //stringstream  string_object_name;

        //string_object_name << x;
        //string_object_name >> mystring;
        //cout << mystring << endl; 
        //cout << typeid(mystring).name() << endl;
        //mystring = to_string(x);
        //  -2^31 <= x <= 2^31 - 1
        /*
            long value = Long.parseLong(inputString);
        if (value < Integer.MAX_VALUE && value > Integer.MIN_VALUE)
        */
        long y = (long long)x;
        int upper_bound = 2147483647;
        int lower_bound = -2147483648; 
        cout << upper_bound;
        cout << lower_bound;
        
        if( y < lower_bound || y > upper_bound ){
            return 0;
        }
        string mystring;
        mystring = to_string(x);
        cout << " my string is " << mystring << endl;
        int l = mystring.length();
        // create a new array of chars to copy to (+1 for a null terminator) 
        char* char_array = new char[l + 1]; 
           // make sure that the new string is null terminated 
        char_array[l] = '\0'; 
        if(x<0){
        
            for (int i = 0; i <l; i++) 
            { 
                char_array[i] = mystring[l -1 - i]; 
            } 
            
        }
        
        if(l == 10){
        
            for (int i = 0; i <l; i++) 
            { 
                char_array[i] = mystring[l - i]; 
            } 
            
        }
        
        int ans = atoi(char_array);
         if (x<0){
         ans = -ans;   
        }
        
        //cout << "String representation of num1: " << mystring << '\n';
        return ans;
    }
};
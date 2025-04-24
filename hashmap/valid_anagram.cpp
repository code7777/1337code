// 4/24/2025

/* Wrong Version

#include <iostream>
#include <unordered_set>
#include <set>
#include <string>

class Solution {
public:
    bool isAnagram(string s, string t) {
         std::string inputS = s;
         std::string inputT = t;
         std::set<char> setS;
         std::set<char> setT;

        for (char c : inputS) {
                setS.insert(c);
        }

        for (char c : inputT) {
                setT.insert(c);
        }

        std::cout << "Characters in the setS: ";
        for (char c : setS) {
            std::cout << c << ' ';
        }
        std::cout << std::endl;

        std::cout << "Characters in the setT: ";
        for (char c : setT) {
            std::cout << c << ' ';
        }
        std::cout << std::endl;

    if(setS == setT){
    return true ;
    }
    else{
        return false;
    }

    }
};

*/


/* Right Version Below */

#include <iostream>
#include <unordered_set>
#include <set>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
         std::string inputS = s;
         std::string inputT = t;
         std::unordered_map<char, int> charMapT;
         std::unordered_map<char, int> charMapS;

        for (char c : inputS) {
                charMapS[c]++;
        }

        for (char c : inputT) {
                charMapT[c]++;
        }

        std::cout << "Characters in the charMapS: ";
        for (const auto& pair : charMapS) {
            std::cout << pair.first << ": " << pair.second << "\n";
        }
        std::cout << std::endl;

        std::cout << "Characters in the charMapT: ";
        for (const auto& pair : charMapT) {
            std::cout << pair.first << ": " << pair.second << "\n";
        }
        std::cout << std::endl;


        if (charMapT == charMapS) {
            return true;
        } else {
            return false;
        }
    }
};
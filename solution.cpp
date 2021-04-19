//Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

//The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

//You may assume the integer does not contain any leading zero, except the number 0 itself.

//link : https://leetcode.com/problems/plus-one/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            if(digits[i] != 9)
            {
                digits[i] += 1;
                return digits;
            }
            else
                digits[i] = 0;
            
        }
        auto it = digits.begin();
        it = digits.insert(it, 1);
        return digits;
    }
};
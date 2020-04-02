// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int squareSum(int n) 
    { 
        int sum = 0; 
        while (n) 
        { 
            sum += (n % 10) * (n % 10); 
            n /= 10; 
        } 
        return sum; 
    }
    bool isHappy(int n) {
        int slow, fast; 
        slow = fast = n; 
        do
        { 
            slow = squareSum(slow); 
            fast = squareSum(squareSum(fast)); 
        } 
        while (slow != fast); 
        return (slow == 1); 
    }

int main(){

    return 0;
}
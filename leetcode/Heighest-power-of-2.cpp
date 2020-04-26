// C++ program to find highest power of 2 smaller than or equal to n. 
#include<bits/stdc++.h> 
using namespace std; 

int highestPowerof2(int n) 
{ 
    // Invalid input 
    if (n < 1) 
        return 0; 
    // Try all powers starting from 2^1 
    int temp, i=0;
    while(1){
        temp = pow(2,i);
        if(temp>n)return --i;
        i++;
    }
} 
  
int main() 
{ 
    int n = 2147483647; 
    cout << highestPowerof2(n); 
    return 0; 
} 
class Solution {
public:

    // Using Bit logic
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        return !(n&(n-1));        
    }

    // Using power logic
    bool isPowerOfTwo(int n) {
        int i=1;
        long long ptr = 1;
        if(n%2!=0 && n!=1)return false;
        while(ptr<n){
            ptr = pow(2,i++);
        }
        if(ptr==n) return true;
        return false;      
    }
};
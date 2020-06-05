#define fo(i, n) for(i=0; i<n; i++)
class Solution {
public:
    vector<int> prefixSum;
    Solution(vector<int>& w) {
        int i, n=w.size();
        fo(i,n){
            (i==0) ? prefixSum.push_back(w[i]) : prefixSum.push_back(w[i] + prefixSum[i-1]);
        }
    }
    // Linear Search Based 
    int pickIndex() {
        int i,low = 0,  n = prefixSum.size();
        int r = rand() % prefixSum[n-1];
        fo(i,n){
            if(prefixSum[i]>r) return i;
        }
        return n;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
#define fo(i, n) for(i=0; i<n; i++)
class Solution {
public:
        
    int change(int amount, vector<int>& coins) {
        int i,j,n=coins.size();
        if(amount==0) return 1;
        if(amount<0) return 0;
        if(amount>0 && n==0) return 0;
        int dp[amount+1][n];
        fo(i,n){
            dp[0][i]=1;
        }
        for(i=1;i<amount+1;i++){
            fo(j,n){
                
                // Case 1 count with coin[j]
                int x = (i-coins[j] >= 0)? dp[i-coins[j]][j] : 0;
                
                // Case 2 count without coin[j]
                int y = (j > 0)? dp[i][j-1] : 0;
                
                dp[i][j] = x+y;
                
            }
        }
        return dp[amount][n-1];
    }
};
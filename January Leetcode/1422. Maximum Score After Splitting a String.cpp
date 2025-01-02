class Solution {
public:
    int maxScore(string str) {
        long ans = 0;
        int n = str.size();

        for(int i = 0 ; i < n - 1; i++) {
            long count = 0;
            
            // Count the '0's up to the i-th index
            for(int j = 0; j <= i; j++) { 
                if(str[j] == '0') {
                    count++;
                }
            }
            long one_count = 0;  
            
            // Count the '1's from i+1 to the end of the string
            for(int j = i + 1; j < n; j++) {
                if(str[j] == '1') {
                    one_count++;
                }
            }
            
            // Calculate total score at current index split
            long total = count + one_count;
            ans = max(ans, total);
        }
        
        return ans; 
    }
};

class Solution {
public:
    int longestDecomposition(string text) {
        long long lh = 0LL, rh = 0LL, powers=1LL, MOD = 1000000007LL;
        int l =0, r = text.size()-1;
        int ans =0;
        while(l<r){
            lh = (lh*26LL + text[l++]-'a'+1) % MOD;
            rh = (rh + (text[r--]-'a'+1)*powers% MOD )% MOD;
            if(lh == rh){
                ans +=2;
                powers = 1;
                lh = rh =0LL;
            }
            else
                powers = (powers*26LL) % MOD;
        }
        if(l==r || powers > 1)
            return ans+1;
        return ans;
    }
};
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        // int maxlen = 0;
        // for(int i=0; i<n; i++){
        //     unordered_map<int, int> mpp;
        //     for(int j=i; j<n; j++){
        //         mpp[fruits[j]]++;
        //         if(mpp.size() > 2){
        //             break;
        //         }
        //         maxlen = max(maxlen, j-i+1);
        //     }
        // }
        // return maxlen;

        int l = 0, r= 0, res = 0;
        unordered_map<int, int> mp;

        while (r < n)
        {
            mp[fruits[r]]++;

            while (mp.size() > 2)
            {
                mp[fruits[l]]--;

                if (mp[fruits[l]] == 0)
                    mp.erase(fruits[l]);

                l++;
            }

            res = max(res, r - l + 1);
            r++;
        }

        return res;
    }
};
    
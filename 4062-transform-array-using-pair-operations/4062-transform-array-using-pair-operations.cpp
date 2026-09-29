class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        // int delta = 0;
        // for(int i=0; i<source.size(); i++){
        //     for(int j=0; j<source.size(); j++){
        //         source[j] = delta;
        //         source[i] = source[i] + source[j] - delta;
        //         if(sum(source) != sum(target)) return false;
        //     }
        // }
        // return false;
        long long sum_source = 0, sum_target = 0;
        for(auto it : source) sum_source += it;
        for(auto it : target) sum_target += it;
        if(sum_source != sum_target) return false;
        return true;
    }
};
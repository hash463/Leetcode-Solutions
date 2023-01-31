class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto it=nums.begin();
        while(it!=nums.end()){
            if(*it==*(it+1)) return *it;
            else it=it+1;
        }
        return 0;
    }
};

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

/*--------------------------------------OR--------------------------------------*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=nums[0];
        int slow=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(fast!=slow);
        fast=nums[0];
        while(fast!=slow){
        fast=nums[fast];
        slow=nums[slow];
        }
        return slow;
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

/*--------------------------OR--------------------------*/

class Solution {
public:
    void sortColors(vector<int>& v) {
        int low=0,mid=0;
        int high=v.size()-1;
        while(high>=mid){
            switch(v[mid]){
                case 0: swap(v[low++],v[mid++]);
                break;
                case 1: mid++;
                break;
                case 2: swap(v[mid], v[high--]);
                break;
            }
        }
    }
};

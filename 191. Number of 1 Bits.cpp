class Solution {
public:
    int hammingWeight(uint32_t n) {
        long long int i,count=0;
        double r;
        while(n!=0){
            n=n&n-1;
            count++;
        }
        return count;
    }
};

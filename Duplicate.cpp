//first Approchj using brute Force 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;

        for ( int i = 0 ; i < nums.size() ; i++) {



            for ( int j = i+1 ; j < nums.size() ; j++) {


                if( nums[i] == nums[j]) {
                    ans = true;
                }
            }



        }
        return ans;
        
    }
};

//Time Limit Exceed

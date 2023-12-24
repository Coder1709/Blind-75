//Brute-force Solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector <int> ans;

        for ( int i = 0 ; i < nums.size()-1 ; i++) {

            for(int j =  i+1 ; j < nums.size() ; j++) {


                if( nums[i] + nums[j] == target){
                    
                    ans.push_back(i);
                    ans.push_back(j);

                    
                }


            }
        }
        return ans;
        
    }
};



//using binary search( works with only Sorted array)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
        int start = 0 ;
        int end = nums.size()-1;
        sort(nums.begin() ,nums.end());

        vector <int> ans ;


        while( start < end ) 
        {


            int sum = nums[start] + nums[end] ;

            if( target == sum ) {

                ans.push_back(start);
                ans.push_back(end);
                
            }

            if( target > sum) {
                start++;
            }else {
                end--;
            }
        }
        return ans;

    }
        
        
};
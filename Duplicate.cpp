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

//second solution using set 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_set <int> l;

        bool ans = true;

        for ( int i = 0 ; i < n ; i++) {
            l.insert(nums[i]);
        }

        int m = l.size();


        if(  n == m) {
            ans = false;
        }

        return ans;

        
    }
};


//using inbuild function

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set <int> l;
        for ( int i = 0 ; i < nums.size();  i++) {

            if( l.find(nums[i]) != l.end() ) {
                return true;
            }
            l.insert(nums[i]);
        }

        return false;

    

        
    }
};



//javascript solution

/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let set = new Set();

    for (let i = 0; i < nums.length; i++) {
        if (set.has(nums[i])) {
            return true; // Found a duplicate
        }
        set.add(nums[i]);
    }

    return false; // No duplicates found
};
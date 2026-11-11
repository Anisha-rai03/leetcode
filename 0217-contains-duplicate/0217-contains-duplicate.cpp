class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Sort the array using bubble sort
        // for (int i = 0; i < nums.size() - 1; i++) {
        //     for (int j = 0; j < nums.size() - 1 - i; j++) {

        //         if (nums[j] > nums[j + 1]) {
        //             int temp = nums[j];
        //             nums[j] = nums[j + 1];
        //             nums[j + 1] = temp;
        //         }
        //     }
        // }
        sort(nums.begin(), nums.end());
        // Check adjacent elements
        int count=0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                // return true;
                count++;
            }
        }
        if(count>0){
            return true;
        }
       else{ return false;}
    }
};
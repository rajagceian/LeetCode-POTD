class Solution {
public:
    // Tortoise Hare Algo -  Slow and Fast pointer
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        //--- Given -> range = [1,n] and duplicate is present

        //--- to meet 
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        // --- to find meeting number
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
class Solution {
public:
 int firstPosition(vector<int>& nums, int target) {
     int n = nums.size();
        int start = 0;
        int end = n - 1 ;
        int ans = -1 ;
        while(start <= end){
            int mid = (start + end) / 2 ;

            if(nums[mid] == target){
                ans = mid ;
                end = mid - 1 ;
            }
            else if(nums[mid] < target){
                start = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
        }
        return ans;
    }
    int lastPosition(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1 ;
        int ans = -1 ;
        while(start <= end){
            int mid = (start + end) / 2 ;

            if(nums[mid] == target){
                ans = mid ;
                start = mid + 1 ;
            }
            else if(nums[mid] < target){
                start = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
        }
        return ans;
    }

   
    vector <int> searchRange(vector<int>& nums, int target){
        int first = firstPosition(nums , target);
        int last = lastPosition(nums , target);

        return {first , last};
    }
};

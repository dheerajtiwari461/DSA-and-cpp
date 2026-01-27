// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0; i<n; i++)
        arr[i]--;
        
        
        
        // occurrence 
        for(int i =0; i<n; i++){
        arr[arr[i]%n]+=n;
        }
        vector<int>ans(2);
        
        for(int i=0; i<n; i++){
            // repeating element 
            if(arr[i] / n ==2)
            ans[0] = i+1;
            else if(arr[i]/n == 0) //missing number 
            ans[1] = i+1;
        }
        return ans;
    }
};



https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element, count = 0, n = nums.size();

        for(int i=0; i<n; i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }else if(element == nums[i]){
                
                count++;

            } else 
            count--;
        }

        count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == element)
            count++;
        }

        if(count > n/2)
        return element;
        else return -1;




    }
};
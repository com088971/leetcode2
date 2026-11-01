class Solution {
public:
          int findpivot(vector<int>& nums,int n){
            int start=0,end=n;
            while(start<end){
                int mid=start+(end-start)/2;
                if(nums[mid]>nums[end]) start=mid+1;
                else       end=mid;
            }
            return end;

          }

          int findindex(vector<int>& nums,int start,int end, int target){
            int idx=-1;
              while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target) return  mid;
                if(nums[mid]<target)     start=mid+1;
                else     end=mid-1;
              }
              return -1;

          }
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int pivotindex= findpivot(nums,n);

        int idx= findindex(nums,0,pivotindex-1,target);
        if(idx!=-1) return idx;
         idx= findindex(nums,pivotindex,n,target);
        return idx;
    }
};
class Solution {
public:
      int canmakebouts(vector<int>& bloomDay, int mid, int k){
        int bountcount=0;
        int consecutivedays=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid) consecutivedays++;

            else consecutivedays=0;

            if(consecutivedays==k) {
                bountcount++;
                consecutivedays=0;
            }
        }
        return bountcount;
      }




    int minDays(vector<int>& bloomDay, int m, int k) {
       int startday=0;
       int endday=*max_element(bloomDay.begin(),bloomDay.end());
       int mindays=-1;

       while(startday<=endday){
        int mid=startday+ (endday-startday)/2;
        if(canmakebouts(bloomDay,mid,k)>=m){
            mindays=mid;
            endday=mid-1;

        }
        else {
            startday=mid+1;
        }
       }
       return mindays;
        
        
    }
};
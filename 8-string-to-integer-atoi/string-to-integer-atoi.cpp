class Solution {
public:
    int myAtoi(string s) {
      int i=0;
      int sign=1;
      long long nums=0;
      while(i<s.size()&& s[i]==' '){
        i++;
      }
       if(s[i]=='-'&& i<s.size()) {
        sign=-1;
        i++;
       }
       else if(s[i]=='+'&& i<s.size()){
        i++;
       }
 while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            if (nums > INT_MAX / 10 ||
                (nums == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            nums = nums * 10 + digit;
            i++;
        }

        return static_cast<int>(nums * sign);
    }
};
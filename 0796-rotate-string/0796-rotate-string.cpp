class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()==goal.length()){
            string s1= s+s;
            if(s1.contains(goal)){
                return true;
            }
            else
                return false;
        }
        return false;
    }
};
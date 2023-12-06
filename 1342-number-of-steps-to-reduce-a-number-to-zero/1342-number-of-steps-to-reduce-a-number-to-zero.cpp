class Solution {
public:
    int numberOfSteps(int num) {
        int stp=0;
        for( ;num>0; ){
        if (num%2==0){
            num/=2;
        }
        else
            num--;
        
        stp++;
            cout<<stp<<endl;
        }
          return stp;
    }
};
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string>return_res; 
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                return_res.push_back ("FizzBuzz");
         }
            else if(i%3==0){
                return_res.push_back("Fizz");
         }
            else if(i%5==0){
                return_res.push_back("Buzz");
         }
            else
             return_res.push_back(to_string(i));
     }  
        
        return return_res;
    }
};
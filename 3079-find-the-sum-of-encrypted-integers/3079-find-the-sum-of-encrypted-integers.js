/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfEncryptedInt = function(nums) {
    var sum = 0;
    for(let i = 0; i<nums.length; i++){
        sum += getOfEncryptedInt(nums[i]);
    }
    return sum;
};

var getOfEncryptedInt = function(value){
    let rem = 0;
    let digitC = 0;
    let maxValue = -1;
    let ansValue = 0; 
    while (value > 0){
        rem = value%10;
        maxValue = Math.max(rem, maxValue);
        value = Math.floor(value/10);
        digitC++;
    }
    while(digitC--){
        ansValue = ansValue*10 + maxValue;
    }
    return ansValue; 
    
}



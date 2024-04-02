/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let n = s.length;
    let counting = false;
    let length = 0;
    
    
    for(i = s.length - 1 ; i >=0 ; i--) {
        if(s[i] != ' '){
            counting= true;
            length++;
        }
        else if(counting) {
             break;
        }
    }
    return length;
    
    
};
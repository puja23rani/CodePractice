var isPalindrome = function(x) {
    let n=x;
    if(x<0){
        return false;
    }else{
        let rev=0,rem;
        while(n>0){
            rem=n%10;
            rev=rev*10+rem;
            n=Math.floor(n/10);
        }
        return rev==x;
    }
};
class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        y = 0
        temp = x
        while temp > 0:
            y = y*10 + temp%10
            temp //= 10
        
        return y == x
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        mapper = {
            '(':')',
            '{':'}',
            '[':']'
        }
        
        for p in s:
            if p in mapper:
                stack.append(p)
            
            elif not stack:
                return False
            
            elif mapper[stack[-1]] == p:
                stack.pop(-1)

            else:
                return False
        
        return len(stack)==0
        

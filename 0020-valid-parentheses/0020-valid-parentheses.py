class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        for i in s:
            if not stack or i=='(' or i=='{' or i == '[':
                stack.append(i)
            if stack[-1] == '(' and i == ')':
                stack.pop()
            elif stack[-1] == '{' and i == '}':
                stack.pop()
            elif stack[-1] == '[' and i == ']':
                stack.pop()
            elif i == ')' or i == '}' or i == ']':
                stack.append(i)
        if not stack:
            return True
        else:
            return False

        
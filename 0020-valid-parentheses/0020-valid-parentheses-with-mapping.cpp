class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;

        for (char i : s) {
            if (stack.empty() || i == '(' || i == '{' || i == '[') {
                stack.push_back(i);
            }

            if (!stack.empty() && stack.back() == '(' && i == ')') {
                stack.pop_back();
            }
            else if (!stack.empty() && stack.back() == '{' && i == '}') {
                stack.pop_back();
            }
            else if (!stack.empty() && stack.back() == '[' && i == ']') {
                stack.pop_back();
            }
            else if (i == ')' || i == '}' || i == ']') {
                stack.push_back(i);
            }
        }

        if (stack.empty())
            return true;
        else
            return false;
    }
};

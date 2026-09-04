class Solution {
public:
    bool isValid(string s) {
        char stack[s.size()];
        size_t head = 0;

        for (const char& x : s) {
            std::cout << head << '\n';
            switch (x) {
                case '(': 
                case '{': 
                case '[':
                    stack[head++] = x;
                    break;
                case ')':
                    if (!head || stack[--head] != '(')
                        return false;
                    break;
                case '}':
                    if (!head || stack[--head] != '{')
                        return false;
                    break;
                case ']':
                    if (!head || stack[--head] != '[')
                        return false;
                    break;
                default:
                    return false;
            }
        }

        return !head;
    }
};

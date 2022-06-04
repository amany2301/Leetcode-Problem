class Solution {
public:
        bool isPalindrome(ListNode* head) {
             ListNode* temp = head;

        std::vector<int> numbers = {};

        while (temp != NULL) {
            numbers.push_back(temp->val);
            temp = temp->next;
        }

        if (numbers.front() != numbers.back())
            return false;

        for (int i = 1; i < numbers.size(); i++) {
            if (numbers.at(i) != numbers.at(numbers.size() - (i + 1)))
                return false;
        }
        
        return true;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;

        // Convert LinkedList into vector.
        ListNode* currentNode = head;
        while (currentNode != nullptr) {
            vals.push_back(currentNode->val);
            currentNode = currentNode->next;
        }

        // Use two-pointer technique to check for palindrome.
        int front = 0;
        int back = vals.size() - 1;
        while (front < back) {
            if (vals[front] != vals[back]) {
                return false;
            }
            front++;
            back--;
        }
        return true;
    }
};
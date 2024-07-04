class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    ListNode* mergeNodes(ListNode* head) {
        ListNode* modify = head->next;
        ListNode* nextSum = modify;

        while (nextSum) {
            int sum = 0;
            while (nextSum->val != 0) {
                sum = sum + nextSum->val;
                nextSum = nextSum->next;
            }
            modify->val = sum;
            nextSum = nextSum->next;
            modify->next = nextSum;
            modify = modify->next;
        }
        return head->next;
    }
};
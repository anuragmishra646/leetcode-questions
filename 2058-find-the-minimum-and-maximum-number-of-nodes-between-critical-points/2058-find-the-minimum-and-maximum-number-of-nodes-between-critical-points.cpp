class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int val = head->val;
        vector<int> index;
        ListNode* temp = head->next;
        int i = 2;
        while (temp->next != NULL) {
            int val1 = temp->val;
            if ((val1 > val && val1 > temp->next->val) ||
                (val1 < val && val1 < temp->next->val)) {
                index.push_back(i);
            }
            val = temp->val;
            temp = temp->next;
            i++;
        }
        int n = index.size();
        if (n < 2) {
            return {-1, -1};
        }
        int x = index[0];
        int y = index[n - 1];
        int max = y - x;
        int min = INT_MAX;
        for (int j = 1; j < n; j++) {
            int diff = index[j] - index[j - 1];
            if (diff < min) {
                min = diff;
            }
        }
        return {min, max};
    }
};
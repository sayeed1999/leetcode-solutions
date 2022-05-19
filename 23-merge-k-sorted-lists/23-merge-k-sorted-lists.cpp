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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int ar[100000];
        int count = 0;
        for(auto it: lists)
        {
            ListNode* temp = it;
            while(temp!=0)
            {
                ar[count++] = temp->val;
                temp = temp->next;
            }
        }
        // cout << count; debugging
        sort(ar, ar+count);
        ListNode* head = 0;
        if(count > 0) head = new ListNode(ar[0]);
        ListNode* temp = head;
        for(int i=1; i<count; i++)
        {
            temp->next = new ListNode(ar[i]);
            temp = temp->next;
        }
        return head;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int len =0;
        // ListNode* temp = head;

        // while(temp != NULL)
        // {
        //     len++;
        //     temp = temp->next;
        // }

        // if(len == n)
        // {
        //     ListNode* newHead = head->next;
        //     delete head;
        //     return newHead;
        // }

        // temp = head;
        // for(int i=0;i<len-n-1;i++)
        // {
        //     temp=temp->next;
        // }
        // ListNode* nodeToDelete = temp->next;
        // temp->next = nodeToDelete->next;
        // delete nodeToDelete;
        // return head;

         ListNode* dummyNode = new ListNode(-1);
         dummyNode->next = head;
         ListNode* fast = dummyNode;
         ListNode* slow = dummyNode;
         for(int i=0;i<n;i++)
         {
            fast = fast->next;
         }

         while(fast->next != NULL)
         {
            fast = fast->next;
            slow = slow->next;
         }

         ListNode* nodeToDelete = slow->next;
         slow->next = nodeToDelete->next;
         delete nodeToDelete;

         head = dummyNode->next;
         delete dummyNode;
         return head;


 
    }
};
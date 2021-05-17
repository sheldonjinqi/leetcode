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
    ListNode* mergeSort(ListNode* l, ListNode* r){
        //basecase: each contains one node.
        // ListNode* tmp_node = new ListNode(0)  ; 
        // ListNode* head_node = tmp_node ;
        // while(l && r){
        //     if(l->val < r->val){
        //         tmp_node->next = l;
        //         l = l->next; 
        //     }
        //     else{
        //         tmp_node->next = r; 
        //         r = r->next;
        //     }
        //     tmp_node = tmp_node->next;
        // }
        // if(l){
        //     tmp_node->next= l;
        // }
        // else{
        //     tmp_node->next=r;
        // }
        
        //recursive 
        if(!l) return r;
        if(!r) return l;
        if(l->val < r->val){
            l->next = mergeSort(l->next,r);
            return l;
        }
        else{
            r->next = mergeSort(l,r->next);
            return r;
        }
        
        // return head_node->next;
    }
    ListNode* sortList(ListNode* head) {
        // use fast & slow pointer 
        if(!head || !head->next){
            return head;
        }
        ListNode* slow =head;
        ListNode* fast = head->next; 
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        fast=slow->next;
        slow->next = NULL;
        return mergeSort(sortList(head),sortList(fast));
    }
};

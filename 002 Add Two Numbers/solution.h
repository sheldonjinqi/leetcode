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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // int carry =0;
        ListNode* tmp_node = new ListNode(0);
        ListNode* head = tmp_node;
        int num1=0, num2=0,carry=0;
        while(l1 || l2){
            // simplified code
            num1=0, num2=0;
            if(l2) num2=l2->val,l2=l2->next;
            if(l1) num1=l1->val,l1=l1->next;
            int sum = num1+num2+carry;
            tmp_node->next = new ListNode(sum%10);
            carry = sum/10;
            tmp_node = tmp_node->next;
            
            
            // too messy 
//             if(l1&&l2){
//                 tmp_node->next = new ListNode((l1->val+l2->val+carry)%10);
//                 carry = (l1->val+l2->val+carry)/10;
//                 // cout<<l1->val+l2->val<<"\t"<<carry<<endl;
//                 l1=l1->next;
//                 l2=l2->next;
//                 tmp_node = tmp_node->next;
//             }
//             else if(!l2){
//                 int value = (l1->val+carry)%10;
//                 carry = (l1->val+carry)/10;
//                 l1->val = value;
//                 tmp_node->next = l1;
                
//                 l1=l1->next;
//                 tmp_node = tmp_node->next;
//             }
//             else if(!l1){
//                 int value = (l2->val+carry)%10;
//                 carry = (l2->val+carry)/10;
//                 l2->val = value;
//                 tmp_node->next = l2;
                
//                 l2=l2->next;
//                 tmp_node = tmp_node->next;
//             }

        }
        if(carry==1){
                tmp_node->next = new ListNode(1);
            }
        return head->next;
    }
};

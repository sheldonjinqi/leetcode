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
        // method1; O(n) space 
        // vector<int> num_vec ; 
        // while(head){
        //     num_vec.push_back(head->val);
        //     head = head->next; 
        // }
        // for(int i=0,j=num_vec.size()-1;i<=j; i++,j--){
        //     if(num_vec[i]!=num_vec[j]) return false;
        // }
        // return true;
        
        //method2: O(1) space, reverse second half and compare with first half 
        ListNode* fast = head; 
        ListNode* slow =head; 
        while(fast->next && fast->next->next){
        fast = fast->next->next ; 
        slow = slow->next; 
        } 
        fast = slow->next; 
        slow->next = nullptr; // ends the first half at slow 

        // reverse the second half
        ListNode* nextP; 
        ListNode* prevP = nullptr;

        while(fast){
            nextP = fast->next;
            fast->next = prevP; 
            prevP = fast; 
            fast = nextP;
        }
        while(prevP){
            if(prevP->val == head->val){
                prevP = prevP->next; 
                head = head->next; 
            }
            else{
                return false;
            }
        }
        
        return true;
        
    }
};

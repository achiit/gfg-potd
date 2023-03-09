  //User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
   
        Node *reverse(Node *head, int k)
    {
        // code here
        Node *curr=head,*prev=NULL,*agli;
        int node=0;
        while(curr){
            node++;
            agli = curr->next;
            curr->next = prev;
            prev = curr;
            curr=agli;
        }
        node=node-k-1;
        Node *temp = prev;
        while(node--){
            temp=temp->next;
        }
        head->next=prev;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};

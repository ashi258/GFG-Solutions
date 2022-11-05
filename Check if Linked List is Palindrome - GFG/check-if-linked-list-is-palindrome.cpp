// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
     Node *reverselist(Node *head)
  {
      Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            
            next = current->next;
            
            current->next = prev;
            
            prev = current;
            current = next;
        }
        head = prev;
  }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL||head->next==NULL)
        return true;
        if(head->next->next==NULL)
        {
            if(head->data==head->next->data)
            return true;
            else
            return false;
        }
        Node *slow=head;
        Node *fast=head;
        while (fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *curr=head;
        Node *rev=reverselist(slow->next);
        while (rev!=NULL)
        {
            if(curr->data!=rev->data)
            return false;
            curr=curr->next;
            rev=rev->next;
        }
        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends
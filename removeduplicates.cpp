/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/
Node* uniquesortedlist(Node* head){
    //empty list
    if(head==NULL)
    return NULL;
    //non empty list
    Node*curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL) && (curr->data==curr->next->data)){
            Node* next_next=curr->next->next;
            Node* nodetodel=curr->next;
            delete(nodetodel);
            curr->next=next_next;
        }
        else//not equal
        {
            curr=curr->next;
        }
        }
        return head;
    }

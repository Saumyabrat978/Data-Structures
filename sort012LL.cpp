<<<<<<< HEAD
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            cnt0++;
        }
        else if(temp->data==1){
            cnt1++;
        }
        else if(temp->data==2){
            cnt2++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(cnt0!=0){
            temp->data=0;
            cnt0--;
        }
        else if(cnt1!=0){
            temp->data=1;
            cnt1--;
        }
        else if(cnt2!=0){
            temp->data=2;
            cnt2--;
        }
        temp=temp->next;
    }
    return head;
=======
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            cnt0++;
        }
        else if(temp->data==1){
            cnt1++;
        }
        else if(temp->data==2){
            cnt2++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(cnt0!=0){
            temp->data=0;
            cnt0--;
        }
        else if(cnt1!=0){
            temp->data=1;
            cnt1--;
        }
        else if(cnt2!=0){
            temp->data=2;
            cnt2--;
        }
        temp=temp->next;
    }
    return head;
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
}
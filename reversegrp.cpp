<<<<<<< HEAD
/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (count < k) {
        curr = prev;
        prev = NULL;
        next = NULL;
        count = 0;
    }
        while (curr && count < k)
        {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
    

    if (next != NULL) {
        head->next = kReverse(next, k);
    }



    return prev;
=======
/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (count < k) {
        curr = prev;
        prev = NULL;
        next = NULL;
        count = 0;
    }
        while (curr && count < k)
        {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
    

    if (next != NULL) {
        head->next = kReverse(next, k);
    }



    return prev;
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
}
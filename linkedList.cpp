#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

//Insertion

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

void insertAtN(node* head, int val, int pos){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    int count=1;
    while(temp->next != NULL && count<pos-1){
        temp=temp->next;
        count++;
    }
    n->next=temp->next;
    temp->next = n; 
}

void insertAtTail(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;
}

//Deletion

void deleteAtHead(node* head){
    node* toDelete = head;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head,int val){
    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    
    node* temp=head;
    
    while(temp->next->data != val){
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}

//Displaying

void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//searching

bool search(node* head,int key){
    node* temp=head;
    while(temp!= NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

//Reversing

node* recursiveReverse(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = recursiveReverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nxtptr;
    while(currptr != NULL){
        nxtptr = currptr->next;
        currptr->next = prevptr;

        prevptr=currptr;
        currptr=nxtptr;
    }
    return prevptr;
}

node* reversek(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nxtptr;

    int count=0;
    while(currptr != NULL && count < k){
        nxtptr = currptr->next;
        currptr->next = prevptr;

        prevptr=currptr;
        currptr=nxtptr;
        count++;
    }

    if(nxtptr != NULL){
        head->next = reversek(nxtptr,k);
    }

    return prevptr;
}

//Cycle In LinkedList

void makeCycle(node* head,int pos){
    node* temp = head;
    node* startNode;
    int count=1;
    while(temp->next != NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(node* head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node*head){
    node* fast=head;
    node* slow=head;

    do
    {
        slow = slow -> next;
        fast = fast->next->next;
    } while (slow!=fast);
    
    fast=slow;
    while(fast->next != slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}

int main(){
    
    //Initialization
    node* head=NULL;display(head);
    
    //Insertion & Display
    insertAtTail(head,1);display(head);
    insertAtTail(head,1);display(head);
    insertAtTail(head,5);display(head);
    insertAtTail(head,2);display(head);
    insertAtTail(head,3);display(head);
    insertAtHead(head,4);display(head);
    insertAtN(head,30,2);display(head);

    // Searching & Deletion
    cout<<search(head,2)<<endl;
    deletion(head,2);
    display(head);
    cout<<search(head,2)<<endl;

    //reverse
    node* newhead=reverse(head);
    // node* newhead=recursiveReverse(head);
    display(newhead);

    //reverse K
    // int k=3;
    // node* newhead=reversek(head,k);
    // display(newhead);

    //cycle
    // cout<<detectCycle(head)<<endl;
    // makeCycle(head,4);
    // cout<<detectCycle(head)<<endl;
    // removeCycle(head);
    // cout<<detectCycle(head)<<endl;
    return 0;
}

//User Input
// int main(){
    // node* head=NULL;
    // int n;
    // cin>>n;
    // //int arr[n];
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     //cin>>arr[i];
    //     insertAtTail(head,x);
    // }
    // display(head);
    // return 0;
// }
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

//Displaying

void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//AppendLastKNodes

void appendKNodes(node* &head,int n,int k){
    if(head==NULL){
        return;
    }

    k=k%n;
    node* temp = head;
    int count=1;
    while(temp->next != NULL && count<n-k){
        temp=temp->next;
        count++;
    }
    node* temp2=temp;
    while(temp2->next != NULL){
        temp2=temp2->next;
    }
    temp2->next=head;
    head=temp->next;
    temp->next=NULL;
}

int main(){
    
    node* head=NULL;
    int n;
    cin>>n;
    //int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        //cin>>arr[i];
        insertAtTail(head,x);
    }
    cout<<"Given Linked List is :"<<endl;
    display(head);

    cout<<"Enter the value of K :";
    int k;
    cin>>k;

    appendKNodes(head,n,k);
    cout<<"After the append of last K Nodes of Linked List is :"<<endl;
    display(head);

    return 0;
}

        // if(head==NULL){
        //     return head;
        // }
        
        // while(k--){
        //     Node* temp=head;
        //     while(temp->next!=NULL){
        //         temp=temp->next;
        //     }
        //     temp->next=head;
        //     head=head->next;
        //     temp->next->next=NULL;
        // }
        // return head;
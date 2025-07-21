#include<iostream>
using namespace std;

class NODE {
    public:
    int data;
    NODE *next;

    //Constructor for intialization 

    NODE (int value) {
        data = value;
        next = NULL;
    };
};

//Using recursion
NODE * CreateLinkedList(int arr[], int index, int size){
    if(index == size){
        return NULL;
    };
    NODE * temp;
    temp = new NODE(arr[index]);
    temp -> next = CreateLinkedList(arr,index+1,size);
    return temp;
}

//using recursion
// NODE* deleteNode(NODE* curr, int x) {
//     if(x==1) {
//         NODE *temp = curr->next;
//         delete curr;
//         return temp;
//     }
    
//     curr->next = deleteNode(curr->next,x-1);
// }

int main () {
    NODE * Head;
    Head = NULL;
    int arr[] = {2,4,6,8,10};
    Head = CreateLinkedList(arr,0,5);

    //Delete a node at start
//     if(Head != NULL) {
//     NODE * temp = Head;
//     Head = Head -> next;
//     delete temp;
//    }

     //Delete a node from end
    //  if(Head != NULL){
    //     //Only one node present
    //     if(Head -> next == NULL) {
    //     NODE * temp = Head;
    //     delete temp;
    //     Head = NULL;  
    //  }

     //More than 1 node is present
    //  else {
    //     NODE * curr = Head;
    //     NODE * prev = NULL;
    //     while(curr -> next!=NULL)
    //     {
    //         prev = curr;
    //         curr = curr -> next;
    //     }
    //  }

    int x = 4;

    //first node
        if(x==1){
            NODE *temp = Head;
            Head = Head->next;
            delete temp;
        }
        
           x--;
           NODE * curr = Head;
           NODE * prev = NULL;
            
            while(x--) {
                prev = curr;
                curr=curr->next;
            }
            prev->next = curr->next;
            delete curr;
            

    while(Head)
{
    cout<<Head->data<<" ";
    Head = Head->next;
}}





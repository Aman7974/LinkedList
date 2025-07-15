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

NODE *CreateLinkedList(int arr[],int index,int size, NODE * prev){
    if(index == size)
    return prev;
    NODE * temp;
    temp = new NODE(arr[index]);
    temp -> next = prev;
    CreateLinkedList(arr,index+1,size,temp);
}

int main () {

    NODE * Head;
    Head = NULL;
    int arr[] = {2,4,6,8,10};
    Head = CreateLinkedList(arr,0,5);
   NODE *Head;
   Head = NULL;

   cout<<Head->data<<endl;
   cout<<Head->next<<endl;

   int arr[] = {2,4,6,8,10};

   //Insert the node at beginning

   //Linked List doesn't exist

   for(int i=0;i<5;i++)
   {
    if (Head == NULL) {
        Head = new NODE(arr[i]);
        }

       // Linked List exist karti hain
        else {
            NODE * temp;
            temp = new NODE(arr[i]);
            temp -> next = Head;
            Head = temp;
        } 
   } 

//    Print the value
   NODE *temp = Head;

   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   };

     NODE *Head, *Tail;
     Tail = Head = NULL;

     int arr[] = {2,4,6,8,10};

     for(int i=0;i<5;i++){
//Insert the value at the end

if(Head == NULL)
{
    Head = new NODE(arr[i]);
    Tail = Head;
}
//Linked list is empty
else{
Tail -> next = new NODE(arr[i]);
Tail = Tail -> next;
}

NODE *temp;
temp = Head;

while(temp)
{
    cout<<temp->data<<" ";
    temp = temp->next;
}
}}
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void linked_list_traversal(struct Node*ptr);
void linked_list_traversal(struct Node*ptr){
struct Node*insertAtfirst(struct Node*head,int data){

    while(ptr!= NULL)
    {
        ptr = ptr->next;
    }
}

    ptr ->next=head;
    ptr->data=data;

}
int main(){
    struct Node*head;
     struct Node*second;
     struct Node*third;
     struct Node*fourth;
     //allocation the dynamic memory in heap
     head = (struct Node*)malloc(sizeof(struct Node*));
     second = (struct Node*)malloc(sizeof(struct Node*));
     third = (struct Node*)malloc(sizeof(struct Node));
     fourth = (struct Node*)malloc(sizeof(struct Node));

     head ->next = second;
     head ->data = 15;
     second ->next=third;
     second ->data=18;
     third ->next=fourth;
     third ->data=65;
     fourth ->next = NULL;
     fourth ->data = 34;
     insertAtfirst(head,67);
     LinkedListTraverse(head);
     return 0;






    
}
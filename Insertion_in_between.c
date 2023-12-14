#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void Traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }    
    printf("\n");
}
struct node *insertion_in_between(struct node *head,int data,int index){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));

    //linking head to first
    head->data=71;
    head->next=first;

    //linking first to second
    first->data=72;
    first->next=second;

    //linking to second to third
    second->data=73;
    second->next=third;

    //linkingl third to Null
    third->data=74;
    third->next=NULL;
    
    Traverse(head);
    head=insertion_in_between(head,84,2);
    Traverse(head);
}
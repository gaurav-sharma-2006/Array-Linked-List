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
struct node *deletion_at_end(struct node *head){
    struct node *p=head;
    struct node *q=p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
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
    head=deletion_at_end(head);
    Traverse(head);
}
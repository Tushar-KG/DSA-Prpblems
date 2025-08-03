#include <stdio.h>
#include <stdlib.h> 

struct single{
    int data;
    struct single* next;
};

struct single* crtNode(int value){
    struct single* newNode;
    newNode=(struct single*)malloc(sizeof(struct single));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}


int main(){
    struct single* head = crtNode(10);
    struct single* second = crtNode(20);
    struct single* third = crtNode(30);

    head->next= second;
    second->next=third;

    struct single* temp=head;
    while (temp !=NULL){
        printf("%d", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    return 0;

}

//Krenare Syla
//Systems Programming
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
static void reverse(struct Node** head_ref)
{
struct Node* previous = NULL;
struct Node* current = *head_ref;
struct Node* next = NULL;
while (current != NULL) {
next = current->next;
 current->next = previous;
 previous = current;
 current = next;
}
*head_ref = previous;
}
 
void push(struct Node** head_ref, int new_data)
{
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct Node* head)
{
struct Node* temp = head;
while (temp != NULL) {
printf("%d  ", temp->data);
temp = temp->next;
    }
}
//Main function
int main()
{
struct Node* head = NULL;
 
push(&head, 5);
push(&head, 7);
push(&head, 79);
push(&head, 48);
push(&head, 4);
push(&head, 13);
 
printf("Enter your Student ID\n");
printList(head);
reverse(&head);
printf("\nReversed Student ID Using Linked List in C \n");
printList(head);
getchar();
}

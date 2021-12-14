#include <stdio.h>

//Global Variables
int maxsize = 5;
int top=-1;

//Function Declearations
void push(int *);
void pop(int *);
void display(int *);
void displaytop(int *);

//Main Starts

int main()
{
    int stack[5];
    int end= 0;
    printf("Implementation of Stack Using C \n \n");
    while(end == 0){   
    int input;
    printf("Select Any Option:\n");
    printf("[1]. Push \n");
    printf("[2]. Pop \n");
    printf("[3]. Display All \n");
    printf("[4]. Display TOS \n");
    printf("[5]. Exit \n");
    printf("Enter the Option: ");
    scanf("%d", &input);

    switch(input)
    {
    case 1:
        push(&stack[0]);
		break;
    case 2:
    	pop(&stack[0]);
    	break;
    	
    case 3:
    	display(&stack[0]);
    	break;
    case 4:
    	displaytop(&stack[0]);
    	break; 
    case 5:
    	end= 1;
		break; 
	}
	printf("----------------------------------------------\n");
}
	
	return 0;

}

//Main Ends

//Function Definations 
void push(int *s)
{
    if (top== maxsize)
    {
     printf("Stack Overflow\n");
    } 
    if (top < maxsize)
     {
     	top++;
    	int x;
        printf("Enter the Element to add:");
        scanf("%d", &x);
        *(s+top)=x;
    //    printf("the num is :%d", *(s+top));
    //    printf("/n Top=%d", top);

      }
}

void pop (int *s)
{
	if (top == -1)
		printf("Stack Underflow");
	else 
	{
		printf("The element poped: %d\n", *(s+top));
		top--;
	}
	
}

void display(int *s)
{
	int i;
		printf("The elements are :\n");
	for (i=0; i<=top; i++)
	{
		printf("%d \n", *(s+i));	
	}
}

void displaytop(int *s)
{
		printf(" The top of Stack: %d\n", *(s+top));
}




typedef struct stack * stack_t;

struct stack
{
	struct stack_node *	head;
	int					object_copy;
};

struct stack_node
{
	void *				object;
	struct stack_node *	next;
};

void destroy_stack(stack_t stk);

stack_t get_copy_stack(void *(*Copy_object)(void *obj), void (*Destroy_object)(void *obj));
stack_t get_simple_stack(void);
stack_t

int is_empty(stack_t stk);



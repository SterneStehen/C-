#include <iostream>

//using namespace std;

class stack
{
private:
	int top;	// индекс первого свободного элемента
	int size;	// размер стека
	int* data;	// указатель на область памяти
public:
	stack(int stack_size);
	~stack();
	void push(int a);
	int pop();
	void clear();
};

stack::stack(int stack_size)
{
	this->top = 0;
	this->size = stack_size;
	this->data = (int*)malloc(sizeof(int)*stack_size);
}

stack::~stack()
{
	//printf("all free\n");
	std::cout << "all free" << std::endl;
	delete[] (this->data);
}

// Складывает новый элемент в стек
void stack::push(int a)
{
	if(this->top == this->size)
	{
		//printf("ERROR: Stack overflow! Can not push %d\n", a);
		std::cout << "ERROR: Stack overflow! Can not push " << a << std::endl;
		return;
	}
	this->data[this->top] = a;
	this->top++;
	std::cout << "push " << a << std::endl;
}

// Достаёт верхний элемент из стека
int stack::pop()
{
	if(this->top == 0)
	{
		//printf("ERROR: Stack empty, can not pop\n");
		std::cout << "ERROR: Stack empty, can not pop" << std::endl;
		return -1; // плохая идея, потом к этому ещё вернёмся
	}
	this->top--;
	std::cout << "pop " << this->top << std::endl;
	return this->data[this->top];
	
}

// Чистит данные в стеке, сохраняя сам стек
void stack::clear()
{
	this->top = 0;
}


int main()
{
	stack s1(2);
	s1.push( 1);
	s1.push(2);
	s1.push(3);
	// printf("Data from s1: %d\n", pop(&s1));
	// printf("Data from s1: %d\n", pop(&s1));
	s1.pop();
	s1.pop();
	s1.pop();
	//return 0;
}
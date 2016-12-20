// Cecilia Goss

// Header files
#include <string>
#include <iostream>
using namespace std;

// Stack class
class IntStack
{
private:
	int *stackArray;
	int capacity;
	int top;
public:
	IntStack(int capacity); // Constructor
	~IntStack() { delete[] stackArray; } // Destructor
	void push(int value);
	void pop(int &value);
	bool isEmpty();

	// Stack exceptions
	class Overflow {};
	class Underflow {};

};

// Class IntStack constructor
IntStack::IntStack(int capacity)
{
	this->capacity = capacity;
	stackArray = new int(capacity);
	top = 0;
}

// Adds value to stack
void IntStack::push(int value)
{
	if (top == capacity) throw IntStack::Overflow();
	stackArray[top] = value;
	top++;
}

// Determines whether the stack is empty.
bool IntStack::isEmpty()
{
	if (top == 0)
		return true;
	else
		return false;
}

// Removes a value from the stack and returns it.
void IntStack::pop(int &value)
{
	if (isEmpty()) throw IntStack::Underflow();
	top--;
	value = stackArray[top];
}

// Main function
int main() {
	IntStack stack(5);
	int values[] = { 5, 10, 15, 20, 25 };
	int value;

	try
	{
		// Push values into stack.
		cout << "Pushing...\n";
		for (int k = 0; k < 5; k++)
		{
			cout << values[k] << " ";
			stack.push(values[k]);
		}
		cout << "\nPushing value after stack is full...";
		stack.push(30);
		cout << "\nYou should not see this!!";
		cout << endl;
	}

	catch (IntStack::Overflow)
	{
		cout << "\nAn overflow exception has occured.\n";
	}
	
	// Pop values from stack.
	cout << "\nPopping...\n";
	while (!stack.isEmpty())
	{
		stack.pop(value);
		cout << value << " ";
	}
	cout << endl;

	return 0;
}
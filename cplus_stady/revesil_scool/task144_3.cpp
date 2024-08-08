#include <iostream>

class Stack
{
private:
	int m_array[10];
	int len;
public:
	void reset()
	{
		m_array[0] = 0;
		m_array[1] = 0;
		m_array[2] = 0;
		m_array[3] = 0;
		m_array[4] = 0;
		m_array[5] = 0;
		m_array[6] = 0;
		m_array[7] = 0;
		m_array[8] = 0;
		m_array[9] = 0;
	}
	bool push(int value)
	{
		if(len == 10)
			return false;
		
		m_array[len++] == value;
		return true;
	}
	Stack  pop()
	{
		if(m_array[0] == 0)
			return false;
		else 
			return Stack;
		
	}
	void  print()
	{
		for(int i = 0; i < 10; i++)
		{
			std::cout << m_array[i] << std::endl;
		}
	}
};

#include <iostream>

class Sstring
{
private:
	char *m_data;
	int m_len;
public:
	Sstring(char *data, int len): m_data(data), m_len(len){};

	Sstring(const Sstring &S){
		m_len = S.m_len;
		if(S.m_data){
			m_data = new char[m_len];
			for (int i = 0; i < m_len; i++)
			{
				m_data[i] = S.m_data[i];
			}
		}
		else
			m_data = 0;
		std::cout << "Copy constructor worked here!" << std::endl;
	}

	void print(){
		std::cout << m_len << m_data << std::endl;
	}

	~Sstring(){
		//delete m_data[];
	};
};

int main()
{
	Sstring S();
	S.print();
}

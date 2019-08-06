#include <iostream>

using namespace std;

class Simple
{
	private:
		int m_nID;
		
	public:
		Simple(int nID)
		{
			std::cout << "Contructing Simple " << nID << std::endl;
			m_nID = nID;
		}
		
		~Simple()
		{
			std:cout << "Destructing Simple" << m_nID << std::endl;
		}
		
		int GetID() { return m_nID; }
};

int main()
{
	using namespace std;
	// Allocate a Simple on the stac
	Simple cSimple(1);
	cout << cSimple.GetID() << endl;
	
	// Allocate a Simple dynamically
	Simple *pSimple = new Simple(2);
	cout << pSimple->GetID() << endl;
	delete pSimple;
	
	return 0;
} // cSimple goes out of scope here



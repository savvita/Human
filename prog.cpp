#include"Header.h"

int main()
{
	Human h;
	std::cout << h;
	h.setName("Name");
	h.setBirthday(Date(1, 1, 1900));
	std::cout << h;

	Student st("Name2", Date(2, 2, 2000), 100);
	std::cout << st;
	Schoolchild sc("Name3", Date(3, 3, 1500), 5.6);
	std::cout << sc;
	Employee e;
	std::cout << e;
}
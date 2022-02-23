#include "MutantStack.hpp"

void	mutant(void) {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(0);
	mstack.push(737);
	std::cout << "top : " <<mstack.top() << std::endl;
	std::cout << "size : " <<mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
	    ++it;
	}
    std::cout<< "Output it backward : " <<std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		rit++;
	}
    std::stack<int> s(mstack);
}

void	list(void)
{
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	lst.pop_back();
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(0);
	lst.push_back(737);
	std::cout << "top : " <<lst.back() << std::endl;
	std::cout << "size : " <<lst.size() << std::endl;
	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();
	while (it != ite)
	{
	    std::cout << *it << std::endl;
	    ++it;
	}
    std::cout<< "Output it backward : " <<std::endl;
	std::list<int>::reverse_iterator rit = lst.rbegin();
	std::list<int>::reverse_iterator rite = lst.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		rit++;
	}
}

int main(void)
{
	std::cout << "------Mutant Stack------" << std::endl;
	mutant();
	std::cout << std::endl;
	std::cout<< "-----------List----------"<< std::endl;
	list();
	std::cout << std::endl;
	return (0);
}

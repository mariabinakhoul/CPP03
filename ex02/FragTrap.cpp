#include "FragTrap.h"

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	hitpoints = 100;
	energypts = 100;
	damage = 30;
	std::cout << "FragTrap constructor was called\n";
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor was called\n";
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap fragtrap)
{
	std::cout << "FragTrap assignation operator called\n";
	if (this != &fragtrap)
		ClapTrap::operator=(fragtrap);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor was called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "<< name << " requests a High_Five!\n";
}

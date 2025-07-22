#include "ScavTrap.h"

ScavTrap::ScavTrap( const std::string& name): ClapTrap(name)
{
	std::cout<< "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "Scavtrap copy Constructor called\n";
}

ScavTrap ScavTrap::operator=(const ScavTrap scavTrap)
{
	std::cout << "ScavTrap assignation operator called\n";
	ClapTrap::operator=(scavTrap);
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is in Gate Keeper mode\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}
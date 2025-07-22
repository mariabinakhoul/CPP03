#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name):name(name), hitpoints(100), energypts(50), damage(20)
{
	std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy Constructor called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called\n";
	this->name = other.name;
	this->hitpoints = other.hitpoints;
	this->energypts = other.energypts;
	this->damage = other.damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (energypts == 0)
	{	std::cout << "Attention: You dont have any energy points left\n";
		return ;
	}
	energypts--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints == 0)
	{
		std::cout << "ClapTrap " << name << " already dead\n";
		return; 
	}
	hitpoints = hitpoints - amount;
	std::cout << "ClapTrap " << name << " took " << amount << " damage points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitpoints == 10)
	{
		std::cout << "at full health cant repair\n";
		return;
	}
	if (energypts == 0)
	{
	std::cout << "no more energypts, cant repair\n";
	}
	energypts--;
	hitpoints = hitpoints + amount;
	if (hitpoints > 10)
		hitpoints = 10;
	std::cout << "ClapTrap " << name << " is being repaired for " << amount << " point\n";
}

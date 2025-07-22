#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string.h>

class ClapTrap
{
	protected:
		std::string name;
		int	hitpoints;
		int	energypts;
		int damage;

	public:
		ClapTrap(const std::string&);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
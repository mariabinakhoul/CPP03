#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( const std::string& name);
		ScavTrap(const ScavTrap&);
		ScavTrap operator=(const ScavTrap);
		void guardGate();
		~ScavTrap();
};

#endif

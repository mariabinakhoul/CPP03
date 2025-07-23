#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.h"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(const std::string);
		FragTrap(const FragTrap&);
		FragTrap &operator=(const FragTrap);
		~FragTrap();
		void highFivesGuys(void);
};


#endif
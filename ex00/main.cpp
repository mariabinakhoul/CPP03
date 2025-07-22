#include "ClapTrap.h"

int main()
{
	ClapTrap claptrap("Mabi-nak");

	claptrap.attack("Abux Nakhulux");
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);
	claptrap.attack("Abux Nakhulux");
	claptrap.attack("Abux Nakhulux");
	claptrap.attack("Abux Nakhulux");
	claptrap.attack("Abux Nakhulux");
	claptrap.attack("Abux Nakhulux");
	claptrap.beRepaired(4);
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	return (0);
}
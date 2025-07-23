#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	ClapTrap claptrap("Mabi-nak");
	claptrap.attack("Abux Nakhulux");
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);

	std::cout << "----------------------------\n";

	ScavTrap scavtrap("Gatekeeper-9000");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	scavtrap.guardGate();

	std::cout << "----------------------------\n";

	FragTrap fragtrap("TheHighFiver");
	fragtrap.highFivesGuys();
	fragtrap.takeDamage(10);
	fragtrap.beRepaired(5);

	std::cout << "----------------------------\n";
	
	return (0);
}

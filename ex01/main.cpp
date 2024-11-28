#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap sA("A");
	ScavTrap sB("B");
	sA.attack("B");
	sB.takeDamage(20);
	sB.beRepaired(10);

	sA.guardGate();
	sB.guardGate();
	return (0);
};
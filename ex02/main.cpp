#include "FragTrap.hpp"

int	main(void)
{
	FragTrap A("A");
	FragTrap B("B");
	A.attack("B");
	B.attack("A");
	B.takeDamage(40);
	B.beRepaired(20);
	B.highFivesGuys();
	return (0);
}
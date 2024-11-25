#include "FragTrap.hpp"

int	main(void)
{
	FragTrap A("A");
	A.attack("B");
	FragTrap B("B");
	B.attack("A");
	B.takeDamage(40);
	B.beRepaired(20);
	return (0);
}
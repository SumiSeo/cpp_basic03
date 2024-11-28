#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap powder("Powder");
	ClapTrap vi("Vi");

	powder.attack("Vi");
	vi.takeDamage(5);
	vi.beRepaired(6);
	vi.attack("Powder");
	powder.takeDamage(3);
	powder.beRepaired(2);
	vi.attack("Powder");
	powder.takeDamage(3);
	vi.attack("Powder");
	powder.takeDamage(3);
	vi.attack("Powder");
	powder.takeDamage(3);
	vi.attack("Powder");
	powder.takeDamage(3);
	return (0);
}
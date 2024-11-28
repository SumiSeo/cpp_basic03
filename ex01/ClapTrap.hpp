#ifndef __CLAPTRAP__HPP
# define __CLAPTRAP__HPP

# include <cstring>
# include <iostream>

class ClapTrap
{
  protected:
	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;

  public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &original);
	ClapTrap &operator=(const ClapTrap &original);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif /*__CLAPTRAP__HPP*/
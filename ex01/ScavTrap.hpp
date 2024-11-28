#ifndef __SCAVTRAP__HPP
# define __SCAVTRAP__HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &original);
	ScavTrap &operator=(const ScavTrap &original);
	~ScavTrap(void);
	void attack(const std::string &target);
	void guardGate(void);
};

#endif /*SCAVTRAP__HPP*/

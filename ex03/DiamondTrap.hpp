#ifndef __DIAMONDTRAP__HPP
# define __DIAMONDTRAP__HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "iostream"

class DiamondTrap : public FragTrap, public ScavTrap
{
  private:
	std::string name;

  public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap &original);
	DiamondTrap &operator=(const DiamondTrap &original);
	void whoAmI();
};

#endif /*__DIAMONDTRAP__HPP*/
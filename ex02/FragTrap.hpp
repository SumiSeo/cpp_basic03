#ifndef __FRAGTRAP__
# define __FRAGTRAP__

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &original);
	FragTrap &operator=(const FragTrap &original);
	~FragTrap();
	void highFivesGuys(void);
};

#endif /*__FRAGTRAP*/

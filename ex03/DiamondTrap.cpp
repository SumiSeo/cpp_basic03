#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : name(ClapTrap::name)
{
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
};
DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->attack_damage = 30;
	std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
};
DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	this->name = original.name;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->attack_damage = original.attack_damage;
};
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &original)
{
	if (this != &original)
	{
		this->name = original.name;
		this->hit_points = original.hit_points;
		this->energy_points = original.energy_points;
		this->attack_damage = original.attack_damage;
	}
	std::cout << "DiamondTrap assignment operator " << this->name << " called" << std::endl;
	return (*this);
};
void DiamondTrap::whoAmI(void)
{
	std::cout << "Who am I function called" << std::endl;
	std::cout << "DiamondTrap NAME : " << this->name << std::endl;
	std::cout << "ClapTrap NAME : " << ClapTrap::name << std::endl;
};

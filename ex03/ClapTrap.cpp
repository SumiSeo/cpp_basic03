#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "Claptrap " << this->name << " constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "Claptrap " << this->name << " constructor called" << std::endl;
};
ClapTrap::~ClapTrap(void)
{
	std::cout << "Claptrap " << this->name << "  destructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &original)
{
	this->name = original.name;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->attack_damage = original.attack_damage;
};
ClapTrap &ClapTrap::operator=(const ClapTrap &original)
{
	if (this != &original)
	{
		this->name = original.name;
		this->attack_damage = original.attack_damage;
		this->hit_points = original.hit_points;
		this->energy_points = original.energy_points;
	}
	return (*this);
};
void ClapTrap::attack(const std::string &target)
{
	if (this->energy_points > 0)
	{
		this->energy_points -= -1;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " can not move" << std::endl;
};
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
		std::cout << "ClapTrap " << this->name << " can not died again" << std::endl;

	else
	{
		this->hit_points -= amount;
		std::cout << this->name << " was damaged causing " << amount << " points of damage !" << std::endl;
	}
};
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0)
	{
		this->energy_points -= -1;
		this->hit_points += amount;
		std::cout << "ClapTrap " << this->name << " was repaired " << amount << " points of damage !" << std::endl;
	}
};

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->name = "default";
	std::cout << "ScavTrap default constucrtor called" << std::endl;
};

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << this->name << " constucrtor called" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &original)
{
	this->name = original.name;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->attack_damage = original.attack_damage;
	std::cout << "ScavTrap " << this->name << "copy constucrtor called" << std::endl;
};
ScavTrap &ScavTrap::operator=(const ScavTrap &original)
{
	if (this != &original)
	{
		this->name = original.name;
		this->hit_points = original.hit_points;
		this->energy_points = original.energy_points;
		this->attack_damage = original.attack_damage;
	}
	std::cout << "ScavTrap" << this->name << "assignment operator called" << std::endl;
	return (*this);
};

void ScavTrap::attack(const std::string &target)
{
	if (this->energy_points > 0)
	{
		this->energy_points -= -1;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage !" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " can not move" << std::endl;
};
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is guard gating mode" << std::endl;
};

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}
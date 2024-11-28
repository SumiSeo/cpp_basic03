#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "Default";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;

	std::cout << "FragTrap default constucrtor called" << std::endl;
};
FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap " << this->name << " constucrtor called" << std::endl;
};
FragTrap::FragTrap(const FragTrap &original)
{
	this->name = original.name;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->attack_damage = original.attack_damage;
	std::cout << "FragTrap " << this->name << "copy constucrtor called" << std::endl;
};
FragTrap &FragTrap::operator=(const FragTrap &original)
{
	if (this != &original)
	{
		this->name = original.name;
		this->hit_points = original.hit_points;
		this->energy_points = original.energy_points;
		this->attack_damage = original.attack_damage;
	}
	std::cout << "FragTrap" << this->name << "assignment operator called" << std::endl;
	return (*this);
};
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
};

void FragTrap::highFivesGuys(void)
{
	std::cout << "Do you want to hign fives with me ?" << std::endl;
};

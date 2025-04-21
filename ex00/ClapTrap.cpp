#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "Constructor called for ClapTrap " << name << std::endl;
    this->name = name;
    this->hp = 10;
    this->pp = 10;
    this->damage = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called for ClapTrap " << other.name << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Copy assignment operator called for ClapTrap " << other.name << std::endl;
    if (this != &other) {
        name = other.name;
        hp = other.hp;
        pp = other.pp;
        damage = other.damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points!" << std::endl;
}
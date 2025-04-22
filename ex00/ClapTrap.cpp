#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hp(10), pp(10), damage(0) {
    std::cout << YELLOW << "Default constructor called for ClapTrap" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), pp(10), damage(0) {
    std::cout << YELLOW << "Constructor called for ClapTrap " << name << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << YELLOW << "Destructor called for ClapTrap " << name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << YELLOW << "Copy constructor called for ClapTrap " << other.name << RESET << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << YELLOW << "Copy assignment operator called for ClapTrap " << other.name << RESET << std::endl;
    if (this != &other) {
        name = other.name;
        hp = other.hp;
        pp = other.pp;
        damage = other.damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (hp == 0) {
        std::cout << RED << "ClapTrap " << name << " is dead and cannot attack!" << RESET << std::endl;
        return;
    }
    if (pp == 0 ) {
        std::cout << RED << "ClapTrap " << name << " has no PP left to attack!" << RESET << std::endl;
        return;
    }
    std::cout << BLUE << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << RESET << std::endl;
    pp--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "HP: " << hp << " " << "PP: " << pp << std::endl;
    if (hp == 0) {
        std::cout << RED << "ClapTrap " << name << " is already dead!" << RESET << std::endl;
        return;
    }
    if (amount >= hp) {
        std::cout << RED << "ClapTrap " << name << " takes " << amount << " points of damage and is now dead!" << RESET << std::endl;
        hp = 0;
        return;
    }
    std::cout << RED << "ClapTrap " << name << " takes " << amount << " points of damage!" << RESET << std::endl;
    hp -= amount;
    std::cout << "HP: " << hp << " " << "PP: " << pp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "HP: " << hp << " " << "PP: " << pp << std::endl;
    if (hp == 0) {
        std::cout << RED << "ClapTrap " << name << " is dead and cannot repair!" << RESET << std::endl;
        return;
    }
    if (pp == 0 ) {
        std::cout << RED << "ClapTrap " << name << " has no PP left to repair!" << RESET << std::endl;
        return;
    }
    std::cout << GREEN << "ClapTrap " << name << " repairs itself for " << amount << " points!" << RESET << std::endl;
    hp += amount;
    pp--;
    std::cout << "HP: " << hp << " " << "PP: " << pp << std::endl;
}
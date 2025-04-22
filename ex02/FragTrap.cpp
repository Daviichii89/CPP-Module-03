#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hp = 100;
    pp = 100;
    damage = 30;
    std::cout << YELLOW << "Default constructor called for FragTrap" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hp = 100;
    pp = 100;
    damage = 30;
    std::cout << YELLOW << "Constructor called for FragTrap " << name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << YELLOW << "Copy constructor called for FragTrap" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << YELLOW << "Copy assignment operator called FragTrap" << RESET << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << YELLOW << "Destructor called for ScavTrap " << name << RESET << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "HP: " << hp << " " << "PP: " << pp << std::endl;
    if (hp > 0) {
        std::cout << BLUE << "FragTrap " << name << " is requesting a high five!" << RESET << std::endl;
    } else {
        std::cout << RED << "FragTrap " << name << " is dead and cannot request a high five!" << RESET << std::endl;
    }
}
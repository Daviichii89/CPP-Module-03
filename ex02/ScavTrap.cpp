#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    hp = 100;
    pp = 50;
    damage = 20;
    std::cout << YELLOW << "Default constructor called for ScavTrap" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hp = 100;
    pp = 50;
    damage = 20;
    std::cout << YELLOW << "Constructor called for ScavTrap " << name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << YELLOW << "Copy constructor called for ScavTrap " << name << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << YELLOW << "Copy assignment operator called for ScavTrap " << name << RESET << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << YELLOW << "Destructor called for ScavTrap " << name << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hp == 0) {
        std::cout << RED << "ScavTrap " << name << " is dead and cannot attack!" << RESET << std::endl;
        return;
    }
    if (pp == 0 ) {
        std::cout << RED << "ScavTrap " << name << " has no PP left to attack!" << RESET << std::endl;
        return;
    }
    std::cout << BLUE << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage! It's a critical" << RESET << std::endl;
    pp--;
}

void ScavTrap::guardGate() {
    if (hp > 0) {
        std::cout << BLUE << "ScavTrap " << name << " is now in Gate Keeper mode!" << RESET << std::endl;
    } else {
        std::cout << BLUE << "ScavTrap " << name << " is dead and cannot enter Gate Keeper mode!" << RESET << std::endl;
    }
}
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("Bonifacio");
    std::cout << "Se crea clase claptrap" << std::endl;
    ScavTrap scavtrap("Eustaquio");
    std::cout << "Se crea clase scavtrap" << std::endl;

    ClapTrap claptrap2(claptrap);
    std::cout << "Se copia clase claptrap" << std::endl;
    ScavTrap scavtrap2(scavtrap);
    std::cout << "Se copia clase claptrap" << std::endl;

    ClapTrap claptrap3;
    ScavTrap scavtrap3;

    claptrap3 = claptrap;
    std::cout << "Se asigna clase claptrap" << std::endl;
    scavtrap3 = scavtrap;
    std::cout << "Se asigna clase scavtrap" << std::endl;

    claptrap.attack("Eustaquio");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    scavtrap.attack("Bonifacio");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(3);
    scavtrap.guardGate();
    claptrap.attack("Eustaquio");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Eustaquio");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Eustaquio");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    return 0;
}
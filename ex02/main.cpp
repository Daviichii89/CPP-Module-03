#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap claptrap("Bonifacio");
    std::cout << "Se crea clase claptrap" << std::endl;
    ScavTrap scavtrap("Eustaquio");
    std::cout << "Se crea clase scavtrap" << std::endl;

    ScavTrap scavtrap2(scavtrap);
    std::cout << "Se copia clase scavtrap" << std::endl;

    ScavTrap scavtrap3;
    scavtrap3 = scavtrap;
    std::cout << "Se asigna clase scavtrap" << std::endl;

    std::cout << "\n==============================\n" << std::endl;
    FragTrap fragtrap("Rigoberto");
    std::cout << "Se crea clase fragtrap" << std::endl;

    FragTrap fragtrap2(fragtrap);
    std::cout << "Se copia clase fragtrap" << std::endl;

    FragTrap fragtrap3;
    fragtrap3 = fragtrap;
    std::cout << "Se asigna clase fragtrap" << std::endl;

    std::cout << "\n==============================\n" << std::endl;

    claptrap.attack("Eustaquio");
    scavtrap2.attack("Bonifacio");
    fragtrap2.attack("Rigoberto");
    fragtrap2.takeDamage(5);
    fragtrap2.takeDamage(96);
    fragtrap2.highFivesGuys();
    
    return 0;
}
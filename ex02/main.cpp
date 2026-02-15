#include "FragTrap.hpp"

int main( void ) {

    FragTrap ft0;
    FragTrap ft1("Jeremy");
    FragTrap ft2(ft1);
    FragTrap ft3("Hideo");
    FragTrap ft4("Rick");

    ft3 = ft2;

    ft0.beRepaired(0);
    ft1.beRepaired(0);
    ft2.beRepaired(0);
    ft3.beRepaired(0);
    ft4.beRepaired(0);

    ft1.attack("Rick");
    ft4.takeDamage(30);

    ft1.highFivesGuys();
}

#include "ScavTrap.hpp"

int main( void ) {

    ScavTrap st0;
    ScavTrap st1("Abrams");
    ScavTrap st2(st1);
    ScavTrap st3("Steven");
    ScavTrap st4("Boris");

    st3 = st2;

    st0.beRepaired(0);
    st1.beRepaired(0);
    st2.beRepaired(0);
    st3.beRepaired(0);
    st4.beRepaired(0);

    st1.attack("Boris");
    st4.takeDamage(20);

    st1.guardGate();
}

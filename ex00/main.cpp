#include "ClapTrap.hpp"

int main(){

    ClapTrap ct0;
    ClapTrap ct1("Bolt");
    ClapTrap ct2(ct1);
    ClapTrap ct3("Harry");
    ClapTrap ct4("Thunder");

    ct3 = ct2;

    ct0.beRepaired(0);
    ct1.beRepaired(0);
    ct2.beRepaired(0);
    ct3.beRepaired(0);
    ct4.beRepaired(0);

    ct1.attack("Thunder");
    ct4.takeDamage(0);
}

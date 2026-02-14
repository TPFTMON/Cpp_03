#include "ScavTrap.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
ScavTrap::ScavTrap() : ClapTrap(){

    std::cout << DEF_CONSTR_MSG << SCAVTRAP_MSG << "\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){    // as we want to pass the name from ClapTrap to ScavTrap constructor we indicate it here

    std::cout << STR_CONSTR_MSG << SCAVTRAP_MSG << "\n";

    this->_hitPoints = hit_points_st;
    this->_energyPoints = energy_points_st;
    this->_attackPower = attack_power_st;
}

ScavTrap::ScavTrap(const ScavTrap &to_copy) : ClapTrap(to_copy){

    std::cout << COPY_CONSTR_MSG << SCAVTRAP_MSG << "\n";
}


// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &other){

    std::cout << COPY_ASSIGN_OP_MSG << SCAVTRAP_MSG << "\n";

    if (this != &other){
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap(){

    std::cout << DESTR_MSG << SCAVTRAP_MSG << "\n";
}



// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void ScavTrap::attack(const std::string &target){

    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackPower << " points of damage!\n";
}

// unique for ScavTrap:
void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode. Beware!\n";
}

// void ScavTrap::takeDamage(unsigned int amount){

//     std::cout << "ScavTrap " << this->_name << " has taken " << amount << " points of damage!\n";
// }

// void ScavTrap::beRepaired(unsigned int amount){

//     std::cout << "ScavTrap " << this->_name << " has repaired " << amount << " of their hit points!\n";
// }

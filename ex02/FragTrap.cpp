#include "FragTrap.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
FragTrap::FragTrap() : ClapTrap(){

    std::cout << DEF_CONSTR_MSG << FRAGTRAP_MSG << "\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){

    std::cout << STR_CONSTR_MSG << FRAGTRAP_MSG << "\n";

    this->_hitPoints = hit_points_st;
    this->_energyPoints = energy_points_st;
    this->_attackPower = attack_power_st;
}

FragTrap::FragTrap(const FragTrap &to_copy) : ClapTrap(to_copy){

    std::cout << COPY_CONSTR_MSG << FRAGTRAP_MSG << "\n";
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &other){

    std::cout << COPY_ASSIGN_OP_MSG << FRAGTRAP_MSG << "\n";

    if (this != &other){
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destructor
FragTrap::~FragTrap(){

    std::cout << DESTR_MSG << FRAGTRAP_MSG << "\n";
}



// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void FragTrap::highFivesGuys(){

    std::cout << "FragTrap " << this->_name << " High Fives every Clap, Scav and Frag Trap in 2 meter radius!\n";
}


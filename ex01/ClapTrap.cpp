#include "ClapTrap.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(HIT_POINTS), _energyPoints(ENERGY_POINTS), _attackPower(ATTACK_POWER)
{

    std::cout << DEF_CONSTR_CLP_MSG << CLAPTRAP_MSG << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &to_copy){

    std::cout << COPY_CONSTR_CLP_MSG << CLAPTRAP_MSG << "\n";

    this->_name = to_copy._name;
    this->_hitPoints = to_copy._hitPoints;
    this->_energyPoints = to_copy._energyPoints;
    this->_attackPower = to_copy._attackPower;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &other){

    std::cout << COPY_ASSIGN_OP_CLP_MSG << CLAPTRAP_MSG << "\n";

    if (this != &other){
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackPower = other._attackPower;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap(){

    std::cout << DESTR_CLP_MSG << CLAPTRAP_MSG << "\n";
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void ClapTrap::attack(const std::string &target){

    if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
        return ;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackPower << " points of damage!\n";
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){

    std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount){

    if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
        return ;
    std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " of their hit points!\n";
    this->_energyPoints--;
}

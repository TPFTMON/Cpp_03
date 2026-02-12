#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

// Macros:
# define HIT_POINTS (unsigned int)10
# define ENERGY_POINTS (unsigned int)10
# define ATTACK_POWER (unsigned int)0

// Messages:
# define CLAPTRAP_MSG "\e[0;32mClapTrap\e[0m"

# define DEF_CONSTR_CLP_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_CLP_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_CLP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_CLP_MSG "\e[0;31mDestructor\e[0m called of "
// # define MSG_CLP ""
// # define MSG_CLP ""

// Class implementations:
class ClapTrap {

    private:
        std::string  _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackPower;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap& operator=(const ClapTrap &assign);
        ~ClapTrap();

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

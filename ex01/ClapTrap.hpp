#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

// Messages:
# define CLAPTRAP_MSG "\e[0;32mClapTrap\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define STR_CONSTR_MSG "\e[0;33mString Parameter Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "

// Class implementations:
class ClapTrap {

    // ClapTrap variables:
    static const int hit_points_clp = 10;
    static const int energy_points_clp = 10;
    static const int attack_power_clp = 0;

    protected:                      // 'protected' is used here instead of 'private' to allow the Children of the ClapTrap class to change the variables (_name, _hitPoints etc.)
        std::string  _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackPower;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &to_copy);
        ClapTrap& operator=(const ClapTrap &assign);
        ~ClapTrap();

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

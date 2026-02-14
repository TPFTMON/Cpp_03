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

    private:
        std::string  _name;
        int _hitPoints;
        int _energyPoints;
        int _attackPower;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap& operator=(const ClapTrap &assign);
        ~ClapTrap();                                // should be virtual (?)

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

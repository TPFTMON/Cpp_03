#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// Messages:
# define SCAVTRAP_MSG "\e[0;32mScavTrap\e[0m"

// Class Implementations:
class ScavTrap : public ClapTrap{

    // ScavTrap variables:
    static const int hit_points_st = 100;
    static const int energy_points_st = 50;
    static const int attack_power_st = 20;

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &to_copy);
        ScavTrap& operator=(const ScavTrap &assign);
        ~ScavTrap();

        void attack(const std::string &target);

        // absolutely unique for ScavTrap methods:
        void guardGate();
};

#endif

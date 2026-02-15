#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

// Messages:
# define FRAGTRAP_MSG "\e[0;32mFragTrap\e[0m"

// Class Implementations:
class FragTrap : public ClapTrap{

    // FragTrap variables:
    static const int hit_points_st = 100;
    static const int energy_points_st = 100;
    static const int attack_power_st = 30;

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &to_copy);
        FragTrap& operator=(const FragTrap &assign);
        ~FragTrap();

        // absolutely unique for FragTrap methods:
        void highFivesGuys(void);
};

#endif


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	//ClapTrap C("Fedir");
	FragTrap F("Fedir2");
	F.annonce();
	F.highFivesGuys();
	
	// ClapTrap clap("Clappy");

    // clap.attack("Enemy");
    // clap.takeDamage(5);
    // clap.beRepaired(3);
    // clap.annonce();

    // clap.takeDamage(10);  // 
    // clap.attack("Enemy"); // 
    // clap.beRepaired(5);   //

    // ScavTrap scav("Scavvy");

    // scav.attack("Enemy");
    // scav.takeDamage(50);
    // scav.beRepaired(20);
    // scav.annonce();

    // Вызов специальной способности ScavTrap
	//scav.guardGate();

    // scav.takeDamage(100);
    // scav.attack("Enemy");
    // scav.beRepaired(50);

    return 0;
}



// int main()
// {
// 	ClapTrap Vova("Vova");
// 	ClapTrap Sergii("Sergii");
// 	ScavTrap Andrey("Andrey");

// 	Vova.takeDamage(3);
// 	Vova.annonce();

// 	Sergii.attack("Vova");
// 	Vova.beRepaired(2);
// 	Vova.attack("Sergii");
// 	Vova.attack("Sergii");
// 	Andrey.beRepaired(5);
// 	Andrey.takeDamage(9);
// 	Andrey.annonce();
// 	Vova.takeDamage(9);

// 	return 0;
// }

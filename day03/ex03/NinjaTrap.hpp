/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 15:57:51 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 15:58:49 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {

public:
    //Constructors
    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);

    //operator overloads
	NinjaTrap & operator=(NinjaTrap const & src);

    unsigned int ninjaShoebox(NinjaTrap const & ninja) const;
    unsigned int ninjaShoebox(FragTrap & frag) const;
    unsigned int ninjaShoebox(ScavTrap const & scav) const;
    unsigned int ninjaShoebox(ClapTrap const & clap) const;

private:

protected:

};

#endif

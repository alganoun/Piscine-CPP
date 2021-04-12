#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap()
{
}

NinjaTrap::NinjaTrap( const NinjaTrap & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap &				NinjaTrap::operator=( NinjaTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
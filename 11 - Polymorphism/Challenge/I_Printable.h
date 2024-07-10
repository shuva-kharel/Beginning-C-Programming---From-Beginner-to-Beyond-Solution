#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_

#include <iostream>

class I_Printable
{
	friend std::ostream& operator<<(std::ostream, const I_Printable& account);
public:
	virtual void print(I_Printable& account);
};

#endif // !_I_PRINTABLE_H_
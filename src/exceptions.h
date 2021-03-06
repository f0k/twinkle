/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

/**
 * @file
 * Exceptions.
 */
 
#ifndef _EXCEPTIONS_H
#define _EXCEPTIONS_H

#include <exception>

/** Exception tupe. */
enum t_exception {
	X_DIALOG_ALREADY_ESTABLISHED,	/**< Dialog is already established. */
	X_WRONG_STATE			/**< State machine is in wrong state. */
};

class empty_list_exception : public std::exception {
};

#endif

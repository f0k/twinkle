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

#include "hdr_accept_encoding.h"
#include "definitions.h"

t_hdr_accept_encoding::t_hdr_accept_encoding() : t_header("Accept-Encoding") {};

void t_hdr_accept_encoding::add_coding(const t_coding &coding) {
	populated = true;
	coding_list.push_back(coding);
}

string t_hdr_accept_encoding::encode_value(void) const {
	string s;

	if (!populated) return s;

	for (list<t_coding>::const_iterator i = coding_list.begin();
	     i != coding_list.end(); i++)
	{
		if (i != coding_list.begin()) s += ",";
		s += i->encode();
	}

	return s;
}

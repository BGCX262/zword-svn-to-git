/*
 * ZWord : Flexible Multi Languanges Dictionary
 * Copyright (C) 2011-2011 Edi Ermawan <edi.ermawan@gmail.Com>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */

#include "zword_01.h"
#include <QtGui/QApplication>

#include <fstream>

struct LData{
	char* tittle;
	char* file;
	char* from;
	char* to;
	char* uid;
};


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Zword_01 w;
	w.show();
	return a.exec();
}

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

#ifndef _Z_WORD_HIGHLIGHTER
#define _Z_WORD_HIGHLIGHTER

 #include <QSyntaxHighlighter>

 #include <QHash>
 #include <QTextCharFormat>

class WordHL: public QSyntaxHighlighter
{
	Q_OBJECT
 public:
     WordHL(QTextDocument *parent = 0);

 protected:
     void highlightBlock(const QString &text);

 private:
		struct HighlightingRule
		{
		 QRegExp pattern;
		 QTextCharFormat format;
		};
		QVector<HighlightingRule> highlightingRules;

		QTextCharFormat kb_format;
		QTextCharFormat kkt_format;
		QTextCharFormat ks_format;
		QTextCharFormat kki_format;
		QTextCharFormat inf_format;
		QTextCharFormat SI_format;
 };


#endif
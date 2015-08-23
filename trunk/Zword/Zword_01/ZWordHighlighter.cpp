#include "ZWordHighLighter.h"


 WordHL::WordHL(QTextDocument *parent): QSyntaxHighlighter(parent)
 {
	kb_format.setForeground(Qt::magenta);
	kb_format.setFontWeight(QFont::Bold);
	QString str1="\\bkb\\b";
	HighlightingRule rule1;
	rule1.pattern=QRegExp(str1);
	rule1.format=kb_format;
	highlightingRules.append(rule1);

	kkt_format.setForeground(Qt::magenta);
	kkt_format.setFontWeight(QFont::Bold);
	QString str2="\\bkkt\\b";
	HighlightingRule rule2;
	rule2.pattern=QRegExp(str2);
	rule2.format=kkt_format;
	highlightingRules.append(rule2);

	ks_format.setForeground(Qt::red);
	ks_format.setFontWeight(QFont::Bold);
	QString str3="\\bks\\b";
	HighlightingRule rule3;
	rule3.pattern=QRegExp(str3);
	rule3.format=ks_format;
	highlightingRules.append(rule3);

	kki_format.setForeground(Qt::green);
	kki_format.setFontWeight(QFont::Bold);
	QString str4="\\bkki\\b";
	HighlightingRule rule4;
	rule4.pattern=QRegExp(str4);
	rule4.format=kki_format;
	highlightingRules.append(rule4);

	inf_format.setForeground(Qt::blue);
	inf_format.setFontWeight(QFont::Bold);
	QString str5="\\binf\\b";
	HighlightingRule rule5;
	rule5.pattern=QRegExp(str5);
	rule5.format=inf_format;
	highlightingRules.append(rule5);

	SI_format.setForeground(Qt::darkRed);
	SI_format.setFontWeight(QFont::Bold);
	QString str6="\\bSI\\b";
	HighlightingRule rule6;
	rule6.pattern=QRegExp(str6);
	rule6.format=SI_format;
	highlightingRules.append(rule6);
}

void WordHL::highlightBlock(const QString &text)
{
	foreach (const HighlightingRule &rule, highlightingRules) 
	{
         QRegExp expression(rule.pattern);
         int index = expression.indexIn(text);
         while (index >= 0) 
		 {
             int length = expression.matchedLength();
             setFormat(index, length, rule.format);
             index = expression.indexIn(text, index + length);
         }
	}
}
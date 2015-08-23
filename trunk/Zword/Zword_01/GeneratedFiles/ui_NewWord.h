/********************************************************************************
** Form generated from reading ui file 'NewWord.ui'
**
** Created: Thu Feb 24 00:49:31 2011
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NEWWORD_H
#define UI_NEWWORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QTextEdit *TextEditNewWords;
    QPushButton *pushButtonTittle;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *LineEditFileName;
    QPushButton *pbExecute2;
    QPushButton *pbExecute1;
    QPushButton *pushButtonClose;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(360, 381);
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        TextEditNewWords = new QTextEdit(Frame);
        TextEditNewWords->setObjectName(QString::fromUtf8("TextEditNewWords"));
        TextEditNewWords->setGeometry(QRect(8, 60, 341, 175));
        pushButtonTittle = new QPushButton(Frame);
        pushButtonTittle->setObjectName(QString::fromUtf8("pushButtonTittle"));
        pushButtonTittle->setGeometry(QRect(8, 6, 341, 31));
        label = new QLabel(Frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(14, 40, 81, 16));
        label_2 = new QLabel(Frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(12, 272, 163, 16));
        LineEditFileName = new QLineEdit(Frame);
        LineEditFileName->setObjectName(QString::fromUtf8("LineEditFileName"));
        LineEditFileName->setGeometry(QRect(8, 290, 341, 29));
        pbExecute2 = new QPushButton(Frame);
        pbExecute2->setObjectName(QString::fromUtf8("pbExecute2"));
        pbExecute2->setGeometry(QRect(10, 322, 97, 29));
        pbExecute1 = new QPushButton(Frame);
        pbExecute1->setObjectName(QString::fromUtf8("pbExecute1"));
        pbExecute1->setGeometry(QRect(8, 238, 97, 29));
        pushButtonClose = new QPushButton(Frame);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(264, 348, 85, 25));

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Add new word", 0, QApplication::UnicodeUTF8));
        Frame->setStyleSheet(QApplication::translate("Frame", ".QWidget {\n"
"	font: 8pt \"Microsoft Sans Serif\";\n"
"   background-color: beige;\n"
"}\n"
"\n"
"/* Nice Windows-XP-style password character. */\n"
"QLineEdit[echoMode=\"2\"] {\n"
"    lineedit-password-character: 9679;\n"
"}\n"
"\n"
"/* We provide a min-width and min-height for push buttons\n"
"   so that they look elegant regardless of the width of the text. */\n"
"QPushButton {\n"
"    background-color: palegoldenrod;\n"
"    border-width: 2px;\n"
"    border-color: darkkhaki;\n"
"    border-style: solid;\n"
"    border-radius: 5;\n"
"    padding: 3px;\n"
"    min-width: 9ex;\n"
"    min-height: 2.5ex;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: khaki;\n"
"}\n"
"\n"
"/* Increase the padding, so the text is shifted when the button is\n"
"   pressed. */\n"
"QPushButton:pressed {\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"    background-color: #d0d67c;\n"
"}\n"
"\n"
"QLabel, QAbstractButton {\n"
"    font: bold;\n"
"}\n"
"\n"
"/* Mark mandatory fields with a brownish color. */\n"
""
                        ".mandatory {\n"
"    color: brown;\n"
"}\n"
"\n"
"/* Bold text on status bar looks awful. */\n"
"QStatusBar QLabel {\n"
"   font: normal;\n"
"}\n"
"\n"
"QStatusBar::item {\n"
"    border-width: 1;\n"
"    border-color: darkkhaki;\n"
"    border-style: solid;\n"
"    border-radius: 2;\n"
"}\n"
"\n"
"QComboBox, QLineEdit, QSpinBox, QTextEdit, QListView {\n"
"    background-color: cornsilk;\n"
"    selection-color: #0a214c; \n"
"    selection-background-color: #C19A6B;\n"
"}\n"
"\n"
"QListView {\n"
"    show-decoration-selected: 1;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background-color: wheat;\n"
"}\n"
"\n"
"/* We reserve 1 pixel space in padding. When we get the focus,\n"
"   we kill the padding and enlarge the border. This makes the items\n"
"   glow. */\n"
"QLineEdit, QFrame {\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border-color: darkkhaki;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* As mentioned above, eliminate the padding and increase the border. */\n"
""
                        "QLineEdit:focus, QFrame:focus {\n"
"    border-width: 3px;\n"
"    padding: 0px;\n"
"}\n"
"\n"
"/* A QLabel is a QFrame ... */\n"
"QLabel {\n"
"    border: none;\n"
"    padding: 0;\n"
"    background: none;\n"
"}\n"
"\n"
"/* A QToolTip is a QLabel ... */\n"
"QToolTip {\n"
"    border: 2px solid darkkhaki;\n"
"    padding: 5px;\n"
"    border-radius: 3px;\n"
"    opacity: 200;\n"
"}\n"
"\n"
"/* Nice to have the background color change when hovered. */\n"
"QRadioButton:hover, QCheckBox:hover {\n"
"    background-color: wheat;\n"
"}\n"
"\n"
"/* Force the dialog's buttons to follow the Windows guidelines. */\n"
"QDialogButtonBox {\n"
"    button-layout: 0;\n"
"}\n"
"\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        pushButtonTittle->setText(QApplication::translate("Frame", "Indonesian-English", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Frame", "direct input:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Frame", "file input (input file path)", 0, QApplication::UnicodeUTF8));
        pbExecute2->setText(QApplication::translate("Frame", "Execute", 0, QApplication::UnicodeUTF8));
        pbExecute1->setText(QApplication::translate("Frame", "Execute", 0, QApplication::UnicodeUTF8));
        pushButtonClose->setText(QApplication::translate("Frame", "Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Frame);
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWORD_H

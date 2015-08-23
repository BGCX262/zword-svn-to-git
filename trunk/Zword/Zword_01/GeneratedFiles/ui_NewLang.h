/********************************************************************************
** Form generated from reading ui file 'NewLang.ui'
**
** Created: Thu Feb 24 00:49:31 2011
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NEWLANG_H
#define UI_NEWLANG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FrameNewLang
{
public:
    QPushButton *pushButtonClose;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonDel;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QFrame *FrameNewLang)
    {
        if (FrameNewLang->objectName().isEmpty())
            FrameNewLang->setObjectName(QString::fromUtf8("FrameNewLang"));
        FrameNewLang->resize(358, 379);
        FrameNewLang->setFrameShape(QFrame::StyledPanel);
        FrameNewLang->setFrameShadow(QFrame::Raised);
        pushButtonClose = new QPushButton(FrameNewLang);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(138, 348, 85, 25));
        groupBox = new QGroupBox(FrameNewLang);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(8, 2, 343, 203));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(104, 48, 227, 27));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(104, 138, 227, 27));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(18, 46, 55, 29));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(104, 18, 227, 27));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(104, 108, 227, 27));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 106, 55, 29));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 136, 55, 29));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(136, 170, 81, 27));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(18, 76, 55, 29));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(104, 78, 227, 27));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(18, 18, 55, 29));
        groupBox_2 = new QGroupBox(FrameNewLang);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(6, 206, 345, 105));
        pushButtonDel = new QPushButton(groupBox_2);
        pushButtonDel->setObjectName(QString::fromUtf8("pushButtonDel"));
        pushButtonDel->setGeometry(QRect(136, 70, 81, 27));
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(4, 38, 333, 27));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(6, 18, 337, 16));
        label_7 = new QLabel(FrameNewLang);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(12, 322, 333, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_7->setFont(font);

        retranslateUi(FrameNewLang);

        QMetaObject::connectSlotsByName(FrameNewLang);
    } // setupUi

    void retranslateUi(QFrame *FrameNewLang)
    {
        FrameNewLang->setWindowTitle(QApplication::translate("FrameNewLang", "Add New Dictionary", 0, QApplication::UnicodeUTF8));
        FrameNewLang->setStyleSheet(QApplication::translate("FrameNewLang", ".QWidget {\n"
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
"}", 0, QApplication::UnicodeUTF8));
        pushButtonClose->setText(QApplication::translate("FrameNewLang", "Close", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FrameNewLang", "Add New Dictionary", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrameNewLang", "Filename", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FrameNewLang", "To", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FrameNewLang", "ID", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FrameNewLang", "Create", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FrameNewLang", "From", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrameNewLang", "Tittle", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FrameNewLang", "Delete Dictionary", 0, QApplication::UnicodeUTF8));
        pushButtonDel->setText(QApplication::translate("FrameNewLang", "Delete", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FrameNewLang", "Enter Dictionary name,ex: \"English-Indonesian\" (no quote)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FrameNewLang", "...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FrameNewLang);
    } // retranslateUi

};

namespace Ui {
    class FrameNewLang: public Ui_FrameNewLang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLANG_H

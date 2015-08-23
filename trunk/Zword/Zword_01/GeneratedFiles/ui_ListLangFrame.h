/********************************************************************************
** Form generated from reading ui file 'ListLangFrame.ui'
**
** Created: Thu Feb 24 00:49:31 2011
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LISTLANGFRAME_H
#define UI_LISTLANGFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FrameListLang
{
public:
    QListView *LangList;
    QPushButton *pushButtonClose;

    void setupUi(QFrame *FrameListLang)
    {
        if (FrameListLang->objectName().isEmpty())
            FrameListLang->setObjectName(QString::fromUtf8("FrameListLang"));
        FrameListLang->resize(359, 380);
        FrameListLang->setFrameShape(QFrame::StyledPanel);
        FrameListLang->setFrameShadow(QFrame::Raised);
        LangList = new QListView(FrameListLang);
        LangList->setObjectName(QString::fromUtf8("LangList"));
        LangList->setGeometry(QRect(80, 54, 195, 217));
        pushButtonClose = new QPushButton(FrameListLang);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(260, 346, 85, 25));

        retranslateUi(FrameListLang);

        QMetaObject::connectSlotsByName(FrameListLang);
    } // setupUi

    void retranslateUi(QFrame *FrameListLang)
    {
        FrameListLang->setWindowTitle(QApplication::translate("FrameListLang", "Frame", 0, QApplication::UnicodeUTF8));
        FrameListLang->setStyleSheet(QApplication::translate("FrameListLang", ".QWidget {\n"
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
"", 0, QApplication::UnicodeUTF8));
        pushButtonClose->setText(QApplication::translate("FrameListLang", "Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FrameListLang);
    } // retranslateUi

};

namespace Ui {
    class FrameListLang: public Ui_FrameListLang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTLANGFRAME_H

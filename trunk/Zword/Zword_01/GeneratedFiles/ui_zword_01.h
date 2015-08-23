/********************************************************************************
** Form generated from reading ui file 'zword_01.ui'
**
** Created: Thu Feb 24 00:49:31 2011
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ZWORD_01_H
#define UI_ZWORD_01_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Zword_01Class
{
public:
    QAction *action;
    QAction *actionListItemClicked;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButtonViewLang;
    QTextEdit *TextResult;
    QPushButton *ButtonTranslate;
    QTextEdit *textEdit_3;
    QListView *listView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButtonSetting;
    QPushButton *pushButtonNewLang;
    QPushButton *pushButtonAddNewWord;
    QLineEdit *TextInput;

    void setupUi(QMainWindow *Zword_01Class)
    {
        if (Zword_01Class->objectName().isEmpty())
            Zword_01Class->setObjectName(QString::fromUtf8("Zword_01Class"));
        Zword_01Class->resize(363, 383);
        action = new QAction(Zword_01Class);
        action->setObjectName(QString::fromUtf8("action"));
        actionListItemClicked = new QAction(Zword_01Class);
        actionListItemClicked->setObjectName(QString::fromUtf8("actionListItemClicked"));
        centralWidget = new QWidget(Zword_01Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(192, 6, 121, 29));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(7);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButtonViewLang = new QPushButton(centralWidget);
        pushButtonViewLang->setObjectName(QString::fromUtf8("pushButtonViewLang"));
        pushButtonViewLang->setGeometry(QRect(316, 6, 45, 29));
        TextResult = new QTextEdit(centralWidget);
        TextResult->setObjectName(QString::fromUtf8("TextResult"));
        TextResult->setGeometry(QRect(132, 40, 227, 197));
        ButtonTranslate = new QPushButton(centralWidget);
        ButtonTranslate->setObjectName(QString::fromUtf8("ButtonTranslate"));
        ButtonTranslate->setGeometry(QRect(140, 6, 49, 29));
        ButtonTranslate->setFont(font);
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(2, 240, 357, 109));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(2, 40, 127, 197));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(2, 352, 355, 30));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setMargin(11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButtonSetting = new QPushButton(horizontalLayoutWidget);
        pushButtonSetting->setObjectName(QString::fromUtf8("pushButtonSetting"));

        horizontalLayout->addWidget(pushButtonSetting);

        pushButtonNewLang = new QPushButton(horizontalLayoutWidget);
        pushButtonNewLang->setObjectName(QString::fromUtf8("pushButtonNewLang"));

        horizontalLayout->addWidget(pushButtonNewLang);

        pushButtonAddNewWord = new QPushButton(horizontalLayoutWidget);
        pushButtonAddNewWord->setObjectName(QString::fromUtf8("pushButtonAddNewWord"));

        horizontalLayout->addWidget(pushButtonAddNewWord);

        TextInput = new QLineEdit(centralWidget);
        TextInput->setObjectName(QString::fromUtf8("TextInput"));
        TextInput->setGeometry(QRect(2, 6, 135, 29));
        Zword_01Class->setCentralWidget(centralWidget);

        retranslateUi(Zword_01Class);
        QObject::connect(ButtonTranslate, SIGNAL(clicked()), action, SLOT(trigger()));
        QObject::connect(listView, SIGNAL(clicked(QModelIndex)), actionListItemClicked, SLOT(trigger()));

        QMetaObject::connectSlotsByName(Zword_01Class);
    } // setupUi

    void retranslateUi(QMainWindow *Zword_01Class)
    {
        Zword_01Class->setWindowTitle(QApplication::translate("Zword_01Class", "ZWord", 0, QApplication::UnicodeUTF8));
        Zword_01Class->setStyleSheet(QString());
        action->setText(QApplication::translate("Zword_01Class", "TranslateAction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action->setToolTip(QApplication::translate("Zword_01Class", "test", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionListItemClicked->setText(QApplication::translate("Zword_01Class", "ListItemClicked", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Zword_01Class", "English-Indonesian", 0, QApplication::UnicodeUTF8));
        pushButtonViewLang->setText(QApplication::translate("Zword_01Class", "(+)", 0, QApplication::UnicodeUTF8));
        ButtonTranslate->setText(QApplication::translate("Zword_01Class", "Search", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Zword_01Class", "+zword", 0, QApplication::UnicodeUTF8));
        pushButtonSetting->setText(QApplication::translate("Zword_01Class", "+setting", 0, QApplication::UnicodeUTF8));
        pushButtonNewLang->setText(QApplication::translate("Zword_01Class", "+lang", 0, QApplication::UnicodeUTF8));
        pushButtonAddNewWord->setText(QApplication::translate("Zword_01Class", "+word", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Zword_01Class);
    } // retranslateUi

};

namespace Ui {
    class Zword_01Class: public Ui_Zword_01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZWORD_01_H

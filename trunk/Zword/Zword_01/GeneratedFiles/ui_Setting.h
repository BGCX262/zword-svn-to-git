/********************************************************************************
** Form generated from reading ui file 'Setting.ui'
**
** Created: Thu Feb 24 00:49:31 2011
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameSetting
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *CBMonitorClipBoard;
    QCheckBox *CBAlwaysOnTop;
    QLabel *label;
    QListView *ListViewStyle;
    QLabel *label_2;
    QSlider *SliderTransparancy;
    QPushButton *pushButtonClose;

    void setupUi(QFrame *FrameSetting)
    {
        if (FrameSetting->objectName().isEmpty())
            FrameSetting->setObjectName(QString::fromUtf8("FrameSetting"));
        FrameSetting->resize(361, 382);
        FrameSetting->setFrameShape(QFrame::StyledPanel);
        FrameSetting->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(FrameSetting);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 12, 341, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        CBMonitorClipBoard = new QCheckBox(verticalLayoutWidget);
        CBMonitorClipBoard->setObjectName(QString::fromUtf8("CBMonitorClipBoard"));

        verticalLayout->addWidget(CBMonitorClipBoard);

        CBAlwaysOnTop = new QCheckBox(verticalLayoutWidget);
        CBAlwaysOnTop->setObjectName(QString::fromUtf8("CBAlwaysOnTop"));

        verticalLayout->addWidget(CBAlwaysOnTop);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        ListViewStyle = new QListView(verticalLayoutWidget);
        ListViewStyle->setObjectName(QString::fromUtf8("ListViewStyle"));
        ListViewStyle->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(ListViewStyle);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        SliderTransparancy = new QSlider(verticalLayoutWidget);
        SliderTransparancy->setObjectName(QString::fromUtf8("SliderTransparancy"));
        SliderTransparancy->setSingleStep(1);
        SliderTransparancy->setValue(99);
        SliderTransparancy->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(SliderTransparancy);

        pushButtonClose = new QPushButton(verticalLayoutWidget);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));

        verticalLayout->addWidget(pushButtonClose);


        retranslateUi(FrameSetting);

        QMetaObject::connectSlotsByName(FrameSetting);
    } // setupUi

    void retranslateUi(QFrame *FrameSetting)
    {
        FrameSetting->setWindowTitle(QApplication::translate("FrameSetting", "Zword setting", 0, QApplication::UnicodeUTF8));
        FrameSetting->setStyleSheet(QApplication::translate("FrameSetting", "\n"
"#FrameSetting QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"#FrameSetting QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"#FrameSetting QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"", 0, QApplication::UnicodeUTF8));
        CBMonitorClipBoard->setText(QApplication::translate("FrameSetting", "Monitor Clipboard", 0, QApplication::UnicodeUTF8));
        CBAlwaysOnTop->setText(QApplication::translate("FrameSetting", "Always On Top", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrameSetting", "Application Style", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrameSetting", "Transparancy", 0, QApplication::UnicodeUTF8));
        pushButtonClose->setText(QApplication::translate("FrameSetting", " Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FrameSetting);
    } // retranslateUi

};

namespace Ui {
    class FrameSetting: public Ui_FrameSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H

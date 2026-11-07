#include "mainwindow.h"
#include <QLabel>
#include <QIcon>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(400, 350);
    setWindowTitle("Форма регистрации");
    setWindowIcon(QIcon(":/ii.jpeg"));
    QLabel* label1 = new QLabel("<b>Форма регистрации</b>", this);
    label1->setGeometry(15, 20, 365, 20);
    label1->setAlignment(Qt::AlignCenter);
    QFont font = label1->font();
    font.setPointSize(14);
    label1->setFont(font);

    QLabel* label2 = new QLabel("Фамилия:", this);
    label2->setGeometry(15, 60, 100, 25);

    QLineEdit* edit1 = new QLineEdit(this);
    edit1->setGeometry(130, 60, 250, 25);
    edit1->setPlaceholderText("введите свою фамилию");
    edit1->setMaxLength(50);

    QLabel* label3 = new QLabel("Имя:", this);
    label3->setGeometry(15, 100, 100, 25);

    QLineEdit* edit2 = new QLineEdit(this);
    edit2->setGeometry(130, 100, 250, 25);
    edit2->setPlaceholderText("введите своё имя");

    QLabel* label4 = new QLabel("Отчество:", this);
    label4->setGeometry(15, 140, 100, 25);

    QLineEdit* edit3 = new QLineEdit(this);
    edit3->setGeometry(130, 140, 250, 25);
    edit3->setPlaceholderText("введите отчество (если есть)");

    QPalette pal = edit1->palette();
    pal.setColor(QPalette::PlaceholderText, Qt::gray);
    edit1->setPalette(pal);
    edit2->setPalette(pal);
    edit3->setPalette(pal);

    QLabel* label5 = new QLabel("Дата рождения:", this);
    label5->setGeometry(15, 180, 110, 25);

    QSpinBox* spinDay = new QSpinBox(this);
    spinDay->setGeometry(130, 180, 70, 25);
    spinDay->setRange(1, 31);

    QSpinBox* spinMonth = new QSpinBox(this);
    spinMonth->setGeometry(210, 180, 70, 25);
    spinMonth->setRange(1, 12);

    QSpinBox* spinYear = new QSpinBox(this);
    spinYear->setGeometry(290, 180, 90, 25);
    spinYear->setRange(1900, 2026);
    spinYear->setValue(1900);

    QLabel* label6 = new QLabel("Рост (в метрах):", this);
    label6->setGeometry(15, 220, 110, 25);

    QDoubleSpinBox* spinHeight = new QDoubleSpinBox(this);
    spinHeight->setGeometry(130, 220, 250, 25);
    spinHeight->setDecimals(2);
    spinHeight->setRange(0.00, 3.00);

    QPushButton* button1 = new QPushButton("Готово", this);
    button1->setGeometry(150, 280, 100, 35);
}

MainWindow::~MainWindow() = default;

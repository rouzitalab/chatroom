#include "cheatchat.h"
#include "ui_cheatchat.h"

CheatChat::CheatChat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheatChat)
{
    ui->setupUi(this);
}

CheatChat::~CheatChat()
{
    delete ui;
}

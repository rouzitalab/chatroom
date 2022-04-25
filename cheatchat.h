#ifndef CHEATCHAT_H
#define CHEATCHAT_H

#include <QWidget>

namespace Ui {
class CheatChat;
}

class CheatChat : public QWidget
{
    Q_OBJECT
    
public:
    explicit CheatChat(QWidget *parent = 0);
    ~CheatChat();
    
private:
    Ui::CheatChat *ui;
};

#endif // CHEATCHAT_H

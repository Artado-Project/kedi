#ifndef KEDI_H
#define KEDI_H

#include <QTextBrowser>

class kedi : public QTextBrowser
{
    Q_OBJECT

public:
    explicit kedi(QWidget *parent = nullptr);

private:
   // Override anchorClicked slot
   void anchorClicked();
};

#endif // KEDI_H

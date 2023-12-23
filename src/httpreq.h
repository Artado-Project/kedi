#ifndef HTTPREQ_H
#define HTTPREQ_H

#include <QObject>

class httpreq : public QObject {
    Q_OBJECT

public:
    explicit httpreq(QUrl url, QObject *parent = nullptr);

private:
    QUrl &m_url;
};
#endif // HTTPREQ_H

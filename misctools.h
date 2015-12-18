#ifndef MISCTOOLS
#define MISCTOOLS

#include <QVector>

class MiscTools {
    //3jckd
    //klasa, która zawiera różne przydatne metody, które mogą być
    //związane z programowaniem gry, ale niekoniecznie z logiką gry

private:
    bool fileExists(QString path);

public:
    QVector<QString> readFile(QString path);

};

#endif // MISCTOOLS

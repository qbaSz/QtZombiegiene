#ifndef MISCTOOLS
#define MISCTOOLS

#include <QVector>

class MiscTools {
private:
    bool fileExists(QString path);

public:
    QVector<QString> readFile(QString path);

};

#endif // MISCTOOLS

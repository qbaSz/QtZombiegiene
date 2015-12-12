#ifndef MISCTOOLS
#define MISCTOOLS

#include <QVector>

class MiscTools {
private:
    bool fileExists(QString directory);

public:
    QVector<QString> readFile(QString directory);

};

#endif // MISCTOOLS

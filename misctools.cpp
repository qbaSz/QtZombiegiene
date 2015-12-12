#include "misctools.h"
#include <QFile>
#include <QTextStream>
#include <QFileInfo>

QVector<QString> MiscTools::readFile(QString path) {
    //3jckd
    //wczytuje linijki tekstu z pliku np. /home/seb/plik.txt
    //zwraca vector z liniami

    QVector<QString> lines;

    if(fileExists(path)) {
        QFile inputFile(path);
        inputFile.open(QIODevice::ReadOnly);
        QTextStream inputStream(&inputFile);

        while(!inputStream.atEnd()) {
            QString line = inputStream.readLine();
            lines.push_back(line);
        }
        inputFile.close();
    }
    return lines;
}

bool MiscTools::fileExists(QString path) {
    //3jckd
    //sprawdza czy plik istnieje i faktycznie jest plikiem, a nie directory

    QFileInfo checkFile(path);

    return (checkFile.exists() && checkFile.isFile());
}

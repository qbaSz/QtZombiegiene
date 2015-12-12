#include "misctools.h"
#include <QFile>
#include <QTextStream>
#include <QFileInfo>

QVector<QString> MiscTools::readFile(QString directory) {
    //3jckd
    //wczytuje linijki tekstu z pliku np. /home/seb/plik.txt
    //zwraca vector z liniami

    QVector<QString> lines;

    if(fileExists(directory)) {
        QFile inputFile(directory);
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

bool MiscTools::fileExists(QString directory) {
    //3jckd
    //sprawdza czy plik istnieje i faktycznie jest plikiem, a nie directory

    QFileInfo checkFile(directory);
    if (checkFile.exists() && checkFile.isFile()) {
        return true;
    } else {
        return false;
    }
}

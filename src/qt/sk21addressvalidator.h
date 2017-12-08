#ifndef VIRTAUNIQUECOINADDRESSVALIDATOR_H
#define VIRTAUNIQUECOINADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class sk21AddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit sk21AddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // VIRTAUNIQUECOINADDRESSVALIDATOR_H

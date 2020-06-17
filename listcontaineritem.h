#ifndef LISTCONTAINERITEM_H
#define LISTCONTAINERITEM_H

#include <QObject>
class ListContainerItem : public QObject //dziedziczenie po QObject
{
    Q_OBJECT // meta-object-compiler
public:
    ListContainerItem();
    ListContainerItem(QString itemString, int itemId, bool itemBoolVal, int itemBorder);

    Q_PROPERTY(QString myText READ getMyText WRITE setMyText NOTIFY myTextChanged)
    Q_PROPERTY(int itemId READ getItemId WRITE setItemId NOTIFY itemIdChanged)
    Q_PROPERTY(bool boolVal READ getBoolVal WRITE setBoolVal NOTIFY boolValChanged)
    Q_PROPERTY(int itemBorder READ getItemBorder WRITE setItemBorder NOTIFY itemBorderChanged)

    //gettery i settery
    int getItemId() const;
    void setItemId(const int itemId);

    int getItemBorder() const;
    void setItemBorder(const int itemBorder);

    QString getMyText() const;
    void setMyText(const QString &newMyText);
    bool getBoolVal() const;
    void setBoolVal(const bool newBoolVal);
    //sygnały
signals:
    void itemIdChanged();
    void myTextChanged();
    void boolValChanged();
    void itemBorderChanged();
    //nazwy zmiennych z Q_PROPERTY
private:
    QString m_myText;
    int m_itemId;
    bool m_boolVal;
    int m_itemBorder;

};
#endif // LISTCONTAINERITEM_H

#include "listcontaineritem.h"


ListContainerItem::ListContainerItem():
    m_myText(""),
    m_itemId(0),
    m_boolVal(false),
    m_itemBorder(0)
{
}

ListContainerItem::ListContainerItem(QString itemString, int itemId, bool itemBoolVal, int itemBorder):
    m_myText(itemString),
    m_itemId(itemId),
    m_boolVal(itemBoolVal),
    m_itemBorder(itemBorder)
{
}

void ListContainerItem::setItemId(const int itemId)
{
    if(itemId != m_itemId)
    {
    m_itemId = itemId;
    emit itemIdChanged();
    }
}

int ListContainerItem::getItemId() const
{
    return m_itemId;
}
void ListContainerItem::setItemBorder(const int itemBorder)
{
    if(itemBorder != m_itemBorder)
    {
    m_itemBorder = itemBorder;
    emit itemBorderChanged();
    }
}

int ListContainerItem::getItemBorder() const
{
    return m_itemBorder;
}



QString ListContainerItem::getMyText() const
{
    return m_myText;
}

void ListContainerItem::setMyText(const QString &newMyText)
{
    if(newMyText != m_myText)
    {
        m_myText = newMyText;
        emit myTextChanged();
    }
}

void ListContainerItem::setBoolVal(const bool newBoolVal)
{
    if(newBoolVal != m_boolVal)
    {
        m_boolVal = newBoolVal;
        emit boolValChanged();
    }
}

bool ListContainerItem::getBoolVal() const
{
    return m_boolVal;
}

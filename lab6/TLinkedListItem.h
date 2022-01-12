#ifndef LAB6_TLINKEDLISTITEM_H
#define LAB6_TLINKEDLISTITEM_H

#include <memory>

class TLinkedListItem {
public:
    TLinkedListItem(void *link);

    TLinkedListItem* SetNext(TLinkedListItem* next);
    TLinkedListItem* GetNext();
    void* GetBlock();

    virtual ~TLinkedListItem();
private:
    void* link;
    TLinkedListItem* next;
};

#endif // LAB6_TLINKEDLISTITEM_H
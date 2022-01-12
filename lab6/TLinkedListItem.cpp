#include "TLinkedListItem.h"
#include <iostream>

TLinkedListItem::TLinkedListItem(void* link) {
    this->link = link;
    this->next = nullptr;
}

TLinkedListItem* TLinkedListItem::SetNext(TLinkedListItem* next) {
    TLinkedListItem* old = this->next;
    this->next = next;
    return old;
}

TLinkedListItem* TLinkedListItem::GetNext() {
    return this->next;
}

void* TLinkedListItem::GetBlock() {
    return this->link;
}

TLinkedListItem::~TLinkedListItem() {
}
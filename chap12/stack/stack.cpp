// stack.cpp -- Stack member functions
#include "stack.h"
Stack::Stack(int n) {
  pitems = new Item[n + 1];
  size = 0;
  top = 0;
}
Stack::Stack(const Stack & st) {
  size = st.size;
  top = st.top;
  pitems = new Item[size + 1];
  for(int i = 0; i < size; i++) {
    pitems[i] = st.pitems[i];
  }
}
bool Stack::isempty() const
{
  return top == 0;
}
bool Stack::isfull() const
{
  return top == MAX;
}
bool Stack::push(const Item & item)
{
  if (top < MAX)
  {
    *(pitems+top) = item;
    top++;
    return true;
  }
else
  return false;
}
bool Stack::pop(Item & item)
{
  if (top > 0)
  {
    top--;
    item = *(pitems+top);
    return true;
  }
  else
    return false;
}
Stack::~Stack() {
  delete[]  pitems;
}
Stack & Stack::operator=(const Stack & st) {
  if (this == & st) {
    return *this;
  }
  delete[] pitems;
  size = st.size;
  top = st.top;
  pitems = new Item[size + 1];
	for (int i = 0; i < size; i++)	// copy array values from passed object
	{
		pitems[i] = st.pitems[i];
	}
  return *this;
}

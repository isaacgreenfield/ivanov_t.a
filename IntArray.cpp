#include "IntArray.h"
IntArray::~IntArray() {
  delete[] a;
}
IntArray::IntArray(int i):
  k(1),
  a(new int[1])
{
  * a = i;
}
int IntArray::get(size_t id) const noexcept{
  return a[id];
}
int IntArray::at(size_t id) const {
  if (! id < k){
    throw std::logic_error("no");
  }
  return a[id];
}
size_t IntArray::size() const noexcept {
  return k;
}
int IntArray::last() const noexcept{
  return get(size() - 1);
}
void IntArray::add(int i) {
  int * tmp = new int[size() + 1];
  for (size_t j = 0; j< size(); ++j) {
    tmp[j] = a[j];
  }
  tmp[size()] = i;
  delete[] a;
  a = tmp;
  ++k;
}
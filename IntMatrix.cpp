#include "IntMatrix.h"
bool IntMatrix::add_col(size_t last_col, int x)
{

}
bool IntMatrix::add_row(size_t last_row, int x)
{

}
bool IntMatrix::expand(size_t last_row, size_t last_col)
{

}

void IntMatrix::fill(int i)
{

}
size_t IntMatrix::size() const noexcept
{

}
int IntMatrix::get(size_t id) const noexcept
{

}

IntMatrix::IntMatrix(size_t r, size_t c, int first_elem);
{
  rows = r;
  cols = c;
  data = new IntArray(first_elem);
}
IntMatrix::~IntMatrix() {
  delete[] data;
}
IntMatrix &IntMatrix::operator=(const IntMatrix &rhs) {
  IntArray tmp = IntArray(rhs.get(0));
  for (size_t i = 1; i < rhs.size(); ++i)
  {
    tmp.add(rhs.get(i));
  }
  delete[] data;
  data = &tmp;
  rows = rhs.rows;
  cols = rhs.cols;
  return *this;
}



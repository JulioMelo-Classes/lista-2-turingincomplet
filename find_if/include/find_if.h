#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/**
 * @tparam InputIt tipo de iterator
 * @tparam UnaryPredicate tipo da função predicado
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o final do range
 * @param p função predicado
 * @return InputIt iterator que aponta para o primeiro elemento do range que satisfaz p
 */
 /*
 ok
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
  for(;first<last;first++) {
    if(p(*first)) 
      return first;
  }
  return last;
}

}
#endif

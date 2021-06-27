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
 * @tparam ForwardIt tipo de iterator
 * @tparam Comparison tipo da função cmp
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o final do range
 * @param cmp função que compara se um valor é menor que o outro
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
  auto aux=first;
  for(;first<last-1; first++){
    for(aux=first+1; aux<last; aux++){
      if(cmp(*aux,*first)){
       std::swap(*aux,*first);
      }
    }
  }
}

}
#endif

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
 * @tparam UnaryPredicate tipo do predicado
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o final do range
 * @param p o predicado
 * @return ForwardIt Um iterator apontando para o logo após o último elemento no range reordenado que satisfaz o predicado
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
  auto ref=first;
  for(;ref<last;ref++){
    if(p(*ref))
        std::swap(*ref,*first);
    if(p(*first))
      first++; 
  }
    return first;
}

}
#endif

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
 * @param first iterator que aponta para o inicio do range
 * @param n_first iterator que aponta o elemento que deve aparecer no inicio do range após a rotação
 * @param last iterator que aponta para o final do range
 * @return ForwardIt  iterator que aponta onde se encontra o primeiro elemento do range antes da rotação
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
  auto rita=first;
  auto ritb=first+1;
  auto raux=first;
  auto reit=last;
  //int d=distance(first,last);
  //int r=distance(first,n_first);
  for(;raux<n_first;raux++){
    for(rita=first,ritb=first+1;ritb<last;rita++,ritb++){
      std::swap(*rita,*ritb);
    }
    reit--;
  }
  if(n_first==first)
    return first;
  else return reit;
}

}
#endif

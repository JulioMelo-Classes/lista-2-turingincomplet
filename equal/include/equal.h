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
 * @tparam InputIt1 primeiro tipo de iterator
 * @tparam InputIt2 segundo tipo de iterator
 * @tparam Equal tipo da função Equal
 * @param first1 iterator que aponta para o inicio do primeiro range
 * @param last1 iterator que aponta para o final do primeiro range
 * @param first2 iterator que aponta para o inicio do segundo range
 * @param last2 iterator que aponta para o final do segundo range(quando presente)
 * @param eq função que testa igualdade
 * @return true se os ranges são iguais
 * @return false se os ranges são diferentes
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
  if(distance(first1,last1)!=distance(first2, first2+(last1-first1)))
    return false;
  for(;first1<last1;first1++,first2++){
    if(!eq(*first1,*first2))
      return false;
  }
      return true;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
  if(distance(first1,last1)!=distance(first2,last2))
    return false;
  for(;first1<last1;first1++,first2++){
      if(!eq(*first1,*first2))
        return false;
  }
      return true;
}

}
#endif

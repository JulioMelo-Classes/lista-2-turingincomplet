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
 * @tparam InputIt tipo do iterator
 * @tparam UnaryPredicate tipo da função predicado
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o final do range
 * @param p função predicado
 * @return true se todos os elementos satisfazerem o predicado
 * @return false se tiver algum elemento que não satifaz o predicado
 */
 /*
 blz
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
  if(first==last)
    return false;
  for(;first<last;first++){
    if(!p(*first))
    return false;
  }
    return true; //!!
}

/**
 * @tparam InputIt tipo do iterator
 * @tparam UnaryPredicate tipo da função predicado
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o final do range
 * @param p função predicado
 * @return true se tiver algum elemento que satifaz o predicado
 * @return false se nenhum elemento satisfaz o predicado
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for(;first<last;first++){//!!
     if(p(*first))
      return true;
   }//!!
    return false;
}

/**
 * @tparam InputIt tipo do iterator
 * @tparam UnaryPredicate tipo da função predicado
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o final do range
 * @param p função predicado
 * @return true se nenhum elemento satisfaz o predicado
 * @return false se tiver algum elemento que satifaz o predicado
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
  for(;first<last;first++){
     if(p(*first))
      return false;//!!
   }
    return true;//!!
}

}
#endif

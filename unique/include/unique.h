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
 * @tparam Equal tipo da função eq
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o fim do range
 * @param eq função de teste de igualdade
 * @return iterator que aponta para o fim do range processado
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    auto vef=first;
    for(;first<last;first++){
      vef=first+1;
      while(vef<last){
        if(eq(*vef,*first)){
          last=std::remove(vef,vef,*vef);
        }
        vef++;
      }
    }
    return last;
}

}
#endif

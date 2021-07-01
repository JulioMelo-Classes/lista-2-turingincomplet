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
 * @tparam T tipo do valor
 * @tparam Equal tipo da função Equal
 * @param first iterator que aponta para o inicio do range
 * @param last iterator que aponta para o final do range
 * @param value valor a ser comparado
 * @param eq função que testa igualdade
 * @return InputIt iterator para o primeiro elemento que satisfaz a função eq()
 */
 /*
 ok
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    for(;first<last;first++){
      if(eq(*first,value))
        return first;
    }
    return last;
}

}
#endif

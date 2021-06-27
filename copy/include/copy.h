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
 * @param first iterator que aponta para o inicio do input range
 * @param last iterator que aponta para o final do input range
 * @param d_first iterator que aponta para o inicio do output range
 * @return InputIt iterator que aponta para o final do output range
 */

template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
 for(;first<last;first++,d_first++)
  *d_first=*first;
    
    return ++d_first;
}

}
#endif

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
     * 
     * 
     * @tparam BidirIt tipo de iterator
     * @param first iterator que aponta para primeira posição
     * @param last iterator que aponta para ultima posição
     */
    template<class BidirIt>
    void reverse(BidirIt first, BidirIt last)
    {
        last--;
        for (; first<last; first++,last--) {
            std::swap(*first,*last);
        }
    }
}
#endif
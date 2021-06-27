using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

    /*!
     * Exemplo de documentação seguindo o formato Doxygen
     *
     * @tparam Itr iterator para o range.
     * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
     *
     * @param first Ponteiro para o primeiro elemento do range
     * @param last Ponteiro para a posição logo após o último elemento do range
     * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
     *
     * @return Um std::pair contendo o menor e maior elemento, nesta ordem
     *
     */
    template <typename Itr, typename Compare >
    std::pair<Itr, Itr> minmax(Itr first, Itr last, Compare cmp)
    {
        auto maxi = first, mini = first;
        for (; first!=last; first++) {
            if (!cmp(*first, *maxi)) {
                 maxi = first;
            }
            if (cmp(*first, *mini)) {
                mini =first;
            }

        }
        return std::make_pair(mini, maxi);
    }
}
#endif


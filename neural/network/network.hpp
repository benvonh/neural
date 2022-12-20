#ifndef __NETWORK_HPP__
#define __NETWORK_HPP__

#include<cstddef>

#include<utility>

#include "../../lib/linalg/linalg/linalg.hpp"
#include "lib/linalg/linalg/matrix/matrix_decl.hpp"

namespace neural
{
template<std::size_t I, std::size_t H, std::size_t O>
struct Network
{
    std::pair<
        linalg::Matrix<H, I>,
        linalg::Matrix<O, H>
    > Weights;

    linalg::Vector<O> Compute(const linalg::Vector<I>& input)
    {
        return Weights.second * (Weights.first * input);
    }
};
}

#endif/*__NETWORK_HPP__*/

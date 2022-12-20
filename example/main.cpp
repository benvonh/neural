#include "neural/network/network.hpp"
#include "neural/neural.hpp"

int main()
{
    neural::Network<2, 2, 2> network;

    network.Weights.first =
    {
        1, 2,
        3, 4
    };

    network.Weights.second =
    {
        4, 3,
        2, 1
    };

    std::cout << network.Compute({ 7, 8 }) << '\n';

    return 0;
}

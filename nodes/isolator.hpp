#include "node.hpp"

namespace dsrs
{
    enum class isolator_state
    {
        OPEN,
        CLOSE
    };

    struct isolator : public node
    {
        const isolator_state default_state;
        isolator_state current_state;
    };
}
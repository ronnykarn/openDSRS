#include <optional>

namespace dsrs
{
    struct node
    {
        std::optional<node> neighbor_node1;
        std::optional<node> neighbor_node2;
    };
}
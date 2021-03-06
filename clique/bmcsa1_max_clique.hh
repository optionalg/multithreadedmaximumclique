/* vim: set sw=4 sts=4 et foldmethod=syntax : */

#ifndef CLIQUE_GUARD_CLIQUE_BMCSA1_MAX_CLIQUE_HH
#define CLIQUE_GUARD_CLIQUE_BMCSA1_MAX_CLIQUE_HH 1

#include <clique/graph.hh>
#include <clique/max_clique_params.hh>
#include <vector>

namespace clique
{
    /**
     * Max clique algorithm.
     *
     * This is San Segundo's BBMCI with a simpler initial vertex ordering, or
     * Prosser's BBMC1.
     */
    auto bmcsa1_max_clique(const Graph & graph, const MaxCliqueParams & params) -> MaxCliqueResult;
}

#endif

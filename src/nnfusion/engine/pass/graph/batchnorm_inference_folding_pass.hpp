// Microsoft (c) 2019, NNFusion Team

#pragma once

#include "graph_pass_base.hpp"

namespace nnfusion
{
    namespace pass
    {
        namespace graph
        {
            class BatchNormInferenceFoldingPass : public GraphPassBase
            {
            public:
                bool run_on_graph(std::shared_ptr<nnfusion::graph::Graph>& graph) override;
            };
        } // namespace graph
    }     // namespace pass
} // namespace nnfusion
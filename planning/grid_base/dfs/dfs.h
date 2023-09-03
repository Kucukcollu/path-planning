/**
 * @file dfs.h
 * @author Bilal Kahraman (kahramannbilal@gmail.com)
 * @brief  Depth First Search algorithm.
 * @version 0.1
 * @date 2023-09-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef PLANNING_GRID_BASE_DFS_DFS_H_
#define PLANNING_GRID_BASE_DFS_DFS_H_

#include "planning/grid_base/common_grid_base.h"
#include "planning/i_planning.h"
#include <stack>
#include <string>

namespace planning
{

namespace grid_base
{

using CostDFS = int;

/**
 * @brief Depth First Search algorithm.
 *
 */
class DFS : public IPlanning
{
public:
  DFS() : search_space_(SearchSpaceGenerator().eight_directions) {}
  DFS(std::string search_space);

  Path FindPath(const Node &start_node, const Node &goal_node,
                const std::shared_ptr<Map> map) override;

private:
  SearchSpace search_space_;
};

} // namespace grid_base
} // namespace planning

#endif // PLANNING_GRID_BASE_DFS_DFS_H_
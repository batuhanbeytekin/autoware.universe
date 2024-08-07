// Copyright 2022 TIER IV, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef AUTOWARE__LIDAR_CENTERPOINT__UTILS_HPP_
#define AUTOWARE__LIDAR_CENTERPOINT__UTILS_HPP_

#include <cstddef>

namespace autoware::lidar_centerpoint
{
struct Box3D
{
  // initializer not allowed for __shared__ variable
  int label;
  float score;
  float x;
  float y;
  float z;
  float length;
  float width;
  float height;
  float yaw;
  float vel_x;
  float vel_y;

  // variance
  float x_variance;
  float y_variance;
  float z_variance;
  float length_variance;
  float width_variance;
  float height_variance;
  float yaw_variance;
  float vel_x_variance;
  float vel_y_variance;
};

// cspell: ignore divup
std::size_t divup(const std::size_t a, const std::size_t b);

}  // namespace autoware::lidar_centerpoint

#endif  // AUTOWARE__LIDAR_CENTERPOINT__UTILS_HPP_

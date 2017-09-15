/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 */

#ifndef MODEULES_L3_PERCEPTION_DELPHI_ESR_RADAR_OBSTACLE_H_
#define MODEULES_L3_PERCEPTION_DELPHI_ESR_RADAR_OBSTACLE_H_

#include "modules/perception/proto/perception_obstacle.pb.h"

/**
 * @namespace apollo::l3_perception
 * @brief apollo::l3_perception
 */
namespace apollo {
namespace l3_perception {

using ::apollo::perception::Point;

class RadarObstacle {
 public:
  const Point position();
  const Point velocity();
  const uint32_t id();
  const double rcs();
  const bool movable();
  
  void set_position(const Point& position);
  void set_velocity(const Point& velocity);
  void set_id(const uint32_t id);
  void set_rcs(const double rcs);
  void set_movable(const bool movable);

 private:
  Point position_;
  Point velocity_;
  uint32_t id_;
  double rcs_;
  bool movable_; 
};

}  // namespace l3_perception
}  // namespace apollo

#endif  // MODULES_L3_PERCEPTION_DELPHI_ESR_RADAR_OBSTACLE_H_


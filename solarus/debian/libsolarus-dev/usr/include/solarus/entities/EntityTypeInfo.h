/*
 * Copyright (C) 2006-2016 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_ENTITY_TYPE_INFO_H
#define SOLARUS_ENTITY_TYPE_INFO_H

#include "solarus/Common.h"
#include "solarus/EnumInfo.h"
#include "solarus/entities/EntityType.h"
#include <map>
#include <string>

namespace Solarus {

template <>
struct SOLARUS_API EnumInfoTraits<EntityType> {
  static const std::string pretty_name;

  static const EnumInfo<EntityType>::names_type names;
};

class SOLARUS_API EntityTypeInfo : public EnumInfo<EntityType> {

  public:

    static bool can_be_stored_in_map_file(EntityType type);
    static bool can_be_created_from_lua_api(EntityType type);

};

}  // namespace Solarus

#endif

/**
 *   SFCGAL
 *
 *   Copyright (C) 2012-2013 Oslandia <infos@oslandia.com>
 *   Copyright (C) 2012-2013 IGN (http://www.ign.fr)
 *
 *   This library is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Library General Public
 *   License as published by the Free Software Foundation; either
 *   version 2 of the License, or (at your option) any later version.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Library General Public License for more details.

 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _SFCGAL_DETAIL_COLLECTPOINTS_H_
#define _SFCGAL_DETAIL_COLLECTPOINTS_H_

#include <SFCGAL/Geometry.h>
#include <SFCGAL/detail/CollectPointsVisitor.h>

namespace SFCGAL {
namespace detail {

    /**
     * Collect Points from a geometry.
     *
     * @warning this methods does not ensure unicity
     */
    template < typename K >
    void collectPoints(
        const Geometry<K> & geometry,
        std::vector< Coordinate<K> > & points
    ){
        detail::CollectPointsVisitor<K> visitor(points);
        boost::apply_visitor(visitor,geometry);
    }

} // detail
} // SFCGAL

#endif
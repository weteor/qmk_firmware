/* Copyright 2022 Rossman360 (@rossmontsinger)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 * The first section contains all of the arguments representing the
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define ____ KC_NO



#define LAYOUT( \
	L000, L001, L002, L003, L004, L005, L006, L007, L008, L009, L010, L011, L012, L013, L014, R000, R001, R002, R003, \
	L100, L101, L102, L103, L104, L105, L106, L107, L108, L109, L110, L111, L112, L113, L114, R100, R101, R102, R103, \
	L200, L201, L202, L203, L204, L205, L206, L207, L208, L209, L210, L211,       L213, L214, R200, R201, R202, \
	L300, L301, L302, L303, L304, L305, L306, L307, L308, L309, L310, L311,       L313, L314, R300, R301, R302, R303, \
	L400, L401, L402,             L405,             L408, L409, L410, L411,       L413, L414, R400,       R402  \
) { \
	{ L000, L001, L002, L003, L004, L005, L006, L007, L008, L009, L010, L011, L012, L013, L014 }, \
	{ L100, L101, L102, L103, L104, L105, L106, L107, L108, L109, L110, L111, L112, L113, L114 }, \
	{ L200, L201, L202, L203, L204, L205, L206, L207, L208, L209, L210, L211, ____, L213, L214 }, \
	{ L300, L301, L302, L303, L304, L305, L306, L307, L308, L309, L310, L311, ____, L313, L314 }, \
	{ L400, L401, L402, ____, ____, L405, ____, ____, L408, L409, L410, L411, ____, L413, L414 }, \
    { ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, R000, R001, R002, R003 }, \
    { ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, R100, R101, R102, R103 }, \
    { ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, R200, R201, R202, ____ }, \
    { ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, R300, R301, R302, R303 }, \
    { ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, R400, ____, R402, ____ }, \
}


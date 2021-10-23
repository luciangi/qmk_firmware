/* Copyright 2021 iluci

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "rgb.h"
#include "../util/util.h"

#ifdef POWER_DOWN_DISABLE_RGB
void suspend_power_down_user() { rgb_matrix_set_suspend_state(true); }

void suspend_wakeup_init_user() { rgb_matrix_set_suspend_state(false); }
#endif


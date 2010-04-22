/* 
 * yaffs2utils: Utilities to make/extract a YAFFS2/YAFFS1 image.
 * Copyright (C) 2010 Luen-Yung Lin <penguin.lin@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _YAFFS2_UTILS_H
#define _YAFFS2_UTILS_H

#define YAFFS2PROGS_VERSION	"0.0.1"

/* from Linux Kernel */
static u_int32_t nand_oobfree_16[8][2] = {{8, 8}};
static u_int32_t nand_oobfree_64[8][2] = {{2, 38}};

#endif
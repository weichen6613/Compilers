/*
 * color.h - Data structures and function prototypes for coloring algorithm
 *             to determine register allocation.
 */

#ifndef COLOR_H
#define COLOR_H

//struct COL_result {Temp_map coloring; Temp_tempList spills;};
//struct COL_result COL_color(G_graph ig, Temp_map initial, Temp_tempList regs, Live_moveList moves);

struct COL_result {
	Temp_map coloring;
	Temp_tempList spills;
	Live_moveList coalescedMoves;
	TAB_table tempAlias;
};
struct COL_result COL_color(G_graph ig, Temp_map initial, Temp_tempList regs, Live_moveList moves, bool **set, G_table table);    // table is for additionalNodeInfo

#endif

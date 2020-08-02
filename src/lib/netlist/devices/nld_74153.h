// license:GPL-2.0+
// copyright-holders:Couriersud
/*
 * nld_74153.h
 *
 *  DM74153: Dual 4-Line to 1-Line Data Selectors Multiplexers
 *
 *          +--------------+
 *       G1 |1     ++    16| VCC
 *        B |2           15| G2
 *      1C3 |3           14| A
 *      1C2 |4   74153   13| 2C3
 *      1C1 |5           12| 2C2
 *      1C0 |6           11| 2C1
 *       Y1 |7           10| 2C0
 *      GND |8            9| Y2
 *          +--------------+
 *
 *
 *          Function table
 *
 *          +-----+-----++----+----+----+----++----+----+
 *          |  B  |  A  || C0 | C1 | C2 | C3 ||  G |  Y |
 *          +=====+=====++====+====+====+====++====+====+
 *          |  X  |  X  ||  X |  X |  X |  X ||  H |  L |
 *          |  L  |  L  ||  L |  X |  X |  X ||  L |  L |
 *          |  L  |  L  ||  H |  X |  X |  X ||  L |  H |
 *          |  L  |  H  ||  X |  L |  X |  X ||  L |  L |
 *          |  L  |  H  ||  X |  H |  X |  X ||  L |  H |
 *          |  H  |  L  ||  X |  X |  L |  X ||  L |  L |
 *          |  H  |  L  ||  X |  X |  H |  X ||  L |  H |
 *          |  H  |  H  ||  X |  X |  X |  L ||  L |  L |
 *          |  H  |  H  ||  X |  X |  X |  H ||  L |  H |
 *          +-----+-----++----+----+----+----++----+----+
 *
 *  A, B : Select Inputs
 *  C*   : Data inputs
 *  G    : Strobe
 *  Y    : Output
 *
 *  Naming conventions follow National Semiconductor datasheet
 *
 */

#ifndef NLD_74153_H_
#define NLD_74153_H_

#include "netlist/nl_setup.h"

// usage: TTL_74153(name, cC0, cC1, cC2, cC3, cA, cB, cG)
#define TTL_74153(...)                                                        \
		NET_REGISTER_DEVEXT(TTL_74153, __VA_ARGS__)

#endif /* NLD_74153_H_ */

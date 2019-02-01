#include "gpiocfg.h"

static struct community kabylake_communities[] = {
	{
		.name = "community-0",
		.port_id = 0xaf,
		.num_pins = 48,
		.pin_names = {
			/* GPP_A0 - GPP_A23 */
			"GPP_A0",
			"GPP_A1",
			"GPP_A2",
			"GPP_A3",
			"GPP_A4",
			"GPP_A5",
			"GPP_A6",
			"GPP_A7",
			"GPP_A8",
			"GPP_A9",
			"GPP_A10",
			"GPP_A11",
			"GPP_A12",
			"GPP_A13",
			"GPP_A14",
			"GPP_A15",
			"GPP_A16",
			"GPP_A17",
			"GPP_A18",
			"GPP_A19",
			"GPP_A20",
			"GPP_A21",
			"GPP_A22",
			"GPP_A23",
			/* GPP_B0 - GPP_B23 */
			"GPP_B0",
			"GPP_B1",
			"GPP_B2",
			"GPP_B3",
			"GPP_B4",
			"GPP_B5",
			"GPP_B6",
			"GPP_B7",
			"GPP_B8",
			"GPP_B9",
			"GPP_B10",
			"GPP_B11",
			"GPP_B12",
			"GPP_B13",
			"GPP_B14",
			"GPP_B15",
			"GPP_B16",
			"GPP_B17",
			"GPP_B18",
			"GPP_B19",
			"GPP_B20",
			"GPP_B21",
			"GPP_B22",
			"GPP_B23",
		}
	},
	{
		.name = "community-1",
		.port_id = 0xae,
		.num_pins = 72,
		.pin_names = {
			/* GPP_C0 - GPP_C23 */
			"GPP_C0",
			"GPP_C1",
			"GPP_C2",
			"GPP_C3",
			"GPP_C4",
			"GPP_C5",
			"GPP_C6",
			"GPP_C7",
			"GPP_C8",
			"GPP_C9",
			"GPP_C10",
			"GPP_C11",
			"GPP_C12",
			"GPP_C13",
			"GPP_C14",
			"GPP_C15",
			"GPP_C16",
			"GPP_C17",
			"GPP_C18",
			"GPP_C19",
			"GPP_C20",
			"GPP_C21",
			"GPP_C22",
			"GPP_C23",
			/* GPP_D0 - GPP_D23 */
			"GPP_D0",
			"GPP_D1",
			"GPP_D2",
			"GPP_D3",
			"GPP_D4",
			"GPP_D5",
			"GPP_D6",
			"GPP_D7",
			"GPP_D8",
			"GPP_D9",
			"GPP_D10",
			"GPP_D11",
			"GPP_D12",
			"GPP_D13",
			"GPP_D14",
			"GPP_D15",
			"GPP_D16",
			"GPP_D17",
			"GPP_D18",
			"GPP_D19",
			"GPP_D20",
			"GPP_D21",
			"GPP_D22",
			"GPP_D23",
			/* GPP_E0 - GPP_E23 */
			"GPP_E0",
			"GPP_E1",
			"GPP_E2",
			"GPP_E3",
			"GPP_E4",
			"GPP_E5",
			"GPP_E6",
			"GPP_E7",
			"GPP_E8",
			"GPP_E9",
			"GPP_E10",
			"GPP_E11",
			"GPP_E12",
			"GPP_E13",
			"GPP_E14",
			"GPP_E15",
			"GPP_E16",
			"GPP_E17",
			"GPP_E18",
			"GPP_E19",
			"GPP_E20",
			"GPP_E21",
			"GPP_E22",
			"GPP_E23",
		}
	},
	{
		.name = "community-2",
		.port_id = 0xad,
		.num_pins = 12,
		.pin_names = {
			/* GPD0 - GPD11 */
			"GPD0",
			"GPD1",
			"GPD2",
			"GPD3",
			"GPD4",
			"GPD5",
			"GPD6",
			"GPD7",
			"GPD8",
			"GPD9",
			"GPD10",
			"GPD11",
		}
	},
	{
		.name = "community-3",
		.port_id = 0xac,
		.num_pins = 36,
		.pin_names = {
			/* GPP_F0 - GPP_F23 */
			"GPP_F0",
			"GPP_F1",
			"GPP_F2",
			"GPP_F3",
			"GPP_F4",
			"GPP_F5",
			"GPP_F6",
			"GPP_F7",
			"GPP_F8",
			"GPP_F9",
			"GPP_F10",
			"GPP_F11",
			"GPP_F12",
			"GPP_F13",
			"GPP_F14",
			"GPP_F15",
			"GPP_F16",
			"GPP_F17",
			"GPP_F18",
			"GPP_F19",
			"GPP_F20",
			"GPP_F21",
			"GPP_F22",
			"GPP_F23",
			/* GPP_G0 - GPP_G7 */
			"GPP_G0",
			"GPP_G1",
			"GPP_G2",
			"GPP_G3",
			"GPP_G4",
			"GPP_G5",
			"GPP_G6",
			"GPP_G7",
		}
	},
};

struct platform kabylake = {
	.name = "kabylake",
	.base_addr = 0xFD000000,
	.port_addr_space_size = 0x10000,
	.padbar = 0x400,
	.pad_cfg_size = 0x8,
	.num_communities = 4,
	.communities = kabylake_communities,
};

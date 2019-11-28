// ======================================================================
// Test1.v generated from TopDesign.cysch
// 11/14/2019 at 10:07
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_ES 17
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 33
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 33
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 1
`define CYDEV_CHIP_REV_EXPECT 3
`define CYDEV_CHIP_DIE_ACTUAL 1
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4O 7
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 8
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 9
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 10
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 11
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 12
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 13
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 14
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 15
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 16
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 17
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 18
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 19
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 20
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 21
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 22
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 23
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 24
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 28
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 29
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 1
`define CYDEV_CHIP_MEMBER_USED 1
`define CYDEV_CHIP_REVISION_USED 3
// Component: LUT_v1_60
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_60"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_60\LUT_v1_60.v"
`else
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_60"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_60\LUT_v1_60.v"
`endif

// Component: mux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10\mux_v1_10.v"
`else
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10\mux_v1_10.v"
`endif

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: BasicCounter_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0\BasicCounter_v1_0.v"
`else
`define CY_BLK_DIR "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0"
`include "D:\Programms\PSoC\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0\BasicCounter_v1_0.v"
`endif

// top
module top ;

          wire  Net_32;
    electrical  Net_492;
          wire  Net_36;
          wire  Net_40;
          wire  Net_44;
          wire  Net_48;
          wire  Net_52;
          wire  Net_56;
          wire  Net_104;
          wire  Net_101;
          wire  Net_98;
          wire  Net_100;
          wire  Net_301;
          wire  Net_299;
          wire  Net_298;
          wire  Net_297;
          wire  Net_296;
          wire  Net_295;
          wire  Net_315;
          wire  Net_313;
          wire  Net_312;
          wire  Net_311;
          wire  Net_310;
          wire  Net_309;
          wire  Net_478;
          wire  Net_477;
          wire  Net_476;
          wire  Net_475;
          wire  Net_474;
          wire  Net_473;
          wire  Net_343;
          wire  Net_341;
          wire  Net_340;
          wire  Net_339;
          wire  Net_338;
          wire  Net_337;
          wire  Net_481;
          wire [2:0] Net_494;
          wire [6:0] Net_102;
          wire [2:0] Net_274;
          wire [2:0] Net_273;
          wire [2:0] Net_272;
          wire [2:0] Net_67;
          wire  Net_66;
          wire  Net_65;
          wire  Net_64;
          wire  Net_63;
          wire  Net_60;
          wire  Net_59;
          wire  Net_58;
          wire  Net_57;

    // -- LUT LUT_Line_4 start --
    if (1)
    begin : LUT_Line_4
        reg [2:0] tmp__LUT_Line_4_reg;
        wire [4:0] tmp__LUT_Line_4_ins;
        assign tmp__LUT_Line_4_ins = {Net_102[4],Net_102[3],Net_102[2],Net_102[1],Net_102[0]};
        always @(tmp__LUT_Line_4_ins)
        begin
            case (tmp__LUT_Line_4_ins)
                5'b00000 :  tmp__LUT_Line_4_reg = 3'b000;
                5'b00001 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b00010 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b00011 :  tmp__LUT_Line_4_reg = 3'b001;
                5'b00100 :  tmp__LUT_Line_4_reg = 3'b001;
                5'b00101 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b00110 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b00111 :  tmp__LUT_Line_4_reg = 3'b000;
                5'b01000 :  tmp__LUT_Line_4_reg = 3'b000;
                5'b01001 :  tmp__LUT_Line_4_reg = 3'b000;
                5'b01010 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b01011 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b01100 :  tmp__LUT_Line_4_reg = 3'b011;
                5'b01101 :  tmp__LUT_Line_4_reg = 3'b011;
                5'b01110 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b01111 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b10000 :  tmp__LUT_Line_4_reg = 3'b011;
                5'b10001 :  tmp__LUT_Line_4_reg = 3'b011;
                5'b10010 :  tmp__LUT_Line_4_reg = 3'b011;
                5'b10011 :  tmp__LUT_Line_4_reg = 3'b011;
                5'b10100 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b10101 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b10110 :  tmp__LUT_Line_4_reg = 3'b001;
                5'b10111 :  tmp__LUT_Line_4_reg = 3'b001;
                5'b11000 :  tmp__LUT_Line_4_reg = 3'b001;
                5'b11001 :  tmp__LUT_Line_4_reg = 3'b001;
                5'b11010 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b11011 :  tmp__LUT_Line_4_reg = 3'b111;
                5'b11100 :  tmp__LUT_Line_4_reg = 3'b000;
                5'b11101 :  tmp__LUT_Line_4_reg = 3'b000;
                5'b11110 :  tmp__LUT_Line_4_reg = 3'b000;
                5'b11111 :  tmp__LUT_Line_4_reg = 3'b111;
            endcase
        end
        assign {Net_274[2],Net_274[1],Net_274[0]} = tmp__LUT_Line_4_reg;
    end
    // -- LUT LUT_Line_4 end --

    // -- LUT LUT_Line_3 start --
    if (1)
    begin : LUT_Line_3
        reg [2:0] tmp__LUT_Line_3_reg;
        wire [4:0] tmp__LUT_Line_3_ins;
        assign tmp__LUT_Line_3_ins = {Net_102[4],Net_102[3],Net_102[2],Net_102[1],Net_102[0]};
        always @(tmp__LUT_Line_3_ins)
        begin
            case (tmp__LUT_Line_3_ins)
                5'b00000 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b00001 :  tmp__LUT_Line_3_reg = 3'b011;
                5'b00010 :  tmp__LUT_Line_3_reg = 3'b011;
                5'b00011 :  tmp__LUT_Line_3_reg = 3'b011;
                5'b00100 :  tmp__LUT_Line_3_reg = 3'b011;
                5'b00101 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b00110 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b00111 :  tmp__LUT_Line_3_reg = 3'b100;
                5'b01000 :  tmp__LUT_Line_3_reg = 3'b100;
                5'b01001 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b01010 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b01011 :  tmp__LUT_Line_3_reg = 3'b101;
                5'b01100 :  tmp__LUT_Line_3_reg = 3'b101;
                5'b01101 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b01110 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b01111 :  tmp__LUT_Line_3_reg = 3'b100;
                5'b10000 :  tmp__LUT_Line_3_reg = 3'b100;
                5'b10001 :  tmp__LUT_Line_3_reg = 3'b100;
                5'b10010 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b10011 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b10100 :  tmp__LUT_Line_3_reg = 3'b110;
                5'b10101 :  tmp__LUT_Line_3_reg = 3'b010;
                5'b10110 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b10111 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b11000 :  tmp__LUT_Line_3_reg = 3'b110;
                5'b11001 :  tmp__LUT_Line_3_reg = 3'b110;
                5'b11010 :  tmp__LUT_Line_3_reg = 3'b110;
                5'b11011 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b11100 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b11101 :  tmp__LUT_Line_3_reg = 3'b000;
                5'b11110 :  tmp__LUT_Line_3_reg = 3'b111;
                5'b11111 :  tmp__LUT_Line_3_reg = 3'b111;
            endcase
        end
        assign {Net_273[2],Net_273[1],Net_273[0]} = tmp__LUT_Line_3_reg;
    end
    // -- LUT LUT_Line_3 end --

    // -- LUT LUT_Line_2 start --
    if (1)
    begin : LUT_Line_2
        reg [2:0] tmp__LUT_Line_2_reg;
        wire [4:0] tmp__LUT_Line_2_ins;
        assign tmp__LUT_Line_2_ins = {Net_102[4],Net_102[3],Net_102[2],Net_102[1],Net_102[0]};
        always @(tmp__LUT_Line_2_ins)
        begin
            case (tmp__LUT_Line_2_ins)
                5'b00000 :  tmp__LUT_Line_2_reg = 3'b000;
                5'b00001 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b00010 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b00011 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b00100 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b00101 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b00110 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b00111 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b01000 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b01001 :  tmp__LUT_Line_2_reg = 3'b100;
                5'b01010 :  tmp__LUT_Line_2_reg = 3'b100;
                5'b01011 :  tmp__LUT_Line_2_reg = 3'b100;
                5'b01100 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b01101 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b01110 :  tmp__LUT_Line_2_reg = 3'b100;
                5'b01111 :  tmp__LUT_Line_2_reg = 3'b100;
                5'b10000 :  tmp__LUT_Line_2_reg = 3'b100;
                5'b10001 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b10010 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b10011 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b10100 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b10101 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b10110 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b10111 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b11000 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b11001 :  tmp__LUT_Line_2_reg = 3'b010;
                5'b11010 :  tmp__LUT_Line_2_reg = 3'b010;
                5'b11011 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b11100 :  tmp__LUT_Line_2_reg = 3'b111;
                5'b11101 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b11110 :  tmp__LUT_Line_2_reg = 3'b001;
                5'b11111 :  tmp__LUT_Line_2_reg = 3'b111;
            endcase
        end
        assign {Net_272[2],Net_272[1],Net_272[0]} = tmp__LUT_Line_2_reg;
    end
    // -- LUT LUT_Line_2 end --

    // -- LUT LUT_Line_1 start --
    if (1)
    begin : LUT_Line_1
        reg [2:0] tmp__LUT_Line_1_reg;
        wire [4:0] tmp__LUT_Line_1_ins;
        assign tmp__LUT_Line_1_ins = {Net_102[4],Net_102[3],Net_102[2],Net_102[1],Net_102[0]};
        always @(tmp__LUT_Line_1_ins)
        begin
            case (tmp__LUT_Line_1_ins)
                5'b00000 :  tmp__LUT_Line_1_reg = 3'b000;
                5'b00001 :  tmp__LUT_Line_1_reg = 3'b000;
                5'b00010 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b00011 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b00100 :  tmp__LUT_Line_1_reg = 3'b001;
                5'b00101 :  tmp__LUT_Line_1_reg = 3'b001;
                5'b00110 :  tmp__LUT_Line_1_reg = 3'b001;
                5'b00111 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b01000 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b01001 :  tmp__LUT_Line_1_reg = 3'b000;
                5'b01010 :  tmp__LUT_Line_1_reg = 3'b000;
                5'b01011 :  tmp__LUT_Line_1_reg = 3'b000;
                5'b01100 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b01101 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b01110 :  tmp__LUT_Line_1_reg = 3'b010;
                5'b01111 :  tmp__LUT_Line_1_reg = 3'b010;
                5'b10000 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b10001 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b10010 :  tmp__LUT_Line_1_reg = 3'b010;
                5'b10011 :  tmp__LUT_Line_1_reg = 3'b010;
                5'b10100 :  tmp__LUT_Line_1_reg = 3'b010;
                5'b10101 :  tmp__LUT_Line_1_reg = 3'b010;
                5'b10110 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b10111 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b11000 :  tmp__LUT_Line_1_reg = 3'b001;
                5'b11001 :  tmp__LUT_Line_1_reg = 3'b001;
                5'b11010 :  tmp__LUT_Line_1_reg = 3'b001;
                5'b11011 :  tmp__LUT_Line_1_reg = 3'b001;
                5'b11100 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b11101 :  tmp__LUT_Line_1_reg = 3'b111;
                5'b11110 :  tmp__LUT_Line_1_reg = 3'b000;
                5'b11111 :  tmp__LUT_Line_1_reg = 3'b000;
            endcase
        end
        assign {Net_67[2],Net_67[1],Net_67[0]} = tmp__LUT_Line_1_reg;
    end
    // -- LUT LUT_Line_1 end --

    // -- Mux start --
    if (1)
    begin : mux_2
        reg [2:0] tmp__mux_2_reg;
        always @(Net_67 or Net_272 or Net_273 or Net_274 or Net_102)
        begin
            case (Net_102[6:5])
                2'b00 :  tmp__mux_2_reg = Net_67[2:0];
                2'b01 :  tmp__mux_2_reg = Net_272[2:0];
                2'b10 :  tmp__mux_2_reg = Net_273[2:0];
                2'b11 :  tmp__mux_2_reg = Net_274[2:0];
            endcase
        end
        assign Net_494[2:0] = tmp__mux_2_reg;
    end
    // -- Mux end --

    assign Net_66 = 1'h0;

    assign Net_100 = 1'h0;

    assign Net_98 = 1'h1;


	cy_clock_v1_0
		#(.id("025a8b5b-7d8a-4bd0-b399-f20d9ae68539"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("62500000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Tempo_Clock
		 (.clock_out(Net_101));


    BasicCounter_v1_0 Counter (
        .en(Net_98),
        .cnt(Net_102[6:0]),
        .reset(Net_100),
        .clock(Net_101));
    defparam Counter.Width = 7;

    // -- Mux start --
    if (1)
    begin : mux_1
        reg  tmp__mux_1_reg;
        always @(Net_57 or Net_58 or Net_59 or Net_60 or Net_63 or Net_64 or Net_65 or Net_66 or Net_494)
        begin
            case (Net_494[2:0])
                3'b000 :  tmp__mux_1_reg = Net_57;
                3'b001 :  tmp__mux_1_reg = Net_58;
                3'b010 :  tmp__mux_1_reg = Net_59;
                3'b011 :  tmp__mux_1_reg = Net_60;
                3'b100 :  tmp__mux_1_reg = Net_63;
                3'b101 :  tmp__mux_1_reg = Net_64;
                3'b110 :  tmp__mux_1_reg = Net_65;
                3'b111 :  tmp__mux_1_reg = Net_66;
            endcase
        end
        assign Net_481 = tmp__mux_1_reg;
    end
    // -- Mux end --


	cy_clock_v1_0
		#(.id("51dc8529-1692-46a2-8a89-97664edec993"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("2024291497975.71"),
		  .is_direct(0),
		  .is_digital(1))
		H_Note
		 (.clock_out(Net_65));



	cy_clock_v1_0
		#(.id("9b527dab-a33d-43c4-b2af-a0cb1c5add39"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("2272727272727.27"),
		  .is_direct(0),
		  .is_digital(1))
		A_Note
		 (.clock_out(Net_64));



	cy_clock_v1_0
		#(.id("6a885a79-6f38-487b-993f-b84697ea3ea9"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("2551020408163.27"),
		  .is_direct(0),
		  .is_digital(1))
		G_Note
		 (.clock_out(Net_63));



	cy_clock_v1_0
		#(.id("0c5ff711-8cb8-4976-8e36-9b5f733be017"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("2865329512893.98"),
		  .is_direct(0),
		  .is_digital(1))
		F_Note
		 (.clock_out(Net_60));



	cy_clock_v1_0
		#(.id("fde68175-c338-4752-b032-c30aaa53f7d0"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("3030303030303.03"),
		  .is_direct(0),
		  .is_digital(1))
		E_Note
		 (.clock_out(Net_59));



	cy_clock_v1_0
		#(.id("70d77917-996e-4953-970f-4618fb8f6e3c"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("3412969283276.45"),
		  .is_direct(0),
		  .is_digital(1))
		D_Note
		 (.clock_out(Net_58));


	wire [0:0] tmpOE__Buzzer_net;
	wire [0:0] tmpFB_0__Buzzer_net;
	wire [0:0] tmpIO_0__Buzzer_net;
	wire [0:0] tmpINTERRUPT_0__Buzzer_net;
	electrical [0:0] tmpSIOVREF__Buzzer_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Buzzer
		 (.oe(tmpOE__Buzzer_net),
		  .y({Net_481}),
		  .fb({tmpFB_0__Buzzer_net[0:0]}),
		  .io({tmpIO_0__Buzzer_net[0:0]}),
		  .siovref(tmpSIOVREF__Buzzer_net),
		  .interrupt({tmpINTERRUPT_0__Buzzer_net[0:0]}),
		  .annotation({Net_492}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Buzzer_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("11984e50-a502-41a8-bfca-7ee209769a4e"),
		  .source_clock_id("315365C3-2E3E-4f04-84A2-BB564A173261"),
		  .divisor(0),
		  .period("3831417624521.07"),
		  .is_direct(0),
		  .is_digital(1))
		C_Note
		 (.clock_out(Net_57));


	wire [0:0] tmpOE__Pin_1_net;
	wire [0:0] tmpFB_0__Pin_1_net;
	wire [0:0] tmpIO_0__Pin_1_net;
	wire [0:0] tmpINTERRUPT_0__Pin_1_net;
	electrical [0:0] tmpSIOVREF__Pin_1_net;

	cy_psoc3_pins_v1_10
		#(.id("01a8e238-b363-4c8c-afd6-a70cc770e790"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Pin_1
		 (.oe(tmpOE__Pin_1_net),
		  .y({Net_481}),
		  .fb({tmpFB_0__Pin_1_net[0:0]}),
		  .io({tmpIO_0__Pin_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Pin_1_net),
		  .interrupt({tmpINTERRUPT_0__Pin_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Pin_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule


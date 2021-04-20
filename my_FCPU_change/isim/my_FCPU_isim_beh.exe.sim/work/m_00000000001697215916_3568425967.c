/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Projects/hdl/my_FCPU/my_FCPU.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static unsigned int ng9[] = {0U, 0U};



static void NetDecl_47_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 5);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 7U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 7U);
    t12 = (t0 + 8680);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 7U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 2U);
    t25 = (t0 + 8456);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_49_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_lshift(t5, 8, t2, 8, t4, 3);
    t3 = (t0 + 8744);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t3, 0, 7U);
    t18 = (t0 + 8472);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_54_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 8808);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 8488);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_56_3(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 8, t3, 8, t14, 8);
    t16 = (t0 + 8872);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 255U;
    t22 = t21;
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 7);
    t29 = (t0 + 8504);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Cont_58_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t49[8];
    char t50[8];
    char t51[8];
    char t62[8];
    char t96[8];
    char t97[8];
    char t98[8];
    char t109[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;

LAB0:    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t38);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t49, 8);

LAB20:    t143 = (t0 + 8936);
    t145 = (t143 + 56U);
    t146 = *((char **)t145);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    memset(t148, 0, 8);
    t149 = 255U;
    t150 = t149;
    t151 = (t3 + 4);
    t152 = *((unsigned int *)t3);
    t149 = (t149 & t152);
    t153 = *((unsigned int *)t151);
    t150 = (t150 & t153);
    t154 = (t148 + 4);
    t155 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t155 | t149);
    t156 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t156 | t150);
    xsi_driver_vfirst_trans(t143, 0, 7);
    t157 = (t0 + 8520);
    *((int *)t157) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = (t0 + 3528);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    goto LAB13;

LAB14:    t52 = (t0 + 1528U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t51 + 4);
    t54 = (t53 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (t55 >> 0);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t52) = t58;
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 3U);
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 3U);
    t61 = ((char*)((ng3)));
    memset(t62, 0, 8);
    t63 = (t51 + 4);
    t64 = (t61 + 4);
    t65 = *((unsigned int *)t51);
    t66 = *((unsigned int *)t61);
    t67 = (t65 ^ t66);
    t68 = *((unsigned int *)t63);
    t69 = *((unsigned int *)t64);
    t70 = (t68 ^ t69);
    t71 = (t67 | t70);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t64);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB24;

LAB21:    if (t74 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t62) = 1;

LAB24:    memset(t50, 0, 8);
    t78 = (t62 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t62);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t78) != 0)
        goto LAB27;

LAB28:    t85 = (t50 + 4);
    t86 = *((unsigned int *)t50);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB29;

LAB30:    t92 = *((unsigned int *)t50);
    t93 = (~(t92));
    t94 = *((unsigned int *)t85);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t85) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t50) > 0)
        goto LAB35;

LAB36:    memcpy(t49, t96, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t44, 8, t49, 8);
    goto LAB20;

LAB18:    memcpy(t3, t44, 8);
    goto LAB20;

LAB23:    t77 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB27:    t84 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB28;

LAB29:    t89 = (t0 + 3688);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    goto LAB30;

LAB31:    t99 = (t0 + 1528U);
    t100 = *((char **)t99);
    memset(t98, 0, 8);
    t99 = (t98 + 4);
    t101 = (t100 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (t102 >> 0);
    *((unsigned int *)t98) = t103;
    t104 = *((unsigned int *)t101);
    t105 = (t104 >> 0);
    *((unsigned int *)t99) = t105;
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t106 & 3U);
    t107 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t107 & 3U);
    t108 = ((char*)((ng4)));
    memset(t109, 0, 8);
    t110 = (t98 + 4);
    t111 = (t108 + 4);
    t112 = *((unsigned int *)t98);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = *((unsigned int *)t110);
    t116 = *((unsigned int *)t111);
    t117 = (t115 ^ t116);
    t118 = (t114 | t117);
    t119 = *((unsigned int *)t110);
    t120 = *((unsigned int *)t111);
    t121 = (t119 | t120);
    t122 = (~(t121));
    t123 = (t118 & t122);
    if (t123 != 0)
        goto LAB41;

LAB38:    if (t121 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t109) = 1;

LAB41:    memset(t97, 0, 8);
    t125 = (t109 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t109);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t125) != 0)
        goto LAB44;

LAB45:    t132 = (t97 + 4);
    t133 = *((unsigned int *)t97);
    t134 = *((unsigned int *)t132);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB46;

LAB47:    t139 = *((unsigned int *)t97);
    t140 = (~(t139));
    t141 = *((unsigned int *)t132);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t132) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t97) > 0)
        goto LAB52;

LAB53:    memcpy(t96, t144, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t49, 8, t91, 8, t96, 8);
    goto LAB37;

LAB35:    memcpy(t49, t91, 8);
    goto LAB37;

LAB40:    t124 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t97) = 1;
    goto LAB45;

LAB44:    t131 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB45;

LAB46:    t136 = (t0 + 3848);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    goto LAB47;

LAB48:    t143 = (t0 + 2008U);
    t144 = *((char **)t143);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t96, 8, t138, 8, t144, 8);
    goto LAB54;

LAB52:    memcpy(t96, t138, 8);
    goto LAB54;

}

static void Cont_59_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t45[8];
    char t50[8];
    char t51[8];
    char t52[8];
    char t63[8];
    char t93[8];
    char t98[8];
    char t99[8];
    char t100[8];
    char t111[8];
    char t141[8];
    char t146[8];
    char t147[8];
    char t148[8];
    char t159[8];
    char t188[8];
    char t193[8];
    char t194[8];
    char t195[8];
    char t205[8];
    char t235[8];
    char t240[8];
    char t241[8];
    char t242[8];
    char t253[8];
    char t283[8];
    char t288[8];
    char t289[8];
    char t290[8];
    char t301[8];
    char t331[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t187;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    char *t233;
    char *t234;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t243;
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    char *t268;
    char *t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    char *t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    char *t282;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    char *t291;
    char *t292;
    char *t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    char *t300;
    char *t302;
    char *t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    char *t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    char *t328;
    char *t329;
    char *t330;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    char *t336;
    char *t337;
    char *t338;
    char *t339;
    char *t340;
    char *t341;
    unsigned int t342;
    unsigned int t343;
    char *t344;
    unsigned int t345;
    unsigned int t346;
    char *t347;
    unsigned int t348;
    unsigned int t349;
    char *t350;

LAB0:    t1 = (t0 + 6648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t38);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t50, 8);

LAB20:    t337 = (t0 + 9000);
    t338 = (t337 + 56U);
    t339 = *((char **)t338);
    t340 = (t339 + 56U);
    t341 = *((char **)t340);
    memset(t341, 0, 8);
    t342 = 255U;
    t343 = t342;
    t344 = (t3 + 4);
    t345 = *((unsigned int *)t3);
    t342 = (t342 & t345);
    t346 = *((unsigned int *)t344);
    t343 = (t343 & t346);
    t347 = (t341 + 4);
    t348 = *((unsigned int *)t341);
    *((unsigned int *)t341) = (t348 | t342);
    t349 = *((unsigned int *)t347);
    *((unsigned int *)t347) = (t349 | t343);
    xsi_driver_vfirst_trans(t337, 0, 7);
    t350 = (t0 + 8536);
    *((int *)t350) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = (t0 + 3528);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t45, t44, 8);
    goto LAB13;

LAB14:    t53 = (t0 + 1528U);
    t54 = *((char **)t53);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t55 = (t54 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (t56 >> 2);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 2);
    *((unsigned int *)t53) = t59;
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 7U);
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 7U);
    t62 = ((char*)((ng3)));
    memset(t63, 0, 8);
    t64 = (t52 + 4);
    t65 = (t62 + 4);
    t66 = *((unsigned int *)t52);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = *((unsigned int *)t64);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = (t68 | t71);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t65);
    t75 = (t73 | t74);
    t76 = (~(t75));
    t77 = (t72 & t76);
    if (t77 != 0)
        goto LAB24;

LAB21:    if (t75 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t63) = 1;

LAB24:    memset(t51, 0, 8);
    t79 = (t63 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t63);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t79) != 0)
        goto LAB27;

LAB28:    t86 = (t51 + 4);
    t87 = *((unsigned int *)t51);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB29;

LAB30:    t94 = *((unsigned int *)t51);
    t95 = (~(t94));
    t96 = *((unsigned int *)t86);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t86) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t51) > 0)
        goto LAB35;

LAB36:    memcpy(t50, t98, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t45, 32, t50, 32);
    goto LAB20;

LAB18:    memcpy(t3, t45, 8);
    goto LAB20;

LAB23:    t78 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t51) = 1;
    goto LAB28;

LAB27:    t85 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB28;

LAB29:    t90 = (t0 + 3688);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    memcpy(t93, t92, 8);
    goto LAB30;

LAB31:    t101 = (t0 + 1528U);
    t102 = *((char **)t101);
    memset(t100, 0, 8);
    t101 = (t100 + 4);
    t103 = (t102 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (t104 >> 2);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 2);
    *((unsigned int *)t101) = t107;
    t108 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t108 & 7U);
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 7U);
    t110 = ((char*)((ng4)));
    memset(t111, 0, 8);
    t112 = (t100 + 4);
    t113 = (t110 + 4);
    t114 = *((unsigned int *)t100);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t112);
    t118 = *((unsigned int *)t113);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t112);
    t122 = *((unsigned int *)t113);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB41;

LAB38:    if (t123 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t111) = 1;

LAB41:    memset(t99, 0, 8);
    t127 = (t111 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t111);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t127) != 0)
        goto LAB44;

LAB45:    t134 = (t99 + 4);
    t135 = *((unsigned int *)t99);
    t136 = *((unsigned int *)t134);
    t137 = (t135 || t136);
    if (t137 > 0)
        goto LAB46;

LAB47:    t142 = *((unsigned int *)t99);
    t143 = (~(t142));
    t144 = *((unsigned int *)t134);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t134) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t99) > 0)
        goto LAB52;

LAB53:    memcpy(t98, t146, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t50, 32, t93, 32, t98, 32);
    goto LAB37;

LAB35:    memcpy(t50, t93, 8);
    goto LAB37;

LAB40:    t126 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t99) = 1;
    goto LAB45;

LAB44:    t133 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB45;

LAB46:    t138 = (t0 + 3848);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    memcpy(t141, t140, 8);
    goto LAB47;

LAB48:    t149 = (t0 + 1528U);
    t150 = *((char **)t149);
    memset(t148, 0, 8);
    t149 = (t148 + 4);
    t151 = (t150 + 4);
    t152 = *((unsigned int *)t150);
    t153 = (t152 >> 2);
    *((unsigned int *)t148) = t153;
    t154 = *((unsigned int *)t151);
    t155 = (t154 >> 2);
    *((unsigned int *)t149) = t155;
    t156 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t156 & 7U);
    t157 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t157 & 7U);
    t158 = ((char*)((ng5)));
    memset(t159, 0, 8);
    t160 = (t148 + 4);
    t161 = (t158 + 4);
    t162 = *((unsigned int *)t148);
    t163 = *((unsigned int *)t158);
    t164 = (t162 ^ t163);
    t165 = *((unsigned int *)t160);
    t166 = *((unsigned int *)t161);
    t167 = (t165 ^ t166);
    t168 = (t164 | t167);
    t169 = *((unsigned int *)t160);
    t170 = *((unsigned int *)t161);
    t171 = (t169 | t170);
    t172 = (~(t171));
    t173 = (t168 & t172);
    if (t173 != 0)
        goto LAB58;

LAB55:    if (t171 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t159) = 1;

LAB58:    memset(t147, 0, 8);
    t175 = (t159 + 4);
    t176 = *((unsigned int *)t175);
    t177 = (~(t176));
    t178 = *((unsigned int *)t159);
    t179 = (t178 & t177);
    t180 = (t179 & 1U);
    if (t180 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t175) != 0)
        goto LAB61;

LAB62:    t182 = (t147 + 4);
    t183 = *((unsigned int *)t147);
    t184 = *((unsigned int *)t182);
    t185 = (t183 || t184);
    if (t185 > 0)
        goto LAB63;

LAB64:    t189 = *((unsigned int *)t147);
    t190 = (~(t189));
    t191 = *((unsigned int *)t182);
    t192 = (t190 || t191);
    if (t192 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t182) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t147) > 0)
        goto LAB69;

LAB70:    memcpy(t146, t193, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t98, 32, t141, 32, t146, 32);
    goto LAB54;

LAB52:    memcpy(t98, t141, 8);
    goto LAB54;

LAB57:    t174 = (t159 + 4);
    *((unsigned int *)t159) = 1;
    *((unsigned int *)t174) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t147) = 1;
    goto LAB62;

LAB61:    t181 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t181) = 1;
    goto LAB62;

LAB63:    t186 = (t0 + 2008U);
    t187 = *((char **)t186);
    memcpy(t188, t187, 8);
    goto LAB64;

LAB65:    t186 = (t0 + 1528U);
    t196 = *((char **)t186);
    memset(t195, 0, 8);
    t186 = (t195 + 4);
    t197 = (t196 + 4);
    t198 = *((unsigned int *)t196);
    t199 = (t198 >> 2);
    *((unsigned int *)t195) = t199;
    t200 = *((unsigned int *)t197);
    t201 = (t200 >> 2);
    *((unsigned int *)t186) = t201;
    t202 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t202 & 7U);
    t203 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t203 & 7U);
    t204 = ((char*)((ng6)));
    memset(t205, 0, 8);
    t206 = (t195 + 4);
    t207 = (t204 + 4);
    t208 = *((unsigned int *)t195);
    t209 = *((unsigned int *)t204);
    t210 = (t208 ^ t209);
    t211 = *((unsigned int *)t206);
    t212 = *((unsigned int *)t207);
    t213 = (t211 ^ t212);
    t214 = (t210 | t213);
    t215 = *((unsigned int *)t206);
    t216 = *((unsigned int *)t207);
    t217 = (t215 | t216);
    t218 = (~(t217));
    t219 = (t214 & t218);
    if (t219 != 0)
        goto LAB75;

LAB72:    if (t217 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t205) = 1;

LAB75:    memset(t194, 0, 8);
    t221 = (t205 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t205);
    t225 = (t224 & t223);
    t226 = (t225 & 1U);
    if (t226 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t221) != 0)
        goto LAB78;

LAB79:    t228 = (t194 + 4);
    t229 = *((unsigned int *)t194);
    t230 = *((unsigned int *)t228);
    t231 = (t229 || t230);
    if (t231 > 0)
        goto LAB80;

LAB81:    t236 = *((unsigned int *)t194);
    t237 = (~(t236));
    t238 = *((unsigned int *)t228);
    t239 = (t237 || t238);
    if (t239 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t228) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t194) > 0)
        goto LAB86;

LAB87:    memcpy(t193, t240, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t146, 32, t188, 32, t193, 32);
    goto LAB71;

LAB69:    memcpy(t146, t188, 8);
    goto LAB71;

LAB74:    t220 = (t205 + 4);
    *((unsigned int *)t205) = 1;
    *((unsigned int *)t220) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t194) = 1;
    goto LAB79;

LAB78:    t227 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t227) = 1;
    goto LAB79;

LAB80:    t232 = (t0 + 4008);
    t233 = (t232 + 56U);
    t234 = *((char **)t233);
    memcpy(t235, t234, 8);
    goto LAB81;

LAB82:    t243 = (t0 + 1528U);
    t244 = *((char **)t243);
    memset(t242, 0, 8);
    t243 = (t242 + 4);
    t245 = (t244 + 4);
    t246 = *((unsigned int *)t244);
    t247 = (t246 >> 2);
    *((unsigned int *)t242) = t247;
    t248 = *((unsigned int *)t245);
    t249 = (t248 >> 2);
    *((unsigned int *)t243) = t249;
    t250 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t250 & 7U);
    t251 = *((unsigned int *)t243);
    *((unsigned int *)t243) = (t251 & 7U);
    t252 = ((char*)((ng7)));
    memset(t253, 0, 8);
    t254 = (t242 + 4);
    t255 = (t252 + 4);
    t256 = *((unsigned int *)t242);
    t257 = *((unsigned int *)t252);
    t258 = (t256 ^ t257);
    t259 = *((unsigned int *)t254);
    t260 = *((unsigned int *)t255);
    t261 = (t259 ^ t260);
    t262 = (t258 | t261);
    t263 = *((unsigned int *)t254);
    t264 = *((unsigned int *)t255);
    t265 = (t263 | t264);
    t266 = (~(t265));
    t267 = (t262 & t266);
    if (t267 != 0)
        goto LAB92;

LAB89:    if (t265 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t253) = 1;

LAB92:    memset(t241, 0, 8);
    t269 = (t253 + 4);
    t270 = *((unsigned int *)t269);
    t271 = (~(t270));
    t272 = *((unsigned int *)t253);
    t273 = (t272 & t271);
    t274 = (t273 & 1U);
    if (t274 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t269) != 0)
        goto LAB95;

LAB96:    t276 = (t241 + 4);
    t277 = *((unsigned int *)t241);
    t278 = *((unsigned int *)t276);
    t279 = (t277 || t278);
    if (t279 > 0)
        goto LAB97;

LAB98:    t284 = *((unsigned int *)t241);
    t285 = (~(t284));
    t286 = *((unsigned int *)t276);
    t287 = (t285 || t286);
    if (t287 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t276) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t241) > 0)
        goto LAB103;

LAB104:    memcpy(t240, t288, 8);

LAB105:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t193, 32, t235, 32, t240, 32);
    goto LAB88;

LAB86:    memcpy(t193, t235, 8);
    goto LAB88;

LAB91:    t268 = (t253 + 4);
    *((unsigned int *)t253) = 1;
    *((unsigned int *)t268) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t241) = 1;
    goto LAB96;

LAB95:    t275 = (t241 + 4);
    *((unsigned int *)t241) = 1;
    *((unsigned int *)t275) = 1;
    goto LAB96;

LAB97:    t280 = (t0 + 4168);
    t281 = (t280 + 56U);
    t282 = *((char **)t281);
    memcpy(t283, t282, 8);
    goto LAB98;

LAB99:    t291 = (t0 + 1528U);
    t292 = *((char **)t291);
    memset(t290, 0, 8);
    t291 = (t290 + 4);
    t293 = (t292 + 4);
    t294 = *((unsigned int *)t292);
    t295 = (t294 >> 2);
    *((unsigned int *)t290) = t295;
    t296 = *((unsigned int *)t293);
    t297 = (t296 >> 2);
    *((unsigned int *)t291) = t297;
    t298 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t298 & 7U);
    t299 = *((unsigned int *)t291);
    *((unsigned int *)t291) = (t299 & 7U);
    t300 = ((char*)((ng8)));
    memset(t301, 0, 8);
    t302 = (t290 + 4);
    t303 = (t300 + 4);
    t304 = *((unsigned int *)t290);
    t305 = *((unsigned int *)t300);
    t306 = (t304 ^ t305);
    t307 = *((unsigned int *)t302);
    t308 = *((unsigned int *)t303);
    t309 = (t307 ^ t308);
    t310 = (t306 | t309);
    t311 = *((unsigned int *)t302);
    t312 = *((unsigned int *)t303);
    t313 = (t311 | t312);
    t314 = (~(t313));
    t315 = (t310 & t314);
    if (t315 != 0)
        goto LAB109;

LAB106:    if (t313 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t301) = 1;

LAB109:    memset(t289, 0, 8);
    t317 = (t301 + 4);
    t318 = *((unsigned int *)t317);
    t319 = (~(t318));
    t320 = *((unsigned int *)t301);
    t321 = (t320 & t319);
    t322 = (t321 & 1U);
    if (t322 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t317) != 0)
        goto LAB112;

LAB113:    t324 = (t289 + 4);
    t325 = *((unsigned int *)t289);
    t326 = *((unsigned int *)t324);
    t327 = (t325 || t326);
    if (t327 > 0)
        goto LAB114;

LAB115:    t332 = *((unsigned int *)t289);
    t333 = (~(t332));
    t334 = *((unsigned int *)t324);
    t335 = (t333 || t334);
    if (t335 > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t324) > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t289) > 0)
        goto LAB120;

LAB121:    memcpy(t288, t336, 8);

LAB122:    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t240, 32, t283, 32, t288, 32);
    goto LAB105;

LAB103:    memcpy(t240, t283, 8);
    goto LAB105;

LAB108:    t316 = (t301 + 4);
    *((unsigned int *)t301) = 1;
    *((unsigned int *)t316) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t289) = 1;
    goto LAB113;

LAB112:    t323 = (t289 + 4);
    *((unsigned int *)t289) = 1;
    *((unsigned int *)t323) = 1;
    goto LAB113;

LAB114:    t328 = (t0 + 4328);
    t329 = (t328 + 56U);
    t330 = *((char **)t329);
    memcpy(t331, t330, 8);
    goto LAB115;

LAB116:    t336 = ((char*)((ng2)));
    goto LAB117;

LAB118:    xsi_vlog_unsigned_bit_combine(t288, 32, t331, 32, t336, 32);
    goto LAB122;

LAB120:    memcpy(t288, t331, 8);
    goto LAB122;

}

static void NetDecl_61_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 8, t3, 8, t4, 8);
    t2 = (t0 + 9064);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 7U);
    t18 = (t0 + 8552);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_69_7(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 7144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8568);
    *((int *)t2) = 1;
    t3 = (t0 + 7176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB2;

LAB6:    xsi_set_current_line(73, ng0);

LAB9:    xsi_set_current_line(74, ng0);
    t7 = (t0 + 2488U);
    t14 = *((char **)t7);
    t7 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(77, ng0);

LAB13:    xsi_set_current_line(78, ng0);
    t7 = (t0 + 2488U);
    t14 = *((char **)t7);
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 8, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(81, ng0);

LAB17:    xsi_set_current_line(82, ng0);
    t7 = (t0 + 2488U);
    t14 = *((char **)t7);
    t7 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 8, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(87, ng0);

LAB21:    xsi_set_current_line(88, ng0);
    t7 = (t0 + 2488U);
    t14 = *((char **)t7);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 8, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(91, ng0);

LAB25:    xsi_set_current_line(92, ng0);
    t7 = (t0 + 2488U);
    t14 = *((char **)t7);
    t7 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 8, 0LL);
    goto LAB24;

LAB26:    xsi_set_current_line(95, ng0);

LAB29:    xsi_set_current_line(96, ng0);
    t7 = (t0 + 2488U);
    t14 = *((char **)t7);
    t7 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 8, 0LL);
    goto LAB28;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 7392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng9)));
    xsi_vlogtype_concat(t3, 11, 11, 2U, t6, 3, t5, 8);
    t7 = (t0 + 9128);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 2047U;
    t13 = t12;
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 10);
    t20 = (t0 + 8584);
    *((int *)t20) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng9)));
    t3 = (t0 + 9192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng9)));
    xsi_vlogtype_concat(t3, 11, 11, 2U, t2, 3, t4, 8);
    t5 = (t0 + 9256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 2047U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 10);
    t18 = (t0 + 8600);
    *((int *)t18) = 1;

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng9)));
    t3 = (t0 + 9320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000001697215916_3568425967_init()
{
	static char *pe[] = {(void *)NetDecl_47_0,(void *)NetDecl_49_1,(void *)Cont_54_2,(void *)Cont_56_3,(void *)Cont_58_4,(void *)Cont_59_5,(void *)NetDecl_61_6,(void *)Always_69_7,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute};
	xsi_register_didat("work_m_00000000001697215916_3568425967", "isim/my_FCPU_isim_beh.exe.sim/work/m_00000000001697215916_3568425967.didat");
	xsi_register_executes(pe);
}

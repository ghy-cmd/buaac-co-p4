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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {4, 0};
static const char *ng1 = "code.txt";
static unsigned int ng2[] = {12288U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {0U, 0U};



static void Cont_37_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 6152);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 6008);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6024);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_39_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = (t0 + 3368);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void NetDecl_44_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t53[8];
    char t56[8];
    char t57[8];
    char t62[8];
    char t63[8];
    char t76[8];
    char t78[8];
    char t88[8];
    char t104[8];
    char t105[8];
    char t127[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t38 = (t7 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t38) != 0)
        goto LAB9;

LAB10:    t45 = (t4 + 4);
    t46 = *((unsigned int *)t4);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB11;

LAB12:    t58 = *((unsigned int *)t4);
    t59 = (~(t58));
    t60 = *((unsigned int *)t45);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t45) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t62, 8);

LAB19:    t128 = (t0 + 6280);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    memcpy(t132, t3, 8);
    xsi_driver_vfirst_trans(t128, 0, 31U);
    t133 = (t0 + 6040);
    *((int *)t133) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t44 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB10;

LAB11:    t49 = (t0 + 3528);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng0)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 32, t52, 32);
    t54 = (t0 + 1048U);
    t55 = *((char **)t54);
    t54 = ((char*)((ng3)));
    memset(t56, 0, 8);
    xsi_vlog_unsigned_lshift(t56, 32, t55, 32, t54, 32);
    memset(t57, 0, 8);
    xsi_vlog_unsigned_add(t57, 32, t53, 32, t56, 32);
    goto LAB12;

LAB13:    t64 = (t0 + 2168U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    t64 = (t65 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t65);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t64) != 0)
        goto LAB22;

LAB23:    t72 = (t63 + 4);
    t73 = *((unsigned int *)t63);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB24;

LAB25:    t100 = *((unsigned int *)t63);
    t101 = (~(t100));
    t102 = *((unsigned int *)t72);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t72) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t63) > 0)
        goto LAB30;

LAB31:    memcpy(t62, t104, 8);

LAB32:    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t57, 32, t62, 32);
    goto LAB19;

LAB17:    memcpy(t3, t57, 8);
    goto LAB19;

LAB20:    *((unsigned int *)t63) = 1;
    goto LAB23;

LAB22:    t71 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB23;

LAB24:    t77 = ((char*)((ng4)));
    t79 = (t0 + 1208U);
    t80 = *((char **)t79);
    memset(t78, 0, 8);
    t79 = (t78 + 4);
    t81 = (t80 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (t82 >> 0);
    *((unsigned int *)t78) = t83;
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 0);
    *((unsigned int *)t79) = t85;
    t86 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t86 & 67108863U);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t87 & 67108863U);
    t89 = (t0 + 3528);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t88, 0, 8);
    t92 = (t88 + 4);
    t93 = (t91 + 4);
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 28);
    *((unsigned int *)t88) = t95;
    t96 = *((unsigned int *)t93);
    t97 = (t96 >> 28);
    *((unsigned int *)t92) = t97;
    t98 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t98 & 15U);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t99 & 15U);
    xsi_vlogtype_concat(t76, 32, 32, 3U, t88, 4, t78, 26, t77, 2);
    goto LAB25;

LAB26:    t106 = (t0 + 2328U);
    t107 = *((char **)t106);
    memset(t105, 0, 8);
    t106 = (t107 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (~(t108));
    t110 = *((unsigned int *)t107);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t106) != 0)
        goto LAB35;

LAB36:    t114 = (t105 + 4);
    t115 = *((unsigned int *)t105);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB37;

LAB38:    t120 = *((unsigned int *)t105);
    t121 = (~(t120));
    t122 = *((unsigned int *)t114);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t114) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t105) > 0)
        goto LAB43;

LAB44:    memcpy(t104, t127, 8);

LAB45:    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t62, 32, t76, 32, t104, 32);
    goto LAB32;

LAB30:    memcpy(t62, t76, 8);
    goto LAB32;

LAB33:    *((unsigned int *)t105) = 1;
    goto LAB36;

LAB35:    t113 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB36;

LAB37:    t118 = (t0 + 1368U);
    t119 = *((char **)t118);
    goto LAB38;

LAB39:    t118 = (t0 + 3528);
    t124 = (t118 + 56U);
    t125 = *((char **)t124);
    t126 = ((char*)((ng0)));
    memset(t127, 0, 8);
    xsi_vlog_unsigned_add(t127, 32, t125, 32, t126, 32);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t104, 32, t119, 32, t127, 32);
    goto LAB45;

LAB43:    memcpy(t104, t119, 8);
    goto LAB45;

}

static void Always_48_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6056);
    *((int *)t2) = 1;
    t3 = (t0 + 5472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    t11 = ((char*)((ng2)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

}

static void Cont_72_5(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 3528);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 2);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1023U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 10, 2);
    t24 = (t0 + 6344);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t5, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 6072);
    *((int *)t29) = 1;

LAB1:    return;
}


extern void work_m_00000000004275808280_3224323566_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Initial_39_2,(void *)NetDecl_44_3,(void *)Always_48_4,(void *)Cont_72_5};
	xsi_register_didat("work_m_00000000004275808280_3224323566", "isim/mips.exe.sim/work/m_00000000004275808280_3224323566.didat");
	xsi_register_executes(pe);
}

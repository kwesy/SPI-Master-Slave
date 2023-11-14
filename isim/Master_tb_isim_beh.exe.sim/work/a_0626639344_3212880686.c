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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/kwesi/Desktop/VHDL_proj/SPI_master_slave/Master.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0626639344_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    int t12;
    int t13;
    unsigned char t14;
    int t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(229, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB13;

LAB15:
LAB14:    t1 = (t0 + 5520);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 5632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(220, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t2 = (t0 + 3728U);
    t7 = *((char **)t2);
    t12 = *((int *)t7);
    t13 = (t12 - 1);
    t14 = (t11 < t13);
    if (t14 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 5696);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(226, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 5632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2632U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 + 1);
    t2 = (t0 + 5696);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((int *)t20) = t16;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB13:    xsi_set_current_line(230, ng0);
    t1 = (t0 + 5632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

}

static void work_a_0626639344_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    int t11;

LAB0:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(248, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5824);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5536);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(239, ng0);
    t1 = (t0 + 5760);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t9 = (t4 == (unsigned char)3);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    xsi_set_current_line(244, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t3 = (t11 > 8);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 5760);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(245, ng0);
    t1 = (t0 + 5760);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

}

static void work_a_0626639344_3212880686_p_2(char *t0)
{
    char t18[16];
    char t19[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    static char *nl0[] = {&&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (char *)((nl0) + t1);
    goto **((char **)t2);

LAB2:    xsi_set_current_line(255, ng0);
    t4 = (t0 + 1032U);
    t8 = *((char **)t4);
    t4 = (t0 + 5888);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    t2 = (t0 + 5552);
    *((int *)t2) = 1;

LAB1:    return;
LAB9:    xsi_set_current_line(260, ng0);
    t5 = (t0 + 9524);
    t9 = (t0 + 5888);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 5952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 6016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 6080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 6144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 6208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 6144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 6080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 6208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 2272U);
    t1 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 2272U);
    t1 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB19;

LAB20:
LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(273, ng0);
    t4 = (t0 + 9532);
    xsi_report(t4, 12U, (unsigned char)0);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t14 = *((int *)t4);
    t1 = (t14 <= 7);
    if (t1 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t14 = *((int *)t4);
    t22 = (t14 + 1);
    t2 = (t0 + 6016);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t22;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 9544);
    xsi_report(t2, 17U, (unsigned char)0);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t14 = (7 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 5952);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t15 = (7 - 6);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t8 = ((IEEE_P_2592010699) + 4000);
    t9 = (t19 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 6;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t14 = (0 - 6);
    t20 = (t14 * -1);
    t20 = (t20 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t20;
    t5 = xsi_base_array_concat(t5, t18, t8, (char)97, t2, t19, (char)99, (unsigned char)2, (char)101);
    t20 = (7U + 1U);
    t1 = (8U != t20);
    if (t1 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 5888);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t21 = *((char **)t13);
    memcpy(t21, t5, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB15;

LAB17:    xsi_size_not_matching(8U, t20, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(281, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t15 = (7 - 6);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t4 = (t5 + t17);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t3 = *((unsigned char *)t9);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = (t19 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (0 - 6);
    t20 = (t14 * -1);
    t20 = (t20 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t20;
    t8 = xsi_base_array_concat(t8, t18, t10, (char)97, t4, t19, (char)99, t3, (char)101);
    t20 = (7U + 1U);
    t6 = (8U != t20);
    if (t6 == 1)
        goto LAB21;

LAB22:    t12 = (t0 + 6272);
    t13 = (t12 + 56U);
    t21 = *((char **)t13);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB12;

LAB21:    xsi_size_not_matching(8U, t20, 0);
    goto LAB22;

}


extern void work_a_0626639344_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0626639344_3212880686_p_0,(void *)work_a_0626639344_3212880686_p_1,(void *)work_a_0626639344_3212880686_p_2};
	xsi_register_didat("work_a_0626639344_3212880686", "isim/Master_tb_isim_beh.exe.sim/work/a_0626639344_3212880686.didat");
	xsi_register_executes(pe);
}

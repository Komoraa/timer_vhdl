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
static const char *ng0 = "/home/ise/xilinixsshare/projekt/T18_timer.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2913755381_1337900719_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned char t13;
    int t14;
    char *t15;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (10 - 1);
    t2 = (t11 == t12);
    if (t2 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 3344);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t12;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 3344);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB6;

LAB8:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 3408);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3408);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 60;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 3344);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = (unsigned char)0;

LAB28:    if (t2 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB15;

LAB17:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    t14 = (t12 + 1);
    t1 = (t0 + 3408);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    *((int *)t15) = t14;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t13 = (t11 < 60);
    t2 = t13;
    goto LAB22;

LAB23:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    t14 = (t12 - 1);
    t1 = (t0 + 3408);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    *((int *)t15) = t14;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB24;

LAB26:    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t13 = (t11 > 0);
    t2 = t13;
    goto LAB28;

}


extern void work_a_2913755381_1337900719_init()
{
	static char *pe[] = {(void *)work_a_2913755381_1337900719_p_0};
	xsi_register_didat("work_a_2913755381_1337900719", "isim/T18_TimerTB_isim_beh.exe.sim/work/a_2913755381_1337900719.didat");
	xsi_register_executes(pe);
}

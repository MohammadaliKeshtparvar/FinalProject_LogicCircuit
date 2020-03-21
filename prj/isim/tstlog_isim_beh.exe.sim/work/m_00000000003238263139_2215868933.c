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
static const char *ng0 = "C:/Users/Admin/Desktop/projectfinal/src/rtl/modules/LogicHealthcareSystemController.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};



static void Initial_42_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_44_1(char *t0)
{
    char t7[8];
    char t9[8];
    char t11[8];
    char t13[8];
    char t17[8];
    char t20[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5256);
    *((int *)t2) = 1;
    t3 = (t0 + 4720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = (t0 + 2320U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 3, t5, 1, t6, 1);
    t4 = (t0 + 2480U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 3, t7, 3, t8, 1);
    t4 = (t0 + 2640U);
    t10 = *((char **)t4);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 3, t9, 3, t10, 1);
    t4 = (t0 + 2800U);
    t12 = *((char **)t4);
    t4 = (t0 + 2760U);
    t14 = (t4 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t13, 3, t12, t15, 2, t16, 32, 1);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 3, t11, 3, t13, 3);
    t18 = (t0 + 2800U);
    t19 = *((char **)t18);
    t18 = (t0 + 2760U);
    t21 = (t18 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t20, 3, t19, t22, 2, t23, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 3, t17, 3, t20, 3);
    t25 = (t0 + 3520);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t26 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t26 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t26 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t26 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t26 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t26 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t26 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);
    t6 = (t0 + 3520);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t12 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t14 = (t10 + 4);
    t15 = (t12 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB25;

LAB22:    if (t36 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t7) = 1;

LAB25:    t18 = (t7 + 4);
    t39 = *((unsigned int *)t18);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB9:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 3520);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t10 = (t6 + 4);
    t12 = (t8 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t12);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t12);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB32;

LAB29:    if (t36 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t7) = 1;

LAB32:    t15 = (t7 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB21;

LAB11:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 3520);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t10 = (t6 + 4);
    t12 = (t8 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t12);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t12);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB39;

LAB36:    if (t36 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t7) = 1;

LAB39:    t15 = (t7 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB21;

LAB13:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 3520);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t10 = (t6 + 4);
    t12 = (t8 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t12);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t12);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB46;

LAB43:    if (t36 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t7) = 1;

LAB46:    t15 = (t7 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB21;

LAB15:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 3520);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    t10 = (t6 + 4);
    t12 = (t8 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t12);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t12);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB53;

LAB50:    if (t36 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t7) = 1;

LAB53:    t15 = (t7 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB21;

LAB17:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 3520);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t10 = (t6 + 4);
    t12 = (t8 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t12);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t12);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB60;

LAB57:    if (t36 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t7) = 1;

LAB60:    t15 = (t7 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB21;

LAB19:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 3520);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng9)));
    memset(t7, 0, 8);
    t10 = (t6 + 4);
    t12 = (t8 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t12);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t12);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB67;

LAB64:    if (t36 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t7) = 1;

LAB67:    t15 = (t7 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB68;

LAB69:
LAB70:    goto LAB21;

LAB24:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(49, ng0);
    t19 = ((char*)((ng1)));
    t21 = (t0 + 3360);
    xsi_vlogvar_assign_value(t21, t19, 0, 0, 3);
    goto LAB28;

LAB31:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(50, ng0);
    t16 = ((char*)((ng4)));
    t18 = (t0 + 3360);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 3);
    goto LAB35;

LAB38:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(51, ng0);
    t16 = ((char*)((ng5)));
    t18 = (t0 + 3360);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 3);
    goto LAB42;

LAB45:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(52, ng0);
    t16 = ((char*)((ng6)));
    t18 = (t0 + 3360);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 3);
    goto LAB49;

LAB52:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(53, ng0);
    t16 = ((char*)((ng7)));
    t18 = (t0 + 3360);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 3);
    goto LAB56;

LAB59:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(54, ng0);
    t16 = ((char*)((ng8)));
    t18 = (t0 + 3360);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 3);
    goto LAB63;

LAB66:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(55, ng0);
    t16 = ((char*)((ng9)));
    t18 = (t0 + 3360);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 3);
    goto LAB70;

}

static void Cont_60_2(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 5272);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003238263139_2215868933_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_44_1,(void *)Cont_60_2};
	xsi_register_didat("work_m_00000000003238263139_2215868933", "isim/tstlog_isim_beh.exe.sim/work/m_00000000003238263139_2215868933.didat");
	xsi_register_executes(pe);
}

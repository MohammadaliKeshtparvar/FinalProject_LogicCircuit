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
static const char *ng0 = "C:/Users/Admin/Desktop/projectfinal/src/rtl/modules/NervousShockDetector.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {16U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {18U, 0U};
static unsigned int ng20[] = {19U, 0U};
static unsigned int ng21[] = {20U, 0U};
static int ng22[] = {0, 0};



static void Always_35_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t15;

LAB0:    t1 = (t0 + 5864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 6432);
    *((int *)t2) = 1;
    t3 = (t0 + 5896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 4944);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4624);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t15 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t15 == 1)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 4784);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 5);
    goto LAB8;

LAB10:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 4064U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB55:    goto LAB52;

LAB12:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB58:    goto LAB52;

LAB14:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB61:    goto LAB52;

LAB16:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB64:    goto LAB52;

LAB18:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB67:    goto LAB52;

LAB20:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB70:    goto LAB52;

LAB22:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB73:    goto LAB52;

LAB24:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB76:    goto LAB52;

LAB26:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB79:    goto LAB52;

LAB28:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB82:    goto LAB52;

LAB30:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB85:    goto LAB52;

LAB32:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB88:    goto LAB52;

LAB34:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB91:    goto LAB52;

LAB36:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB94:    goto LAB52;

LAB38:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB97:    goto LAB52;

LAB40:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB100:    goto LAB52;

LAB42:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB103:    goto LAB52;

LAB44:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB106:    goto LAB52;

LAB46:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB109:    goto LAB52;

LAB48:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB112:    goto LAB52;

LAB50:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 4064U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB115:    goto LAB52;

LAB53:    xsi_set_current_line(41, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4784);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 5);
    goto LAB55;

LAB56:    xsi_set_current_line(42, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB58;

LAB59:    xsi_set_current_line(43, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB61;

LAB62:    xsi_set_current_line(44, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB64;

LAB65:    xsi_set_current_line(45, ng0);
    t6 = ((char*)((ng7)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB67;

LAB68:    xsi_set_current_line(46, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB70;

LAB71:    xsi_set_current_line(47, ng0);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB73;

LAB74:    xsi_set_current_line(48, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB76;

LAB77:    xsi_set_current_line(49, ng0);
    t6 = ((char*)((ng12)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB79;

LAB80:    xsi_set_current_line(50, ng0);
    t6 = ((char*)((ng13)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB82;

LAB83:    xsi_set_current_line(51, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB85;

LAB86:    xsi_set_current_line(52, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB88;

LAB89:    xsi_set_current_line(53, ng0);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB91;

LAB92:    xsi_set_current_line(54, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB94;

LAB95:    xsi_set_current_line(55, ng0);
    t6 = ((char*)((ng16)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB97;

LAB98:    xsi_set_current_line(56, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB100;

LAB101:    xsi_set_current_line(57, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB103;

LAB104:    xsi_set_current_line(58, ng0);
    t6 = ((char*)((ng19)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB106;

LAB107:    xsi_set_current_line(59, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB109;

LAB110:    xsi_set_current_line(60, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB112;

LAB113:    xsi_set_current_line(61, ng0);
    t6 = ((char*)((ng19)));
    t7 = (t0 + 4784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB115;

}

static void Always_66_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 6112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6448);
    *((int *)t2) = 1;
    t3 = (t0 + 6144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 4624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng14)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t8) = 1;

LAB16:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t8) = 1;

LAB23:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(68, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 4464);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB12;

LAB15:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(69, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 4464);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 2);
    goto LAB19;

LAB22:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(70, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 4464);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 2);
    goto LAB26;

}


extern void work_m_00000000003831658789_3800450596_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_66_1};
	xsi_register_didat("work_m_00000000003831658789_3800450596", "isim/tstnerv_isim_beh.exe.sim/work/m_00000000003831658789_3800450596.didat");
	xsi_register_executes(pe);
}

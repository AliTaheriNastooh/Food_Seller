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
static const char *ng0 = "F:/ali/home work/verilog/project/project1/food_seller.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static const char *ng4 = "end of your money and you havn't choice";
static const char *ng5 = "end of your time ";
static unsigned int ng6[] = {1U, 0U};
static const char *ng7 = "available item:ice cream";
static const char *ng8 = "remaining money:001";
static const char *ng9 = "please give your ice cream";
static const char *ng10 = "error and you can't choose this item";
static unsigned int ng11[] = {2U, 0U};
static const char *ng12 = "available item:ice cream , water";
static const char *ng13 = "remaining money:010";
static int ng14[] = {2, 0};
static unsigned int ng15[] = {4U, 0U};
static unsigned int ng16[] = {3U, 0U};
static const char *ng17 = "please give your water";
static const char *ng18 = "available item:ice cream , water,chips";
static const char *ng19 = "remaining money:%b";
static int ng20[] = {3, 0};
static const char *ng21 = "please give your chips";
static const char *ng22 = "available item:ice cream , water,chips,soda";
static const char *ng23 = "remaining money:100";
static int ng24[] = {4, 0};
static const char *ng25 = "please give your soda";
static unsigned int ng26[] = {5U, 0U};
static const char *ng27 = "remaining money:101";
static unsigned int ng28[] = {6U, 0U};
static const char *ng29 = "remaining money:110";
static unsigned int ng30[] = {7U, 0U};
static const char *ng31 = "remaining money:111";
static const char *ng32 = "end of your times ";



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3336);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3176);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5464);
    *((int *)t2) = 1;
    t3 = (t0 + 5176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(49, ng0);

LAB14:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(309, ng0);

LAB151:    xsi_set_current_line(310, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    xsi_set_current_line(311, ng0);
    t2 = ((char*)((ng2)));
    t28 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng3)));
    t28 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng3)));
    t28 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(314, ng0);
    t2 = ((char*)((ng1)));
    t28 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng1)));
    t28 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);

LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    t28 = (t0 + 2616U);
    t29 = *((char **)t28);
    t28 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 3, 0LL);
    goto LAB12;

LAB16:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(51, ng0);

LAB22:    xsi_set_current_line(52, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 3176);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB23:    t5 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng28)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng30)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB21;

LAB24:    xsi_set_current_line(55, ng0);

LAB41:    xsi_set_current_line(56, ng0);
    t7 = (t0 + 3976);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t28 = (t21 + 4);
    t29 = (t22 + 4);
    t9 = *((unsigned int *)t21);
    t10 = *((unsigned int *)t22);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t29);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t29);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t6) = 1;

LAB45:    t32 = (t6 + 4);
    t23 = *((unsigned int *)t32);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(61, ng0);

LAB50:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);

LAB48:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB40;

LAB26:    xsi_set_current_line(69, ng0);

LAB51:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(71, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB55;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(82, ng0);

LAB60:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);

LAB58:    goto LAB40;

LAB28:    xsi_set_current_line(87, ng0);

LAB61:    xsi_set_current_line(88, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(89, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);

LAB62:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB40;

LAB30:    xsi_set_current_line(124, ng0);

LAB76:    xsi_set_current_line(125, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng16)));
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t2, 3);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng16)));
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng20)));
    t5 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2456U);
    t5 = *((char **)t2);

LAB77:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB40;

LAB32:    xsi_set_current_line(160, ng0);

LAB91:    xsi_set_current_line(161, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(162, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng15)));
    t7 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng24)));
    t7 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2456U);
    t7 = *((char **)t2);

LAB92:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t30 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t30 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t30 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t30 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB40;

LAB34:    xsi_set_current_line(198, ng0);

LAB106:    xsi_set_current_line(199, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(200, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng26)));
    t8 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng24)));
    t8 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 2456U);
    t8 = *((char **)t2);

LAB107:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB40;

LAB36:    xsi_set_current_line(234, ng0);

LAB121:    xsi_set_current_line(235, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(236, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng28)));
    t21 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng24)));
    t21 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 2456U);
    t21 = *((char **)t2);

LAB122:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB129;

LAB130:
LAB131:    goto LAB40;

LAB38:    xsi_set_current_line(270, ng0);

LAB136:    xsi_set_current_line(271, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(272, ng0);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng30)));
    t22 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng24)));
    t22 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 2456U);
    t22 = *((char **)t2);

LAB137:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB138;

LAB139:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB140;

LAB141:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB142;

LAB143:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB40;

LAB44:    t31 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(57, ng0);

LAB49:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB48;

LAB54:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(75, ng0);

LAB59:    xsi_set_current_line(76, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB58;

LAB63:    xsi_set_current_line(94, ng0);

LAB72:    xsi_set_current_line(95, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    goto LAB71;

LAB65:    xsi_set_current_line(100, ng0);

LAB73:    xsi_set_current_line(101, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(103, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB71;

LAB67:    xsi_set_current_line(106, ng0);

LAB74:    xsi_set_current_line(107, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    goto LAB71;

LAB69:    xsi_set_current_line(113, ng0);

LAB75:    xsi_set_current_line(114, ng0);
    t5 = ((char*)((ng14)));
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    goto LAB71;

LAB78:    xsi_set_current_line(131, ng0);

LAB87:    xsi_set_current_line(132, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(134, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB86;

LAB80:    xsi_set_current_line(137, ng0);

LAB88:    xsi_set_current_line(138, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng20)));
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(140, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    goto LAB86;

LAB82:    xsi_set_current_line(144, ng0);

LAB89:    xsi_set_current_line(145, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(147, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng11)));
    t7 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    goto LAB86;

LAB84:    xsi_set_current_line(151, ng0);

LAB90:    xsi_set_current_line(152, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng14)));
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(154, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng6)));
    t7 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 3, 0LL);
    goto LAB86;

LAB93:    xsi_set_current_line(167, ng0);

LAB102:    xsi_set_current_line(168, ng0);
    t8 = ((char*)((ng2)));
    t21 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng24)));
    t8 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(170, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t8 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    goto LAB101;

LAB95:    xsi_set_current_line(174, ng0);

LAB103:    xsi_set_current_line(175, ng0);
    t8 = ((char*)((ng2)));
    t21 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng20)));
    t8 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(177, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng6)));
    t8 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    goto LAB101;

LAB97:    xsi_set_current_line(181, ng0);

LAB104:    xsi_set_current_line(182, ng0);
    t8 = ((char*)((ng2)));
    t21 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t8 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(184, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng16)));
    t8 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    goto LAB101;

LAB99:    xsi_set_current_line(188, ng0);

LAB105:    xsi_set_current_line(189, ng0);
    t8 = ((char*)((ng14)));
    t21 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 3, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t8 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng11)));
    t8 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 3, 0LL);
    goto LAB101;

LAB108:    xsi_set_current_line(205, ng0);

LAB117:    xsi_set_current_line(206, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng24)));
    t21 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(208, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng6)));
    t21 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 3, 0LL);
    goto LAB116;

LAB110:    xsi_set_current_line(212, ng0);

LAB118:    xsi_set_current_line(213, ng0);
    t21 = ((char*)((ng20)));
    t22 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    xsi_set_current_line(214, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng11)));
    t21 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 3, 0LL);
    goto LAB116;

LAB112:    xsi_set_current_line(218, ng0);

LAB119:    xsi_set_current_line(219, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng2)));
    t21 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(221, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng15)));
    t21 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 3, 0LL);
    goto LAB116;

LAB114:    xsi_set_current_line(225, ng0);

LAB120:    xsi_set_current_line(226, ng0);
    t21 = ((char*)((ng14)));
    t22 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng2)));
    t21 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng16)));
    t21 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t21, t2, 0, 0, 3, 0LL);
    goto LAB116;

LAB123:    xsi_set_current_line(241, ng0);

LAB132:    xsi_set_current_line(242, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng24)));
    t22 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(244, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng11)));
    t22 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    goto LAB131;

LAB125:    xsi_set_current_line(248, ng0);

LAB133:    xsi_set_current_line(249, ng0);
    t22 = ((char*)((ng20)));
    t28 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 3, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng2)));
    t22 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(251, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng16)));
    t22 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    goto LAB131;

LAB127:    xsi_set_current_line(255, ng0);

LAB134:    xsi_set_current_line(256, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng2)));
    t22 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(258, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng26)));
    t22 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    goto LAB131;

LAB129:    xsi_set_current_line(262, ng0);

LAB135:    xsi_set_current_line(263, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng14)));
    t22 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(265, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng15)));
    t22 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t22, t2, 0, 0, 3, 0LL);
    goto LAB131;

LAB138:    xsi_set_current_line(277, ng0);

LAB147:    xsi_set_current_line(278, ng0);
    t28 = ((char*)((ng24)));
    t29 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(279, ng0);
    t2 = ((char*)((ng2)));
    t28 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(280, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng16)));
    t28 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    goto LAB146;

LAB140:    xsi_set_current_line(284, ng0);

LAB148:    xsi_set_current_line(285, ng0);
    t28 = ((char*)((ng20)));
    t29 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(286, ng0);
    t2 = ((char*)((ng2)));
    t28 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(287, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(288, ng0);
    t2 = ((char*)((ng15)));
    t28 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    goto LAB146;

LAB142:    xsi_set_current_line(291, ng0);

LAB149:    xsi_set_current_line(292, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng2)));
    t28 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(294, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng28)));
    t28 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    goto LAB146;

LAB144:    xsi_set_current_line(298, ng0);

LAB150:    xsi_set_current_line(299, ng0);
    t28 = ((char*)((ng14)));
    t29 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = ((char*)((ng2)));
    t28 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(301, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng26)));
    t28 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t28, t2, 0, 0, 3, 0LL);
    goto LAB146;

}


extern void work_m_00000000003820552299_4086468599_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_42_1};
	xsi_register_didat("work_m_00000000003820552299_4086468599", "isim/test3_isim_beh.exe.sim/work/m_00000000003820552299_4086468599.didat");
	xsi_register_executes(pe);
}

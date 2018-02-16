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
static int ng3[] = {2, 0};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {0U, 0U};
static const char *ng6 = "end of your money and you havn't choice";
static unsigned int ng7[] = {1U, 0U};
static const char *ng8 = "available item:ice cream";
static const char *ng9 = "remaining money:001";
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {2U, 0U};
static const char *ng12 = "available item:ice cream , water";
static const char *ng13 = "remaining money:010";
static unsigned int ng14[] = {3U, 0U};
static const char *ng15 = "available item:ice cream , water,chips";
static const char *ng16 = "remaining money:%b";
static int ng17[] = {3, 0};
static unsigned int ng18[] = {4U, 0U};
static const char *ng19 = "available item:ice cream , water,chips,soda";
static const char *ng20 = "remaining money:100";
static int ng21[] = {4, 0};
static unsigned int ng22[] = {5U, 0U};
static const char *ng23 = "remaining money:101";
static unsigned int ng24[] = {6U, 0U};
static const char *ng25 = "remaining money:110";
static unsigned int ng26[] = {7U, 0U};
static const char *ng27 = "remaining money:111";
static unsigned int ng28[] = {10U, 0U};
static const char *ng29 = "your time is end and give yor remaining money";
static const char *ng30 = "please give your ice cream";
static const char *ng31 = "you can't choose any things because icecream end ";
static const char *ng32 = "please give your remaining money : %d";
static const char *ng33 = "error and you can't choose this item";
static const char *ng34 = "please choose another things because icecream end ";
static const char *ng35 = "please give your water";
static const char *ng36 = "please choose another things because water end ";
static const char *ng37 = "please give your chips";
static const char *ng38 = "please choose another things because chips end ";
static const char *ng39 = "please give your soda";
static const char *ng40 = "please choose another things because soda end ";



static void Initial_42_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3584);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 5504);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5344);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4064);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4704);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_56_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 7240);
    *((int *)t2) = 1;
    t3 = (t0 + 6704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4704);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Always_61_2(char *t0)
{
    char t6[8];
    char t31[8];
    char t38[8];
    char t54[8];
    char t62[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;

LAB0:    t1 = (t0 + 6920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 7256);
    *((int *)t2) = 1;
    t3 = (t0 + 6952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 2704U);
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

LAB11:    xsi_set_current_line(68, ng0);

LAB14:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng28)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB36;

LAB37:
LAB38:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(71, ng0);

LAB39:    xsi_set_current_line(72, ng0);
    t7 = (t0 + 3024U);
    t8 = *((char **)t7);
    memcpy(t6, t8, 8);
    t7 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB38;

LAB18:    xsi_set_current_line(75, ng0);

LAB40:    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB20:    xsi_set_current_line(80, ng0);

LAB41:    xsi_set_current_line(81, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB22:    xsi_set_current_line(89, ng0);

LAB42:    xsi_set_current_line(90, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB24:    xsi_set_current_line(98, ng0);

LAB43:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng14)));
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t2, 4);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB26:    xsi_set_current_line(107, ng0);

LAB44:    xsi_set_current_line(108, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(109, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB28:    xsi_set_current_line(116, ng0);

LAB45:    xsi_set_current_line(117, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(118, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB30:    xsi_set_current_line(126, ng0);

LAB46:    xsi_set_current_line(127, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(128, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB32:    xsi_set_current_line(136, ng0);

LAB47:    xsi_set_current_line(137, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(138, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB38;

LAB34:    xsi_set_current_line(146, ng0);

LAB48:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;

LAB52:    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t21) != 0)
        goto LAB55;

LAB56:    t28 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t28);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB57;

LAB58:    memcpy(t62, t31, 8);

LAB59:    t93 = (t62 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t62);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(157, ng0);

LAB75:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB79;

LAB76:    if (t18 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t6) = 1;

LAB79:    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t21) != 0)
        goto LAB82;

LAB83:    t28 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t28);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB84;

LAB85:    memcpy(t62, t31, 8);

LAB86:    t93 = (t62 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t62);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB98;

LAB99:
LAB100:
LAB73:    goto LAB38;

LAB36:    xsi_set_current_line(170, ng0);

LAB102:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 4864);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);

LAB103:    t8 = ((char*)((ng7)));
    t86 = xsi_vlog_unsigned_case_compare(t7, 4, t8, 4);
    if (t86 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB116;

LAB117:
LAB118:    goto LAB38;

LAB51:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t31) = 1;
    goto LAB56;

LAB55:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB56;

LAB57:    t29 = (t0 + 4704);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB63;

LAB60:    if (t50 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t38) = 1;

LAB63:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t55) != 0)
        goto LAB66;

LAB67:    t63 = *((unsigned int *)t31);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t31 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB59;

LAB62:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t54) = 1;
    goto LAB67;

LAB66:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB67;

LAB68:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t31 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t31);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t30 = (t79 & t81);
    t86 = (t83 & t85);
    t87 = (~(t30));
    t88 = (~(t86));
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t91 & t87);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    goto LAB70;

LAB71:    xsi_set_current_line(150, ng0);

LAB74:    xsi_set_current_line(151, ng0);
    t99 = ((char*)((ng28)));
    t100 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t100, t99, 0, 0, 4, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB73;

LAB78:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t31) = 1;
    goto LAB83;

LAB82:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB83;

LAB84:    t29 = (t0 + 4704);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB90;

LAB87:    if (t50 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t38) = 1;

LAB90:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t55) != 0)
        goto LAB93;

LAB94:    t63 = *((unsigned int *)t31);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t31 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB86;

LAB89:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t54) = 1;
    goto LAB94;

LAB93:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB94;

LAB95:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t31 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t31);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t30 = (t79 & t81);
    t86 = (t83 & t85);
    t87 = (~(t30));
    t88 = (~(t86));
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t91 & t87);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    goto LAB97;

LAB98:    xsi_set_current_line(159, ng0);

LAB101:    xsi_set_current_line(160, ng0);
    t99 = ((char*)((ng4)));
    t100 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t100, t99, 0, 0, 4, 0LL);
    xsi_set_current_line(161, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4864);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB100;

LAB104:    xsi_set_current_line(173, ng0);

LAB119:    xsi_set_current_line(174, ng0);
    t21 = (t0 + 2864U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t9 = *((unsigned int *)t22);
    t10 = *((unsigned int *)t21);
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
        goto LAB123;

LAB120:    if (t18 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t6) = 1;

LAB123:    t36 = (t6 + 4);
    t23 = *((unsigned int *)t36);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(190, ng0);

LAB138:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 2864U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB142;

LAB139:    if (t18 != 0)
        goto LAB141;

LAB140:    *((unsigned int *)t6) = 1;

LAB142:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB143;

LAB144:    xsi_set_current_line(197, ng0);

LAB147:    xsi_set_current_line(198, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB145:
LAB126:    goto LAB118;

LAB106:    xsi_set_current_line(206, ng0);

LAB148:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 2864U);
    t5 = *((char **)t3);

LAB149:    t3 = ((char*)((ng18)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t86 == 1)
        goto LAB150;

LAB151:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB152;

LAB153:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB154;

LAB155:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB156;

LAB157:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t30 == 1)
        goto LAB158;

LAB159:
LAB160:    goto LAB118;

LAB108:    xsi_set_current_line(260, ng0);

LAB186:    xsi_set_current_line(261, ng0);
    t3 = (t0 + 2864U);
    t8 = *((char **)t3);

LAB187:    t3 = ((char*)((ng18)));
    t86 = xsi_vlog_unsigned_case_compare(t8, 3, t3, 3);
    if (t86 == 1)
        goto LAB188;

LAB189:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB190;

LAB191:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB192;

LAB193:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB194;

LAB195:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t30 == 1)
        goto LAB196;

LAB197:
LAB198:    goto LAB118;

LAB110:    xsi_set_current_line(322, ng0);

LAB234:    xsi_set_current_line(323, ng0);
    t3 = (t0 + 2864U);
    t21 = *((char **)t3);

LAB235:    t3 = ((char*)((ng18)));
    t86 = xsi_vlog_unsigned_case_compare(t21, 3, t3, 3);
    if (t86 == 1)
        goto LAB236;

LAB237:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB238;

LAB239:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB240;

LAB241:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB242;

LAB243:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t30 == 1)
        goto LAB244;

LAB245:
LAB246:    goto LAB118;

LAB112:    xsi_set_current_line(394, ng0);

LAB292:    xsi_set_current_line(395, ng0);
    t3 = (t0 + 2864U);
    t22 = *((char **)t3);

LAB293:    t3 = ((char*)((ng18)));
    t86 = xsi_vlog_unsigned_case_compare(t22, 3, t3, 3);
    if (t86 == 1)
        goto LAB294;

LAB295:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB296;

LAB297:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB298;

LAB299:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB300;

LAB301:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 3);
    if (t30 == 1)
        goto LAB302;

LAB303:
LAB304:    goto LAB118;

LAB114:    xsi_set_current_line(465, ng0);

LAB350:    xsi_set_current_line(466, ng0);
    t3 = (t0 + 2864U);
    t28 = *((char **)t3);

LAB351:    t3 = ((char*)((ng18)));
    t86 = xsi_vlog_unsigned_case_compare(t28, 3, t3, 3);
    if (t86 == 1)
        goto LAB352;

LAB353:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 3, t2, 3);
    if (t30 == 1)
        goto LAB354;

LAB355:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 3, t2, 3);
    if (t30 == 1)
        goto LAB356;

LAB357:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 3, t2, 3);
    if (t30 == 1)
        goto LAB358;

LAB359:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 3, t2, 3);
    if (t30 == 1)
        goto LAB360;

LAB361:
LAB362:    goto LAB118;

LAB116:    xsi_set_current_line(535, ng0);

LAB408:    xsi_set_current_line(536, ng0);
    t3 = (t0 + 2864U);
    t29 = *((char **)t3);

LAB409:    t3 = ((char*)((ng18)));
    t86 = xsi_vlog_unsigned_case_compare(t29, 3, t3, 3);
    if (t86 == 1)
        goto LAB410;

LAB411:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB412;

LAB413:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB414;

LAB415:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB416;

LAB417:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB418;

LAB419:
LAB420:    goto LAB118;

LAB122:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB123;

LAB124:    xsi_set_current_line(175, ng0);

LAB127:    xsi_set_current_line(176, ng0);
    t37 = (t0 + 5344);
    t39 = (t37 + 56U);
    t40 = *((char **)t39);
    t53 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t55 = (t40 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB129;

LAB128:    t61 = (t53 + 4);
    if (*((unsigned int *)t61) != 0)
        goto LAB129;

LAB132:    if (*((unsigned int *)t40) > *((unsigned int *)t53))
        goto LAB130;

LAB131:    t67 = (t31 + 4);
    t32 = *((unsigned int *)t67);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t41 = (t34 & t33);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(184, ng0);

LAB137:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(186, ng0);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);

LAB135:    goto LAB126;

LAB129:    t66 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB131;

LAB130:    *((unsigned int *)t31) = 1;
    goto LAB131;

LAB133:    xsi_set_current_line(177, ng0);

LAB136:    xsi_set_current_line(178, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 3, t8, 32);
    t21 = (t0 + 5344);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 3);
    goto LAB135;

LAB141:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB142;

LAB143:    xsi_set_current_line(192, ng0);

LAB146:    xsi_set_current_line(193, ng0);
    t28 = ((char*)((ng7)));
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t28, 4);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB145;

LAB150:    xsi_set_current_line(209, ng0);

LAB161:    xsi_set_current_line(210, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB160;

LAB152:    xsi_set_current_line(215, ng0);

LAB162:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(218, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    goto LAB160;

LAB154:    xsi_set_current_line(221, ng0);

LAB163:    xsi_set_current_line(222, ng0);
    t3 = (t0 + 5344);
    t8 = (t3 + 56U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB165;

LAB164:    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB165;

LAB168:    if (*((unsigned int *)t21) > *((unsigned int *)t22))
        goto LAB166;

LAB167:    t36 = (t6 + 4);
    t9 = *((unsigned int *)t36);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB169;

LAB170:    xsi_set_current_line(230, ng0);

LAB173:    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(232, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);

LAB171:    goto LAB160;

LAB156:    xsi_set_current_line(236, ng0);

LAB174:    xsi_set_current_line(237, ng0);
    t3 = (t0 + 5504);
    t8 = (t3 + 56U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB176;

LAB175:    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB176;

LAB179:    if (*((unsigned int *)t21) > *((unsigned int *)t22))
        goto LAB177;

LAB178:    t36 = (t6 + 4);
    t9 = *((unsigned int *)t36);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB180;

LAB181:    xsi_set_current_line(245, ng0);

LAB184:    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(247, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);

LAB182:    goto LAB160;

LAB158:    xsi_set_current_line(251, ng0);

LAB185:    xsi_set_current_line(252, ng0);
    t3 = ((char*)((ng11)));
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB160;

LAB165:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB167;

LAB166:    *((unsigned int *)t6) = 1;
    goto LAB167;

LAB169:    xsi_set_current_line(223, ng0);

LAB172:    xsi_set_current_line(224, ng0);
    t37 = ((char*)((ng2)));
    t39 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t39, t37, 0, 0, 3, 0LL);
    xsi_set_current_line(225, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t21 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t8, 3, t21, 32);
    t22 = (t0 + 5344);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 3);
    goto LAB171;

LAB176:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB178;

LAB177:    *((unsigned int *)t6) = 1;
    goto LAB178;

LAB180:    xsi_set_current_line(238, ng0);

LAB183:    xsi_set_current_line(239, ng0);
    t37 = ((char*)((ng3)));
    t39 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t39, t37, 0, 0, 3, 0LL);
    xsi_set_current_line(240, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t21 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t8, 3, t21, 32);
    t22 = (t0 + 5504);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 3);
    goto LAB182;

LAB188:    xsi_set_current_line(263, ng0);

LAB199:    xsi_set_current_line(264, ng0);
    t21 = ((char*)((ng14)));
    t22 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(266, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    goto LAB198;

LAB190:    xsi_set_current_line(269, ng0);

LAB200:    xsi_set_current_line(270, ng0);
    t3 = (t0 + 5184);
    t21 = (t3 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB202;

LAB201:    t35 = (t28 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB202;

LAB205:    if (*((unsigned int *)t22) > *((unsigned int *)t28))
        goto LAB203;

LAB204:    t37 = (t6 + 4);
    t9 = *((unsigned int *)t37);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB206;

LAB207:    xsi_set_current_line(278, ng0);

LAB210:    xsi_set_current_line(279, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(280, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);

LAB208:    goto LAB198;

LAB192:    xsi_set_current_line(284, ng0);

LAB211:    xsi_set_current_line(285, ng0);
    t3 = (t0 + 5344);
    t21 = (t3 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB213;

LAB212:    t35 = (t28 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB213;

LAB216:    if (*((unsigned int *)t22) > *((unsigned int *)t28))
        goto LAB214;

LAB215:    t37 = (t6 + 4);
    t9 = *((unsigned int *)t37);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB217;

LAB218:    xsi_set_current_line(293, ng0);

LAB221:    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(295, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);

LAB219:    goto LAB198;

LAB194:    xsi_set_current_line(299, ng0);

LAB222:    xsi_set_current_line(300, ng0);
    t3 = (t0 + 5504);
    t21 = (t3 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB224;

LAB223:    t35 = (t28 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB224;

LAB227:    if (*((unsigned int *)t22) > *((unsigned int *)t28))
        goto LAB225;

LAB226:    t37 = (t6 + 4);
    t9 = *((unsigned int *)t37);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB228;

LAB229:    xsi_set_current_line(308, ng0);

LAB232:    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(310, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);

LAB230:    goto LAB198;

LAB196:    xsi_set_current_line(314, ng0);

LAB233:    xsi_set_current_line(315, ng0);
    t3 = ((char*)((ng14)));
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB198;

LAB202:    t36 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB204;

LAB203:    *((unsigned int *)t6) = 1;
    goto LAB204;

LAB206:    xsi_set_current_line(271, ng0);

LAB209:    xsi_set_current_line(272, ng0);
    t39 = ((char*)((ng17)));
    t40 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 3, 0LL);
    xsi_set_current_line(273, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t21 = *((char **)t3);
    t22 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t21, 3, t22, 32);
    t28 = (t0 + 5184);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 3);
    goto LAB208;

LAB213:    t36 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB215;

LAB214:    *((unsigned int *)t6) = 1;
    goto LAB215;

LAB217:    xsi_set_current_line(286, ng0);

LAB220:    xsi_set_current_line(287, ng0);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 3, 0LL);
    xsi_set_current_line(288, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t21 = *((char **)t3);
    t22 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t21, 3, t22, 32);
    t28 = (t0 + 5344);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 3);
    goto LAB219;

LAB224:    t36 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB226;

LAB225:    *((unsigned int *)t6) = 1;
    goto LAB226;

LAB228:    xsi_set_current_line(301, ng0);

LAB231:    xsi_set_current_line(302, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 3, 0LL);
    xsi_set_current_line(303, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t21 = *((char **)t3);
    t22 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t21, 3, t22, 32);
    t28 = (t0 + 5504);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 3);
    goto LAB230;

LAB236:    xsi_set_current_line(325, ng0);

LAB247:    xsi_set_current_line(326, ng0);
    t22 = (t0 + 5024);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t36 = (t29 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB249;

LAB248:    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB249;

LAB252:    if (*((unsigned int *)t29) > *((unsigned int *)t35))
        goto LAB250;

LAB251:    t40 = (t6 + 4);
    t9 = *((unsigned int *)t40);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB253;

LAB254:    xsi_set_current_line(334, ng0);

LAB257:    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(336, ng0);
    xsi_vlogfile_write(1, 0, 0, ng40, 1, t0);

LAB255:    goto LAB246;

LAB238:    xsi_set_current_line(341, ng0);

LAB258:    xsi_set_current_line(342, ng0);
    t3 = (t0 + 5184);
    t22 = (t3 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t35 = (t28 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB260;

LAB259:    t36 = (t29 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB260;

LAB263:    if (*((unsigned int *)t28) > *((unsigned int *)t29))
        goto LAB261;

LAB262:    t39 = (t6 + 4);
    t9 = *((unsigned int *)t39);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB264;

LAB265:    xsi_set_current_line(350, ng0);

LAB268:    xsi_set_current_line(351, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(352, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);

LAB266:    goto LAB246;

LAB240:    xsi_set_current_line(356, ng0);

LAB269:    xsi_set_current_line(357, ng0);
    t3 = (t0 + 5344);
    t22 = (t3 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t35 = (t28 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB271;

LAB270:    t36 = (t29 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB271;

LAB274:    if (*((unsigned int *)t28) > *((unsigned int *)t29))
        goto LAB272;

LAB273:    t39 = (t6 + 4);
    t9 = *((unsigned int *)t39);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB275;

LAB276:    xsi_set_current_line(365, ng0);

LAB279:    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(367, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);

LAB277:    goto LAB246;

LAB242:    xsi_set_current_line(371, ng0);

LAB280:    xsi_set_current_line(372, ng0);
    t3 = (t0 + 5504);
    t22 = (t3 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t35 = (t28 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB282;

LAB281:    t36 = (t29 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB282;

LAB285:    if (*((unsigned int *)t28) > *((unsigned int *)t29))
        goto LAB283;

LAB284:    t39 = (t6 + 4);
    t9 = *((unsigned int *)t39);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB286;

LAB287:    xsi_set_current_line(380, ng0);

LAB290:    xsi_set_current_line(381, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(382, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);

LAB288:    goto LAB246;

LAB244:    xsi_set_current_line(386, ng0);

LAB291:    xsi_set_current_line(387, ng0);
    t3 = ((char*)((ng18)));
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB246;

LAB249:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB251;

LAB250:    *((unsigned int *)t6) = 1;
    goto LAB251;

LAB253:    xsi_set_current_line(327, ng0);

LAB256:    xsi_set_current_line(328, ng0);
    t53 = ((char*)((ng21)));
    t55 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t55, t53, 0, 0, 3, 0LL);
    xsi_set_current_line(329, ng0);
    xsi_vlogfile_write(1, 0, 0, ng39, 1, t0);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(331, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t22 = *((char **)t3);
    t28 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t22, 3, t28, 32);
    t29 = (t0 + 5024);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 3);
    goto LAB255;

LAB260:    t37 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB262;

LAB261:    *((unsigned int *)t6) = 1;
    goto LAB262;

LAB264:    xsi_set_current_line(343, ng0);

LAB267:    xsi_set_current_line(344, ng0);
    t40 = ((char*)((ng17)));
    t53 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t53, t40, 0, 0, 3, 0LL);
    xsi_set_current_line(345, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(347, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t22 = *((char **)t3);
    t28 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t22, 3, t28, 32);
    t29 = (t0 + 5184);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 3);
    goto LAB266;

LAB271:    t37 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB273;

LAB272:    *((unsigned int *)t6) = 1;
    goto LAB273;

LAB275:    xsi_set_current_line(358, ng0);

LAB278:    xsi_set_current_line(359, ng0);
    t40 = ((char*)((ng2)));
    t53 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t53, t40, 0, 0, 3, 0LL);
    xsi_set_current_line(360, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(361, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(362, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t22 = *((char **)t3);
    t28 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t22, 3, t28, 32);
    t29 = (t0 + 5344);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 3);
    goto LAB277;

LAB282:    t37 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB284;

LAB283:    *((unsigned int *)t6) = 1;
    goto LAB284;

LAB286:    xsi_set_current_line(373, ng0);

LAB289:    xsi_set_current_line(374, ng0);
    t40 = ((char*)((ng3)));
    t53 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t53, t40, 0, 0, 3, 0LL);
    xsi_set_current_line(375, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    xsi_set_current_line(376, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t22 = *((char **)t3);
    t28 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t22, 3, t28, 32);
    t29 = (t0 + 5504);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 3);
    goto LAB288;

LAB294:    xsi_set_current_line(397, ng0);

LAB305:    xsi_set_current_line(398, ng0);
    t28 = (t0 + 5024);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t36 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB307;

LAB306:    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB307;

LAB310:    if (*((unsigned int *)t35) > *((unsigned int *)t36))
        goto LAB308;

LAB309:    t53 = (t6 + 4);
    t9 = *((unsigned int *)t53);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB311;

LAB312:    xsi_set_current_line(406, ng0);

LAB315:    xsi_set_current_line(407, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(408, ng0);
    xsi_vlogfile_write(1, 0, 0, ng40, 1, t0);

LAB313:    goto LAB304;

LAB296:    xsi_set_current_line(413, ng0);

LAB316:    xsi_set_current_line(414, ng0);
    t3 = (t0 + 5184);
    t28 = (t3 + 56U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t36 = (t29 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB318;

LAB317:    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB318;

LAB321:    if (*((unsigned int *)t29) > *((unsigned int *)t35))
        goto LAB319;

LAB320:    t40 = (t6 + 4);
    t9 = *((unsigned int *)t40);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB322;

LAB323:    xsi_set_current_line(422, ng0);

LAB326:    xsi_set_current_line(423, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(424, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);

LAB324:    goto LAB304;

LAB298:    xsi_set_current_line(428, ng0);

LAB327:    xsi_set_current_line(429, ng0);
    t3 = (t0 + 5344);
    t28 = (t3 + 56U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t36 = (t29 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB329;

LAB328:    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB329;

LAB332:    if (*((unsigned int *)t29) > *((unsigned int *)t35))
        goto LAB330;

LAB331:    t40 = (t6 + 4);
    t9 = *((unsigned int *)t40);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB333;

LAB334:    xsi_set_current_line(437, ng0);

LAB337:    xsi_set_current_line(438, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(439, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);

LAB335:    goto LAB304;

LAB300:    xsi_set_current_line(443, ng0);

LAB338:    xsi_set_current_line(444, ng0);
    t3 = (t0 + 5504);
    t28 = (t3 + 56U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t36 = (t29 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB340;

LAB339:    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB340;

LAB343:    if (*((unsigned int *)t29) > *((unsigned int *)t35))
        goto LAB341;

LAB342:    t40 = (t6 + 4);
    t9 = *((unsigned int *)t40);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB344;

LAB345:    xsi_set_current_line(452, ng0);

LAB348:    xsi_set_current_line(453, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(454, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);

LAB346:    goto LAB304;

LAB302:    xsi_set_current_line(458, ng0);

LAB349:    xsi_set_current_line(459, ng0);
    t3 = ((char*)((ng22)));
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(460, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB304;

LAB307:    t40 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB309;

LAB308:    *((unsigned int *)t6) = 1;
    goto LAB309;

LAB311:    xsi_set_current_line(399, ng0);

LAB314:    xsi_set_current_line(400, ng0);
    t55 = ((char*)((ng21)));
    t61 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t61, t55, 0, 0, 3, 0LL);
    xsi_set_current_line(401, ng0);
    xsi_vlogfile_write(1, 0, 0, ng39, 1, t0);
    xsi_set_current_line(402, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(403, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t28 = *((char **)t3);
    t29 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t28, 3, t29, 32);
    t35 = (t0 + 5024);
    xsi_vlogvar_assign_value(t35, t6, 0, 0, 3);
    goto LAB313;

LAB318:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB320;

LAB319:    *((unsigned int *)t6) = 1;
    goto LAB320;

LAB322:    xsi_set_current_line(415, ng0);

LAB325:    xsi_set_current_line(416, ng0);
    t53 = ((char*)((ng17)));
    t55 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t55, t53, 0, 0, 3, 0LL);
    xsi_set_current_line(417, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(418, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(419, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t28 = *((char **)t3);
    t29 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t28, 3, t29, 32);
    t35 = (t0 + 5184);
    xsi_vlogvar_assign_value(t35, t6, 0, 0, 3);
    goto LAB324;

LAB329:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB331;

LAB330:    *((unsigned int *)t6) = 1;
    goto LAB331;

LAB333:    xsi_set_current_line(430, ng0);

LAB336:    xsi_set_current_line(431, ng0);
    t53 = ((char*)((ng2)));
    t55 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t55, t53, 0, 0, 3, 0LL);
    xsi_set_current_line(432, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(433, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(434, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t28 = *((char **)t3);
    t29 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t28, 3, t29, 32);
    t35 = (t0 + 5344);
    xsi_vlogvar_assign_value(t35, t6, 0, 0, 3);
    goto LAB335;

LAB340:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB342;

LAB341:    *((unsigned int *)t6) = 1;
    goto LAB342;

LAB344:    xsi_set_current_line(445, ng0);

LAB347:    xsi_set_current_line(446, ng0);
    t53 = ((char*)((ng3)));
    t55 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t55, t53, 0, 0, 3, 0LL);
    xsi_set_current_line(447, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    xsi_set_current_line(448, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(449, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t28 = *((char **)t3);
    t29 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t28, 3, t29, 32);
    t35 = (t0 + 5504);
    xsi_vlogvar_assign_value(t35, t6, 0, 0, 3);
    goto LAB346;

LAB352:    xsi_set_current_line(468, ng0);

LAB363:    xsi_set_current_line(469, ng0);
    t29 = (t0 + 5024);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB365;

LAB364:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB365;

LAB368:    if (*((unsigned int *)t36) > *((unsigned int *)t37))
        goto LAB366;

LAB367:    t55 = (t6 + 4);
    t9 = *((unsigned int *)t55);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB369;

LAB370:    xsi_set_current_line(477, ng0);

LAB373:    xsi_set_current_line(478, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(479, ng0);
    xsi_vlogfile_write(1, 0, 0, ng40, 1, t0);

LAB371:    goto LAB362;

LAB354:    xsi_set_current_line(483, ng0);

LAB374:    xsi_set_current_line(484, ng0);
    t3 = (t0 + 5184);
    t29 = (t3 + 56U);
    t35 = *((char **)t29);
    t36 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB376;

LAB375:    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB376;

LAB379:    if (*((unsigned int *)t35) > *((unsigned int *)t36))
        goto LAB377;

LAB378:    t53 = (t6 + 4);
    t9 = *((unsigned int *)t53);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB380;

LAB381:    xsi_set_current_line(492, ng0);

LAB384:    xsi_set_current_line(493, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(494, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);

LAB382:    goto LAB362;

LAB356:    xsi_set_current_line(498, ng0);

LAB385:    xsi_set_current_line(499, ng0);
    t3 = (t0 + 5344);
    t29 = (t3 + 56U);
    t35 = *((char **)t29);
    t36 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB387;

LAB386:    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB387;

LAB390:    if (*((unsigned int *)t35) > *((unsigned int *)t36))
        goto LAB388;

LAB389:    t53 = (t6 + 4);
    t9 = *((unsigned int *)t53);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB391;

LAB392:    xsi_set_current_line(507, ng0);

LAB395:    xsi_set_current_line(508, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(509, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);

LAB393:    goto LAB362;

LAB358:    xsi_set_current_line(513, ng0);

LAB396:    xsi_set_current_line(514, ng0);
    t3 = (t0 + 5504);
    t29 = (t3 + 56U);
    t35 = *((char **)t29);
    t36 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB398;

LAB397:    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB398;

LAB401:    if (*((unsigned int *)t35) > *((unsigned int *)t36))
        goto LAB399;

LAB400:    t53 = (t6 + 4);
    t9 = *((unsigned int *)t53);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB402;

LAB403:    xsi_set_current_line(522, ng0);

LAB406:    xsi_set_current_line(523, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(524, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);

LAB404:    goto LAB362;

LAB360:    xsi_set_current_line(528, ng0);

LAB407:    xsi_set_current_line(529, ng0);
    t3 = ((char*)((ng24)));
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(530, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB362;

LAB365:    t53 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB367;

LAB366:    *((unsigned int *)t6) = 1;
    goto LAB367;

LAB369:    xsi_set_current_line(470, ng0);

LAB372:    xsi_set_current_line(471, ng0);
    t61 = ((char*)((ng21)));
    t66 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t66, t61, 0, 0, 3, 0LL);
    xsi_set_current_line(472, ng0);
    xsi_vlogfile_write(1, 0, 0, ng39, 1, t0);
    xsi_set_current_line(473, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(474, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t29 = *((char **)t3);
    t35 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t29, 3, t35, 32);
    t36 = (t0 + 5024);
    xsi_vlogvar_assign_value(t36, t6, 0, 0, 3);
    goto LAB371;

LAB376:    t40 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB378;

LAB377:    *((unsigned int *)t6) = 1;
    goto LAB378;

LAB380:    xsi_set_current_line(485, ng0);

LAB383:    xsi_set_current_line(486, ng0);
    t55 = ((char*)((ng17)));
    t61 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t61, t55, 0, 0, 3, 0LL);
    xsi_set_current_line(487, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(488, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(489, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t29 = *((char **)t3);
    t35 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t29, 3, t35, 32);
    t36 = (t0 + 5184);
    xsi_vlogvar_assign_value(t36, t6, 0, 0, 3);
    goto LAB382;

LAB387:    t40 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB389;

LAB388:    *((unsigned int *)t6) = 1;
    goto LAB389;

LAB391:    xsi_set_current_line(500, ng0);

LAB394:    xsi_set_current_line(501, ng0);
    t55 = ((char*)((ng2)));
    t61 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t61, t55, 0, 0, 3, 0LL);
    xsi_set_current_line(502, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(503, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(504, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t29 = *((char **)t3);
    t35 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t29, 3, t35, 32);
    t36 = (t0 + 5344);
    xsi_vlogvar_assign_value(t36, t6, 0, 0, 3);
    goto LAB393;

LAB398:    t40 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB400;

LAB399:    *((unsigned int *)t6) = 1;
    goto LAB400;

LAB402:    xsi_set_current_line(515, ng0);

LAB405:    xsi_set_current_line(516, ng0);
    t55 = ((char*)((ng3)));
    t61 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t61, t55, 0, 0, 3, 0LL);
    xsi_set_current_line(517, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    xsi_set_current_line(518, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(519, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t29 = *((char **)t3);
    t35 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t29, 3, t35, 32);
    t36 = (t0 + 5504);
    xsi_vlogvar_assign_value(t36, t6, 0, 0, 3);
    goto LAB404;

LAB410:    xsi_set_current_line(538, ng0);

LAB421:    xsi_set_current_line(539, ng0);
    t35 = (t0 + 5024);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t39 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB423;

LAB422:    t53 = (t39 + 4);
    if (*((unsigned int *)t53) != 0)
        goto LAB423;

LAB426:    if (*((unsigned int *)t37) > *((unsigned int *)t39))
        goto LAB424;

LAB425:    t61 = (t6 + 4);
    t9 = *((unsigned int *)t61);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB427;

LAB428:    xsi_set_current_line(547, ng0);

LAB431:    xsi_set_current_line(548, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(549, ng0);
    xsi_vlogfile_write(1, 0, 0, ng40, 1, t0);

LAB429:    goto LAB420;

LAB412:    xsi_set_current_line(554, ng0);

LAB432:    xsi_set_current_line(555, ng0);
    t3 = (t0 + 5184);
    t35 = (t3 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB434;

LAB433:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB434;

LAB437:    if (*((unsigned int *)t36) > *((unsigned int *)t37))
        goto LAB435;

LAB436:    t55 = (t6 + 4);
    t9 = *((unsigned int *)t55);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB438;

LAB439:    xsi_set_current_line(563, ng0);

LAB442:    xsi_set_current_line(564, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(565, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);

LAB440:    goto LAB420;

LAB414:    xsi_set_current_line(569, ng0);

LAB443:    xsi_set_current_line(570, ng0);
    t3 = (t0 + 5344);
    t35 = (t3 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB445;

LAB444:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB445;

LAB448:    if (*((unsigned int *)t36) > *((unsigned int *)t37))
        goto LAB446;

LAB447:    t55 = (t6 + 4);
    t9 = *((unsigned int *)t55);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB449;

LAB450:    xsi_set_current_line(578, ng0);

LAB453:    xsi_set_current_line(579, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(580, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);

LAB451:    goto LAB420;

LAB416:    xsi_set_current_line(584, ng0);

LAB454:    xsi_set_current_line(585, ng0);
    t3 = (t0 + 5504);
    t35 = (t3 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB456;

LAB455:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB456;

LAB459:    if (*((unsigned int *)t36) > *((unsigned int *)t37))
        goto LAB457;

LAB458:    t55 = (t6 + 4);
    t9 = *((unsigned int *)t55);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB460;

LAB461:    xsi_set_current_line(593, ng0);

LAB464:    xsi_set_current_line(594, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(595, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);

LAB462:    goto LAB420;

LAB418:    xsi_set_current_line(599, ng0);

LAB465:    xsi_set_current_line(600, ng0);
    t3 = ((char*)((ng26)));
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(601, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB420;

LAB423:    t55 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB425;

LAB424:    *((unsigned int *)t6) = 1;
    goto LAB425;

LAB427:    xsi_set_current_line(540, ng0);

LAB430:    xsi_set_current_line(541, ng0);
    t66 = ((char*)((ng21)));
    t67 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t67, t66, 0, 0, 3, 0LL);
    xsi_set_current_line(542, ng0);
    xsi_vlogfile_write(1, 0, 0, ng39, 1, t0);
    xsi_set_current_line(543, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(544, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t35 = *((char **)t3);
    t36 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t35, 3, t36, 32);
    t37 = (t0 + 5024);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 3);
    goto LAB429;

LAB434:    t53 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB436;

LAB435:    *((unsigned int *)t6) = 1;
    goto LAB436;

LAB438:    xsi_set_current_line(556, ng0);

LAB441:    xsi_set_current_line(557, ng0);
    t61 = ((char*)((ng17)));
    t66 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t66, t61, 0, 0, 3, 0LL);
    xsi_set_current_line(558, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(559, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(560, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t35 = *((char **)t3);
    t36 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t35, 3, t36, 32);
    t37 = (t0 + 5184);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 3);
    goto LAB440;

LAB445:    t53 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB447;

LAB446:    *((unsigned int *)t6) = 1;
    goto LAB447;

LAB449:    xsi_set_current_line(571, ng0);

LAB452:    xsi_set_current_line(572, ng0);
    t61 = ((char*)((ng2)));
    t66 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t66, t61, 0, 0, 3, 0LL);
    xsi_set_current_line(573, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(574, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(575, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t35 = *((char **)t3);
    t36 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t35, 3, t36, 32);
    t37 = (t0 + 5344);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 3);
    goto LAB451;

LAB456:    t53 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB458;

LAB457:    *((unsigned int *)t6) = 1;
    goto LAB458;

LAB460:    xsi_set_current_line(586, ng0);

LAB463:    xsi_set_current_line(587, ng0);
    t61 = ((char*)((ng3)));
    t66 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t66, t61, 0, 0, 3, 0LL);
    xsi_set_current_line(588, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    xsi_set_current_line(589, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(590, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t35 = *((char **)t3);
    t36 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t35, 3, t36, 32);
    t37 = (t0 + 5504);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 3);
    goto LAB462;

}


extern void work_m_00000000003376747925_4086468599_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_56_1,(void *)Always_61_2};
	xsi_register_didat("work_m_00000000003376747925_4086468599", "isim/test4_isim_beh.exe.sim/work/m_00000000003376747925_4086468599.didat");
	xsi_register_executes(pe);
}

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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000000263101951_1801599633_init();
    work_m_00000000000516368835_4075503199_init();
    work_m_00000000002645964402_3644889157_init();
    work_m_00000000003056884540_2315745068_init();
    work_m_00000000001496756061_3568425967_init();
    work_m_00000000003338336762_4086578513_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003338336762_4086578513");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

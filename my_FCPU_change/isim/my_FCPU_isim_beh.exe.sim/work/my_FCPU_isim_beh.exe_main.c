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
    unisims_ver_m_00000000000263101951_3015390022_init();
    work_m_00000000000516368835_2697443841_init();
    unisims_ver_m_00000000000263101951_2307862120_init();
    work_m_00000000000516368835_4075503199_init();
    work_m_00000000001697215916_3568425967_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001697215916_3568425967");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

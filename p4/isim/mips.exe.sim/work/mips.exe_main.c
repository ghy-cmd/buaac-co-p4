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
    work_m_00000000003182473136_3062432219_init();
    work_m_00000000004275808280_3224323566_init();
    work_m_00000000001539924808_1621229167_init();
    work_m_00000000002956369681_3298408361_init();
    work_m_00000000000352059727_2924402094_init();
    work_m_00000000002012670952_0886308060_init();
    work_m_00000000000609031494_3877310806_init();
    work_m_00000000002047498008_0783707848_init();


    xsi_register_tops("work_m_00000000002047498008_0783707848");


    return xsi_run_simulation(argc, argv);

}

/** @file
  This file contains CNL specific GPIO information

  Copyright (c) 2018 - 2019, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Uefi/UefiBaseType.h>
#include <Library/PchInfoLib.h>
#include <Library/GpioLib.h>
#include <Library/GpioNativeLib.h>
#include <GpioPinsCnlLp.h>
#include <GpioPinsCnlH.h>
#include <GpioConfig.h>
#include "GpioLibrary.h"

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_GROUP_TO_GPE_MAPPING mPchLpGpioGroupToGpeMapping[] = {
  {GPIO_CNL_LP_GROUP_GPP_A,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_A, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_A},
  {GPIO_CNL_LP_GROUP_GPP_B,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_B, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_B},
  {GPIO_CNL_LP_GROUP_GPP_C,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_C, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_C},
  {GPIO_CNL_LP_GROUP_GPP_D,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_D, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_D},
  {GPIO_CNL_LP_GROUP_GPP_E,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_E, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_E},
  {GPIO_CNL_LP_GROUP_GPP_F,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_F, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_F},
  {GPIO_CNL_LP_GROUP_GPP_G,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_G, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_G},
  {GPIO_CNL_LP_GROUP_GPP_H,  0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPP_H, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPP_H},
  {GPIO_CNL_LP_GROUP_GPD,    0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_GPD,   V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_GPD},
  {GPIO_CNL_LP_GROUP_VGPIO , 0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_VGPIO, V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_VGPIO},
  {GPIO_CNL_LP_GROUP_SPI,    0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_SPI,   V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_SPI},
  {GPIO_CNL_LP_GROUP_AZA,    0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_AZA,   V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_AZA},
  {GPIO_CNL_LP_GROUP_JTAG,   0, V_CNL_PCH_LP_PMC_PWRM_GPIO_CFG_JTAG,  V_CNL_PCH_LP_GPIO_PCR_MISCCFG_GPE0_JTAG}
};

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_GROUP_TO_GPE_MAPPING mPchHGpioGroupToGpeMapping[] = {
  {GPIO_CNL_H_GROUP_GPP_A,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_A, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_A},
  {GPIO_CNL_H_GROUP_GPP_B,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_B, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_B},
  {GPIO_CNL_H_GROUP_GPP_C,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_C, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_C},
  {GPIO_CNL_H_GROUP_GPP_D,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_D, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_D},
  {GPIO_CNL_H_GROUP_GPP_E,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_E, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_E},
  {GPIO_CNL_H_GROUP_GPP_F,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_F, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_F},
  {GPIO_CNL_H_GROUP_GPP_G,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_G, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_G},
  {GPIO_CNL_H_GROUP_GPP_H,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_H, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_H},
  {GPIO_CNL_H_GROUP_GPP_I,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_I, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_I},
  {GPIO_CNL_H_GROUP_GPP_J,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_J, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_J},
  {GPIO_CNL_H_GROUP_GPP_K,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPP_K, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPP_K},
  {GPIO_CNL_H_GROUP_GPD,    0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_GPD,   V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_GPD},
  {GPIO_CNL_H_GROUP_VGPIO,  0, V_CNL_PCH_H_PMC_PWRM_GPIO_CFG_VGPIO, V_CNL_PCH_H_GPIO_PCR_MISCCFG_GPE0_VGPIO}
};

/**
  Get information for GPIO Group required to program GPIO and PMC for desired 1-Tier GPE mapping

  @param[out] GpioGroupToGpeMapping        Table with GPIO Group to GPE mapping
  @param[out] GpioGroupToGpeMappingLength  GPIO Group to GPE mapping table length
**/
VOID
GpioGetGroupToGpeMapping (
  OUT GPIO_GROUP_TO_GPE_MAPPING  **GpioGroupToGpeMapping,
  OUT UINT32                     *GpioGroupToGpeMappingLength
  )
{
  if (IsPchLp ()) {
    *GpioGroupToGpeMapping = mPchLpGpioGroupToGpeMapping;
    *GpioGroupToGpeMappingLength = ARRAY_SIZE (mPchLpGpioGroupToGpeMapping);
  } else {
    *GpioGroupToGpeMapping = mPchHGpioGroupToGpeMapping;
    *GpioGroupToGpeMappingLength = ARRAY_SIZE (mPchHGpioGroupToGpeMapping);
  }
}

/**
  Get GPIO Chipset ID specific to PCH generation and series
**/
UINT32
GpioGetThisChipsetId (
  VOID
  )
{
  if (IsPchLp ()) {
    return GPIO_CNL_LP_CHIPSET_ID;
  } else {
    return GPIO_CNL_H_CHIPSET_ID;
  }
}
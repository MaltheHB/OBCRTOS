/*******************************************************************************
* File Name: COMout.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_COMout_H) /* Pins COMout_H */
#define CY_PINS_COMout_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "COMout_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 COMout__PORT == 15 && ((COMout__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    COMout_Write(uint8 value);
void    COMout_SetDriveMode(uint8 mode);
uint8   COMout_ReadDataReg(void);
uint8   COMout_Read(void);
void    COMout_SetInterruptMode(uint16 position, uint16 mode);
uint8   COMout_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the COMout_SetDriveMode() function.
     *  @{
     */
        #define COMout_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define COMout_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define COMout_DM_RES_UP          PIN_DM_RES_UP
        #define COMout_DM_RES_DWN         PIN_DM_RES_DWN
        #define COMout_DM_OD_LO           PIN_DM_OD_LO
        #define COMout_DM_OD_HI           PIN_DM_OD_HI
        #define COMout_DM_STRONG          PIN_DM_STRONG
        #define COMout_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define COMout_MASK               COMout__MASK
#define COMout_SHIFT              COMout__SHIFT
#define COMout_WIDTH              1u

/* Interrupt constants */
#if defined(COMout__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in COMout_SetInterruptMode() function.
     *  @{
     */
        #define COMout_INTR_NONE      (uint16)(0x0000u)
        #define COMout_INTR_RISING    (uint16)(0x0001u)
        #define COMout_INTR_FALLING   (uint16)(0x0002u)
        #define COMout_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define COMout_INTR_MASK      (0x01u) 
#endif /* (COMout__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define COMout_PS                     (* (reg8 *) COMout__PS)
/* Data Register */
#define COMout_DR                     (* (reg8 *) COMout__DR)
/* Port Number */
#define COMout_PRT_NUM                (* (reg8 *) COMout__PRT) 
/* Connect to Analog Globals */                                                  
#define COMout_AG                     (* (reg8 *) COMout__AG)                       
/* Analog MUX bux enable */
#define COMout_AMUX                   (* (reg8 *) COMout__AMUX) 
/* Bidirectional Enable */                                                        
#define COMout_BIE                    (* (reg8 *) COMout__BIE)
/* Bit-mask for Aliased Register Access */
#define COMout_BIT_MASK               (* (reg8 *) COMout__BIT_MASK)
/* Bypass Enable */
#define COMout_BYP                    (* (reg8 *) COMout__BYP)
/* Port wide control signals */                                                   
#define COMout_CTL                    (* (reg8 *) COMout__CTL)
/* Drive Modes */
#define COMout_DM0                    (* (reg8 *) COMout__DM0) 
#define COMout_DM1                    (* (reg8 *) COMout__DM1)
#define COMout_DM2                    (* (reg8 *) COMout__DM2) 
/* Input Buffer Disable Override */
#define COMout_INP_DIS                (* (reg8 *) COMout__INP_DIS)
/* LCD Common or Segment Drive */
#define COMout_LCD_COM_SEG            (* (reg8 *) COMout__LCD_COM_SEG)
/* Enable Segment LCD */
#define COMout_LCD_EN                 (* (reg8 *) COMout__LCD_EN)
/* Slew Rate Control */
#define COMout_SLW                    (* (reg8 *) COMout__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define COMout_PRTDSI__CAPS_SEL       (* (reg8 *) COMout__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define COMout_PRTDSI__DBL_SYNC_IN    (* (reg8 *) COMout__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define COMout_PRTDSI__OE_SEL0        (* (reg8 *) COMout__PRTDSI__OE_SEL0) 
#define COMout_PRTDSI__OE_SEL1        (* (reg8 *) COMout__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define COMout_PRTDSI__OUT_SEL0       (* (reg8 *) COMout__PRTDSI__OUT_SEL0) 
#define COMout_PRTDSI__OUT_SEL1       (* (reg8 *) COMout__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define COMout_PRTDSI__SYNC_OUT       (* (reg8 *) COMout__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(COMout__SIO_CFG)
    #define COMout_SIO_HYST_EN        (* (reg8 *) COMout__SIO_HYST_EN)
    #define COMout_SIO_REG_HIFREQ     (* (reg8 *) COMout__SIO_REG_HIFREQ)
    #define COMout_SIO_CFG            (* (reg8 *) COMout__SIO_CFG)
    #define COMout_SIO_DIFF           (* (reg8 *) COMout__SIO_DIFF)
#endif /* (COMout__SIO_CFG) */

/* Interrupt Registers */
#if defined(COMout__INTSTAT)
    #define COMout_INTSTAT            (* (reg8 *) COMout__INTSTAT)
    #define COMout_SNAP               (* (reg8 *) COMout__SNAP)
    
	#define COMout_0_INTTYPE_REG 		(* (reg8 *) COMout__0__INTTYPE)
#endif /* (COMout__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_COMout_H */


/* [] END OF FILE */

enum RISCV_OPCODES
{
  /* RV32I Base Instruction Set */
  LUI = 0x37,    /* U-type      */
  AUIPC = 0x17,  /* U-type      */
  JAL = 0x6F,    /* J-type      */
  JALR = 0x67,   /* I-type      */
  B = 0x63,      /* B-type      */
  L = 0x03,      /* I-type      */
  S = 0x23,      /* S-type      */
  REGIMM = 0x13, /* I-type      */
  REGREG = 0x33, /* R-type      */
  FENCE = 0x0F,  /* Special     */

  /* --- * --- * --- */

  /* RV64I Base Instruction Set */
  REGIMM_W = 0x18, /* I-type  or S-type */
  REGREG_W = 0x3B, /* R-type    */

  /* --- * --- * --- */

  /* RV32/RV64 Zifencei Standard Extension */

  /* --- * --- * --- */

  /* RV32/RV64 Zicsr Standard Extension */
  CSR = 0x73, /* CSR Special  */

  /* --- * --- * --- */

  /* RV32M Standard Extension */
  /* RV64M Standard Extension */

  /* --- * --- * --- */

  /* RV32A Standard Extension */
  /* RV64A Standard Extension */
  ATOMIC = 0x2F, /* R-Type    */

  /* --- * --- * --- */

  /* RV32F Standard Extension */
  /* RV64F Standard Extension */
  /* RV32D Standard Extension */
  /* RV64D Standard Extension */
  /* RV64Q Standard Extension */
  FL = 0x07,     /* I-type    */
  FS = 0x27,     /* S-type    */
  FMADD = 0x43,  /* R4-type   */
  FMSUB = 0x47,  /* R4-type   */
  FNMSUB = 0x4B, /* R4-type   */
  FNMADD = 0x4F, /* R4-type   */
  F = 0x53       /* R-type    */

};
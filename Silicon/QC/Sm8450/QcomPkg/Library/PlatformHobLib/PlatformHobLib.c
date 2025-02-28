#include <Library/BaseLib.h>
#include <Library/PlatformHobLib.h>
#include <Configuration/XblHlosHob.h>

PXBL_HLOS_HOB GetPlatformHob()
{
  return (PXBL_HLOS_HOB)0xE3400000;
}
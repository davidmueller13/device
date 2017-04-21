[PcdsFixedAtBuild.common]
  gQcomTokenSpaceGuid.PcdGraphicsOutputFbCacheability|0x00000002 # EFI_MEMORY_WC
  gQcomTokenSpaceGuid.PcdMipiDsiRgbSwap|2 # DSI_RGB_SWAP_BGR

[LibraryClasses.common]
  KeypadDeviceImplLib|EFIDroidDevicePkg/Library/KeypadDeviceImplLib/KeypadDeviceImplLib.inf

[Components.common]
  EFIDroidPkg/Drivers/KeypadDxe/KeypadDxe.inf
  EFIDroidPkg/Drivers/GenericKeypadDeviceDxe/GenericKeypadDeviceDxe.inf

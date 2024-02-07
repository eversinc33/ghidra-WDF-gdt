# Ghidra WDF gdt files

Incomplete .gdt files for the Windows Kernel Mode Driver Framework (KMDF) part of WDF. Parsed using the VisualStudio22_64 default profile in Ghidra's C Parser.

Partially dependant on https://github.com/0x6d696368/ghidra-data/tree/master/typeinfo

### Content

1) wdf.h.gdt - based on Windows-Driver-Frameworks/src/publicinc/wdf/kmdf/1.33/wdf.h
2) fxldr.h.gt - based on Windows-Driver-Frameworks/src/framework/shared/inc/private/common/fxldr.h

I am a RE noob and this was hacky, so there might be structs missing or minor issues with some structs/definitions.
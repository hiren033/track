// Driver.h: Driver definitions

#include <windows.h>
#include <wdf.h>
#include <usb.h>
#include <wdfusb.h>
#include <initguid.h>
#include <hidport.h>

#include "Trace.h"
#include "AppleDefinition.h"
#include "Hid.h"
#include "Device.h"
#include "Queue.h"

EXTERN_C_START

//
// WDFDRIVER Events
//

DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_DEVICE_ADD MagicTrackpad2PtpDeviceEvtDeviceAdd;
EVT_WDF_OBJECT_CONTEXT_CLEANUP MagicTrackpad2PtpDeviceEvtDriverContextCleanup;

EXTERN_C_END

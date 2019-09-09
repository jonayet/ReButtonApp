﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.1.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: 2019年9月2日
 ***********************************************************************************************/

#ifndef PUSHBUTTON_INTERFACE_H
#define PUSHBUTTON_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"

#include "digitaltwin_client_helper.h"
#include "digitaltwin_serializer.h"
#include "parson.h"
#include "../ReButton_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum PUSHBUTTON_TELEMETRY_TAG
{
    PushButton_ACTIONNUM_TELEMETRY,
    PushButton_MESSAGE_TELEMETRY
} PUSHBUTTON_TELEMETRY;

// DigitalTwin interface name from service perspective.
static const char PushButtonInterfaceId[] = "urn:seeedkk:Interface:PushButton:1";
static const char PushButtonInterfaceInstanceName[] = "PushButton";

// Telemetry names for this interface.

static const char PushButtonInterface_ActionNumTelemetry[] = "actionNum";

static const char PushButtonInterface_MessageTelemetry[] = "message";

// Property names for this interface.

// Command names for this interface

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE PushButtonInterface_Create();

void PushButtonInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT PushButtonInterface_Telemetry_SendActionNum();

DIGITALTWIN_CLIENT_RESULT PushButtonInterface_Telemetry_SendMessage();

DIGITALTWIN_CLIENT_RESULT PushButtonInterface_Telemetry_SendAll();

#ifdef __cplusplus
}
#endif

#endif  // PUSHBUTTON_INTERFACE_H
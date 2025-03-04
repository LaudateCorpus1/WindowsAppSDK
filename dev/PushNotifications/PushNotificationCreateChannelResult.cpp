﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "PushNotificationCreateChannelResult.h"
#include <TerminalVelocityFeatures-PushNotifications.h>
#include "Microsoft.Windows.PushNotifications.PushNotificationCreateChannelResult.g.cpp"

namespace winrt::Microsoft::Windows::PushNotifications::implementation
{
    PushNotificationCreateChannelResult::PushNotificationCreateChannelResult(PushNotificationChannel const& channel, winrt::hresult const& extendedError, PushNotificationChannelStatus const& status):
        m_channel(channel),
        m_extendedError(extendedError),
        m_status(status)
    {
        THROW_HR_IF(E_NOTIMPL, !::Microsoft::Windows::PushNotifications::Feature_PushNotifications::IsEnabled());
    }

    PushNotificationChannel PushNotificationCreateChannelResult::Channel()
    {
        return m_channel;
    }
    winrt::hresult PushNotificationCreateChannelResult::ExtendedError()
    {
        return m_extendedError;
    }
    PushNotificationChannelStatus PushNotificationCreateChannelResult::Status()
    {
        return m_status;
    }
}

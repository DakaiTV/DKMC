/*
 *  Copyright (C) 2024 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#include "PVRStringSettingDefinition.h"

#include "addons/kodi-dev-kit/include/kodi/c-api/addon-instance/pvr/pvr_general.h"

namespace PVR
{
CPVRStringSettingDefinition::CPVRStringSettingDefinition(const PVR_STRING_SETTING_DEFINITION& def)
  : m_values{def.values, def.iValuesSize, def.strDefaultValue},
    m_allowEmptyValue{def.bAllowEmptyValue}
{
}
} // namespace PVR

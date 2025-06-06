set(SOURCES AdvancedSettings.cpp
            DisplaySettings.cpp
            GameSettings.cpp
            LibExportSettings.cpp
            MediaSettings.cpp
            MediaSourceSettings.cpp
            PlayerSettings.cpp
            ServicesSettings.cpp
            SettingAddon.cpp
            SettingConditions.cpp
            SettingControl.cpp
            SettingCreator.cpp
            SettingDateTime.cpp
            SettingPath.cpp
            Settings.cpp
            SettingsBase.cpp
            SettingsValueFlatJsonSerializer.cpp
            SettingsValueXmlSerializer.cpp
            SettingUtils.cpp
            SkinSettings.cpp
            SettingsComponent.cpp
            SubtitlesSettings.cpp)

set(HEADERS AdvancedSettings.h
            DiscSettings.h
            DisplaySettings.h
            GameSettings.h
            ISubSettings.h
            LibExportSettings.h
            MediaSettings.h
            MediaSourceSettings.h
            PlayerSettings.h
            ServicesSettings.h
            SettingAddon.h
            SettingConditions.h
            SettingControl.h
            SettingCreator.h
            SettingDateTime.h
            SettingPath.h
            Settings.h
            SettingsBase.h
            SettingsContainer.h
            SettingsValueFlatJsonSerializer.h
            SettingsValueXmlSerializer.h
            SettingUtils.h
            SkinSettings.h
            SettingsComponent.h
            SubtitlesSettings.h)

if(TARGET ${APP_NAME_LC}::Bluray)
  list(APPEND SOURCES DiscSettings.cpp)
endif()

core_add_library(settings)

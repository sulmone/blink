/*
 * Copyright (C) 2009 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef RuntimeEnabledFeatures_h
#define RuntimeEnabledFeatures_h

namespace WebCore {

// A class that stores static enablers for all experimental features. Note that
// the method names must line up with the JavaScript method they enable for code
// generation to work properly.

class RuntimeEnabledFeatures {
public:
    static void setLocalStorageEnabled(bool isEnabled) { isLocalStorageEnabled = isEnabled; }
    static bool localStorageEnabled() { return isLocalStorageEnabled; }

    static void setSessionStorageEnabled(bool isEnabled) { isSessionStorageEnabled = isEnabled; }
    static bool sessionStorageEnabled() { return isSessionStorageEnabled; }

    static void setWebkitNotificationsEnabled(bool isEnabled) { isWebkitNotificationsEnabled = isEnabled; }
    static bool webkitNotificationsEnabled() { return isWebkitNotificationsEnabled; }

    static void setApplicationCacheEnabled(bool isEnabled) { isApplicationCacheEnabled = isEnabled; }
    static bool applicationCacheEnabled() { return isApplicationCacheEnabled; }

    static void setGeolocationEnabled(bool isEnabled) { isGeolocationEnabled = isEnabled; }
    static bool geolocationEnabled() { return isGeolocationEnabled; }

    static void setWebkitIndexedDBEnabled(bool isEnabled) { isIndexedDBEnabled = isEnabled; }
    static bool webkitIndexedDBEnabled() { return isIndexedDBEnabled; }
    static bool indexedDBEnabled() { return isIndexedDBEnabled; }

    static void setCanvasPathEnabled(bool isEnabled) { isCanvasPathEnabled = isEnabled; }
    static bool canvasPathEnabled() { return isCanvasPathEnabled; }

#if ENABLE(CSS_EXCLUSIONS)
    static void setCSSExclusionsEnabled(bool isEnabled) { isCSSExclusionsEnabled = isEnabled; }
    static bool cssExclusionsEnabled() { return isCSSExclusionsEnabled; }
#else
    static void setCSSExclusionsEnabled(bool) { }
    static bool cssExclusionsEnabled() { return false; }
#endif

#if ENABLE(CSS_REGIONS)
    static void setCSSRegionsEnabled(bool isEnabled) { isCSSRegionsEnabled = isEnabled; }
    static bool cssRegionsEnabled() { return isCSSRegionsEnabled; }
#else
    static void setCSSRegionsEnabled(bool) { }
    static bool cssRegionsEnabled() { return false; }
#endif

#if ENABLE(CSS_COMPOSITING)
    static void setCSSCompositingEnabled(bool isEnabled) { isCSSCompositingEnabled = isEnabled; }
    static bool cssCompositingEnabled() { return isCSSCompositingEnabled; }
#else
    static void setCSSCompositingEnabled(bool) { }
    static bool cssCompositingEnabled() { return false; }
#endif

    static void setFontLoadEventsEnabled(bool isEnabled) { isFontLoadEventsEnabled = isEnabled; }
    static bool fontLoadEventsEnabled() { return isFontLoadEventsEnabled; }

    // Mozilla version
    static bool webkitFullScreenAPIEnabled() { return isFullScreenAPIEnabled; }
    static void setWebkitFullScreenAPIEnabled(bool isEnabled) { isFullScreenAPIEnabled = isEnabled; }
    static bool webkitRequestFullScreenEnabled() { return isFullScreenAPIEnabled; }
    static bool webkitIsFullScreenEnabled() { return isFullScreenAPIEnabled; }
    static bool webkitFullScreenKeyboardInputAllowedEnabled() { return isFullScreenAPIEnabled; }
    static bool webkitCurrentFullScreenElementEnabled() { return isFullScreenAPIEnabled; }
    static bool webkitCancelFullScreenEnabled() { return isFullScreenAPIEnabled; }

    // W3C version
    static bool webkitFullscreenEnabledEnabled() { return isFullScreenAPIEnabled; }
    static bool webkitFullscreenElementEnabled() { return isFullScreenAPIEnabled; }
    static bool webkitExitFullscreenEnabled() { return isFullScreenAPIEnabled; }
    static bool webkitRequestFullscreenEnabled() { return isFullScreenAPIEnabled; }

#if ENABLE(VIDEO)
    static bool audioEnabled();
    static bool htmlMediaElementEnabled();
    static bool htmlAudioElementEnabled();
    static bool htmlVideoElementEnabled();
    static bool htmlSourceElementEnabled();
    static bool mediaControllerEnabled();
    static bool mediaErrorEnabled();
    static bool timeRangesEnabled();
#endif

#if ENABLE(SHARED_WORKERS)
    static bool sharedWorkerEnabled();
#endif

    static bool openDatabaseEnabled();
    static bool openDatabaseSyncEnabled();

#if ENABLE(WEB_AUDIO)
    static void setWebkitAudioContextEnabled(bool isEnabled) { isWebAudioEnabled = isEnabled; }
    static bool webkitAudioContextEnabled() { return isWebAudioEnabled; }
    static bool webkitOfflineAudioContextEnabled() { return isWebAudioEnabled; }
#endif

    static void setWebMIDIEnabled(bool isEnabled) { isWebMIDIEnabled = isEnabled; }
    static bool webMIDIEnabled() { return isWebMIDIEnabled; }

    static bool touchEnabled() { return isTouchEnabled; }
    static void setTouchEnabled(bool isEnabled) { isTouchEnabled = isEnabled; }

    static void setDeviceMotionEnabled(bool isEnabled) { isDeviceMotionEnabled = isEnabled; }
    static bool deviceMotionEnabled() { return isDeviceMotionEnabled; }
    static bool deviceMotionEventEnabled() { return isDeviceMotionEnabled; }
    static bool ondevicemotionEnabled() { return isDeviceMotionEnabled; }

    static void setDeviceOrientationEnabled(bool isEnabled) { isDeviceOrientationEnabled = isEnabled; }
    static bool deviceOrientationEnabled() { return isDeviceOrientationEnabled; }
    static bool deviceOrientationEventEnabled() { return isDeviceOrientationEnabled; }
    static bool ondeviceorientationEnabled() { return isDeviceOrientationEnabled; }

    static void setSpeechInputEnabled(bool isEnabled) { isSpeechInputEnabled = isEnabled; }
    static bool speechInputEnabled() { return isSpeechInputEnabled; }
    static bool webkitSpeechEnabled() { return isSpeechInputEnabled; }
    static bool webkitGrammarEnabled() { return isSpeechInputEnabled; }

    static void setScriptedSpeechEnabled(bool isEnabled) { isScriptedSpeechEnabled = isEnabled; }
    static bool scriptedSpeechEnabled() { return isScriptedSpeechEnabled; }
    static bool webkitSpeechRecognitionEnabled() { return isScriptedSpeechEnabled; }
    static bool webkitSpeechRecognitionErrorEnabled() { return isScriptedSpeechEnabled; }
    static bool webkitSpeechRecognitionEventEnabled() { return isScriptedSpeechEnabled; }
    static bool webkitSpeechGrammarEnabled() { return isScriptedSpeechEnabled; }
    static bool webkitSpeechGrammarListEnabled() { return isScriptedSpeechEnabled; }

    static bool fileSystemEnabled();
    static void setFileSystemEnabled(bool isEnabled) { isFileSystemEnabled = isEnabled; }

#if ENABLE(JAVASCRIPT_I18N_API)
    static bool javaScriptI18NAPIEnabled();
    static void setJavaScriptI18NAPIEnabled(bool isEnabled) { isJavaScriptI18NAPIEnabled = isEnabled; }
#endif

#if ENABLE(MEDIA_STREAM)
    static bool mediaStreamEnabled() { return isMediaStreamEnabled; }
    static void setMediaStreamEnabled(bool isEnabled) { isMediaStreamEnabled = isEnabled; }
    static bool webkitGetUserMediaEnabled() { return isMediaStreamEnabled; }
    static bool webkitMediaStreamEnabled() { return isMediaStreamEnabled; }

    static bool peerConnectionEnabled() { return isMediaStreamEnabled && isPeerConnectionEnabled; }
    static void setPeerConnectionEnabled(bool isEnabled) { isPeerConnectionEnabled = isEnabled; }
    static bool webkitRTCPeerConnectionEnabled() { return peerConnectionEnabled(); }
#endif

#if ENABLE(GAMEPAD)
    static void setWebkitGetGamepadsEnabled(bool isEnabled) { isGamepadEnabled = isEnabled; }
    static bool webkitGetGamepadsEnabled() { return isGamepadEnabled; }
#endif

    static bool quotaEnabled() { return isQuotaEnabled; }
    static void setQuotaEnabled(bool isEnabled) { isQuotaEnabled = isEnabled; }

    static bool mediaSourceEnabled() { return isMediaSourceEnabled; }
    static void setMediaSourceEnabled(bool isEnabled) { isMediaSourceEnabled = isEnabled; }

#if ENABLE(ENCRYPTED_MEDIA)
    static bool encryptedMediaEnabled() { return isEncryptedMediaEnabled; }
    static void setEncryptedMediaEnabled(bool isEnabled) { isEncryptedMediaEnabled = isEnabled; }
#endif

    static bool webkitVideoTrackEnabled() { return isVideoTrackEnabled; }
    static void setWebkitVideoTrackEnabled(bool isEnabled) { isVideoTrackEnabled = isEnabled; }

    static bool shadowDOMEnabled() { return isShadowDOMEnabled; }
    static void setShadowDOMEnabled(bool isEnabled) { isShadowDOMEnabled = isEnabled; }

    static bool experimentalShadowDOMEnabled() { return isExperimentalShadowDOMEnabled; }
    static void setExperimentalShadowDOMEnabled(bool isEnabled) { isExperimentalShadowDOMEnabled = isEnabled; }

    static bool authorShadowDOMForAnyElementEnabled() { return isAuthorShadowDOMForAnyElementEnabled; }
    static void setAuthorShadowDOMForAnyElementEnabled(bool isEnabled) { isAuthorShadowDOMForAnyElementEnabled = isEnabled; }

#if ENABLE(CUSTOM_ELEMENTS)
    static bool customDOMElementsEnabled() { return isCustomDOMElementsEnabled; }
    static void setCustomDOMElements(bool isEnabled) { isCustomDOMElementsEnabled = isEnabled; }
#endif

    static bool styleScopedEnabled() { return isStyleScopedEnabled; }
    static void setStyleScopedEnabled(bool isEnabled) { isStyleScopedEnabled = isEnabled; }

#if ENABLE(INPUT_TYPE_DATETIME_INCOMPLETE)
    static bool inputTypeDateTimeEnabled() { return isInputTypeDateTimeEnabled; }
    static void setInputTypeDateTimeEnabled(bool isEnabled) { isInputTypeDateTimeEnabled = isEnabled; }
#endif

    static bool inputTypeWeekEnabled() { return isInputTypeWeekEnabled; }
    static void setInputTypeWeekEnabled(bool isEnabled) { isInputTypeWeekEnabled = isEnabled; }

#if ENABLE(DIALOG_ELEMENT)
    static bool dialogElementEnabled() { return isDialogElementEnabled; }
    static void setDialogElementEnabled(bool isEnabled) { isDialogElementEnabled = isEnabled; }
#endif

    static bool experimentalContentSecurityPolicyFeaturesEnabled() { return areExperimentalContentSecurityPolicyFeaturesEnabled; }
    static void setExperimentalContentSecurityPolicyFeaturesEnabled(bool isEnabled) { areExperimentalContentSecurityPolicyFeaturesEnabled = isEnabled; }

    static bool seamlessIFramesEnabled() { return areSeamlessIFramesEnabled; }
    static void setSeamlessIFramesEnabled(bool isEnabled) { areSeamlessIFramesEnabled = isEnabled; }

    static bool langAttributeAwareFormControlUIEnabled() { return isLangAttributeAwareFormControlUIEnabled; }
    // The lang attribute support is incomplete and should only be turned on for tests.
    static void setLangAttributeAwareFormControlUIEnabled(bool isEnabled) { isLangAttributeAwareFormControlUIEnabled = isEnabled; }

    static bool requestAutocompleteEnabled() { return isRequestAutocompleteEnabled; }
    static void setRequestAutocompleteEnabled(bool isEnabled) { isRequestAutocompleteEnabled = isEnabled; }

    static void setWebPInAcceptHeaderEnabled(bool isEnabled) { isWebPInAcceptHeaderEnabled = isEnabled; }
    static bool webPInAcceptHeaderEnabled() { return isWebPInAcceptHeaderEnabled; }

    static bool directoryUploadEnabled() { return isDirectoryUploadEnabled; }
    static void setDirectoryUploadEnabled(bool isEnabled) { isDirectoryUploadEnabled = isEnabled; }

    static void setExperimentalWebSocketEnabled(bool isEnabled) { isExperimentalWebSocketEnabled = isEnabled; }
    static bool experimentalWebSocketEnabled() { return isExperimentalWebSocketEnabled; }

    static bool imeAPIEnabled() { return isIMEAPIEnabled; }
    static void setIMEAPIEnabled(bool isEnabled) { isIMEAPIEnabled = isEnabled; }

private:
    // Never instantiate.
    RuntimeEnabledFeatures() { }

    static bool isLocalStorageEnabled;
    static bool isSessionStorageEnabled;
    static bool isWebkitNotificationsEnabled;
    static bool isApplicationCacheEnabled;
    static bool isGeolocationEnabled;
    static bool isIndexedDBEnabled;
    static bool isWebAudioEnabled;
    static bool isWebMIDIEnabled;
    static bool isTouchEnabled;
    static bool isDeviceMotionEnabled;
    static bool isDeviceOrientationEnabled;
    static bool isSpeechInputEnabled;
    static bool isCanvasPathEnabled;
    static bool isCSSExclusionsEnabled;
    static bool isCSSRegionsEnabled;
    static bool isCSSCompositingEnabled;
    static bool isLangAttributeAwareFormControlUIEnabled;
    static bool isScriptedSpeechEnabled;
    static bool isFileSystemEnabled;

#if ENABLE(JAVASCRIPT_I18N_API)
    static bool isJavaScriptI18NAPIEnabled;
#endif

#if ENABLE(MEDIA_STREAM)
    static bool isMediaStreamEnabled;
    static bool isPeerConnectionEnabled;
#endif

#if ENABLE(GAMEPAD)
    static bool isGamepadEnabled;
#endif

    static bool isQuotaEnabled;

    static bool isFullScreenAPIEnabled;

    static bool isMediaSourceEnabled;

#if ENABLE(ENCRYPTED_MEDIA)
    static bool isEncryptedMediaEnabled;
#endif

    static bool isVideoTrackEnabled;

    static bool isShadowDOMEnabled;

    static bool isExperimentalShadowDOMEnabled;

    static bool isAuthorShadowDOMForAnyElementEnabled;

#if ENABLE(CUSTOM_ELEMENTS)
    static bool isCustomDOMElementsEnabled;
#endif

    static bool isStyleScopedEnabled;

#if ENABLE(INPUT_TYPE_DATETIME_INCOMPLETE)
    static bool isInputTypeDateTimeEnabled;
#endif

    static bool isInputTypeWeekEnabled;

#if ENABLE(DIALOG_ELEMENT)
    static bool isDialogElementEnabled;
#endif

    static bool isRequestAutocompleteEnabled;

    static bool areExperimentalContentSecurityPolicyFeaturesEnabled;

    static bool areSeamlessIFramesEnabled;

    static bool isFontLoadEventsEnabled;

    static bool isWebPInAcceptHeaderEnabled;

    static bool isDirectoryUploadEnabled;

    static bool isExperimentalWebSocketEnabled;

    static bool isIMEAPIEnabled;
};

} // namespace WebCore

#endif // RuntimeEnabledFeatures_h

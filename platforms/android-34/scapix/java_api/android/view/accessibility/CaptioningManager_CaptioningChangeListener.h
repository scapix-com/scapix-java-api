// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONINGCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONINGCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class CaptioningManager_CaptioningChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::CaptioningManager_CaptioningChangeListener>
{
	static constexpr fixed_string class_name = "android/view/accessibility/CaptioningManager$CaptioningChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONINGCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONINGCHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONINGCHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/accessibility/CaptioningManager_CaptionStyle.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::CaptioningManager_CaptioningChangeListener : public jni::object_base<"android/view/accessibility/CaptioningManager$CaptioningChangeListener",
	java::lang::Object>
{
public:

	static jni::ref<android::view::accessibility::CaptioningManager_CaptioningChangeListener> new_object() { return base_::new_object(); }
	void onEnabledChanged(jboolean enabled) { return call_method<"onEnabledChanged", void>(enabled); }
	void onUserStyleChanged(jni::ref<android::view::accessibility::CaptioningManager_CaptionStyle> userStyle) { return call_method<"onUserStyleChanged", void>(userStyle); }
	void onLocaleChanged(jni::ref<java::util::Locale> locale) { return call_method<"onLocaleChanged", void>(locale); }
	void onFontScaleChanged(jfloat fontScale) { return call_method<"onFontScaleChanged", void>(fontScale); }
	void onSystemAudioCaptioningChanged(jboolean enabled) { return call_method<"onSystemAudioCaptioningChanged", void>(enabled); }
	void onSystemAudioCaptioningUiChanged(jboolean enabled) { return call_method<"onSystemAudioCaptioningUiChanged", void>(enabled); }

protected:

	CaptioningManager_CaptioningChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONINGCHANGELISTENER

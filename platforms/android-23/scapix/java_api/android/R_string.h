// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_R_STRING_FWD
#define SCAPIX_JAVA_API_ANDROID_R_STRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android { class R_string; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::R_string>
{
	static constexpr fixed_string class_name = "android/R$string";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_R_STRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_R_STRING)
#define SCAPIX_JAVA_API_ANDROID_R_STRING

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::R_string : public jni::object_base<"android/R$string",
	java::lang::Object>
{
public:

	static jint VideoView_error_button() { return get_static_field<"VideoView_error_button", jint>(); }
	static jint VideoView_error_text_invalid_progressive_playback() { return get_static_field<"VideoView_error_text_invalid_progressive_playback", jint>(); }
	static jint VideoView_error_text_unknown() { return get_static_field<"VideoView_error_text_unknown", jint>(); }
	static jint VideoView_error_title() { return get_static_field<"VideoView_error_title", jint>(); }
	static jint cancel() { return get_static_field<"cancel", jint>(); }
	static jint copy() { return get_static_field<"copy", jint>(); }
	static jint copyUrl() { return get_static_field<"copyUrl", jint>(); }
	static jint cut() { return get_static_field<"cut", jint>(); }
	static jint defaultMsisdnAlphaTag() { return get_static_field<"defaultMsisdnAlphaTag", jint>(); }
	static jint defaultVoiceMailAlphaTag() { return get_static_field<"defaultVoiceMailAlphaTag", jint>(); }
	static jint dialog_alert_title() { return get_static_field<"dialog_alert_title", jint>(); }
	static jint emptyPhoneNumber() { return get_static_field<"emptyPhoneNumber", jint>(); }
	static jint fingerprint_icon_content_description() { return get_static_field<"fingerprint_icon_content_description", jint>(); }
	static jint httpErrorBadUrl() { return get_static_field<"httpErrorBadUrl", jint>(); }
	static jint httpErrorUnsupportedScheme() { return get_static_field<"httpErrorUnsupportedScheme", jint>(); }
	static jint no() { return get_static_field<"no", jint>(); }
	static jint ok() { return get_static_field<"ok", jint>(); }
	static jint paste() { return get_static_field<"paste", jint>(); }
	static jint search_go() { return get_static_field<"search_go", jint>(); }
	static jint selectAll() { return get_static_field<"selectAll", jint>(); }
	static jint selectTextMode() { return get_static_field<"selectTextMode", jint>(); }
	static jint status_bar_notification_info_overflow() { return get_static_field<"status_bar_notification_info_overflow", jint>(); }
	static jint unknownName() { return get_static_field<"unknownName", jint>(); }
	static jint untitled() { return get_static_field<"untitled", jint>(); }
	static jint yes() { return get_static_field<"yes", jint>(); }

	static jni::ref<android::R_string> new_object() { return base_::new_object(); }

protected:

	R_string(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_R_STRING

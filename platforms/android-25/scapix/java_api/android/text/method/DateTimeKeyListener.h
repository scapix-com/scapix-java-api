// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/method/NumberKeyListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_DATETIMEKEYLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_DATETIMEKEYLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::method { class DateTimeKeyListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::method::DateTimeKeyListener>
{
	static constexpr fixed_string class_name = "android/text/method/DateTimeKeyListener";
	using base_classes = std::tuple<scapix::java_api::android::text::method::NumberKeyListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_DATETIMEKEYLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_DATETIMEKEYLISTENER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_DATETIMEKEYLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::method::DateTimeKeyListener : public jni::object_base<"android/text/method/DateTimeKeyListener",
	android::text::method::NumberKeyListener>
{
public:

	static jni::ref<jni::array<jchar>> CHARACTERS() { return get_static_field<"CHARACTERS", jni::ref<jni::array<jchar>>>(); }

	static jni::ref<android::text::method::DateTimeKeyListener> new_object() { return base_::new_object(); }
	jint getInputType() { return call_method<"getInputType", jint>(); }
	static jni::ref<android::text::method::DateTimeKeyListener> getInstance() { return call_static_method<"getInstance", jni::ref<android::text::method::DateTimeKeyListener>>(); }

protected:

	DateTimeKeyListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_DATETIMEKEYLISTENER

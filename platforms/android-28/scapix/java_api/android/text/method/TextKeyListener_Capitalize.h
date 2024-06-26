// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::method { class TextKeyListener_Capitalize; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::method::TextKeyListener_Capitalize>
{
	static constexpr fixed_string class_name = "android/text/method/TextKeyListener$Capitalize";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE)
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::method::TextKeyListener_Capitalize : public jni::object_base<"android/text/method/TextKeyListener$Capitalize",
	java::lang::Enum>
{
public:

	static jni::ref<android::text::method::TextKeyListener_Capitalize> NONE() { return get_static_field<"NONE", jni::ref<android::text::method::TextKeyListener_Capitalize>>(); }
	static jni::ref<android::text::method::TextKeyListener_Capitalize> SENTENCES() { return get_static_field<"SENTENCES", jni::ref<android::text::method::TextKeyListener_Capitalize>>(); }
	static jni::ref<android::text::method::TextKeyListener_Capitalize> WORDS() { return get_static_field<"WORDS", jni::ref<android::text::method::TextKeyListener_Capitalize>>(); }
	static jni::ref<android::text::method::TextKeyListener_Capitalize> CHARACTERS() { return get_static_field<"CHARACTERS", jni::ref<android::text::method::TextKeyListener_Capitalize>>(); }

	static jni::ref<jni::array<android::text::method::TextKeyListener_Capitalize>> values() { return call_static_method<"values", jni::ref<jni::array<android::text::method::TextKeyListener_Capitalize>>>(); }
	static jni::ref<android::text::method::TextKeyListener_Capitalize> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::text::method::TextKeyListener_Capitalize>>(name); }

protected:

	TextKeyListener_Capitalize(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_CAPITALIZE

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_ALIGNMENT_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_ALIGNMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Layout_Alignment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Layout_Alignment>
{
	static constexpr fixed_string class_name = "android/text/Layout$Alignment";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_ALIGNMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_ALIGNMENT)
#define SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_ALIGNMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Layout_Alignment : public jni::object_base<"android/text/Layout$Alignment",
	java::lang::Enum>
{
public:

	static jni::ref<android::text::Layout_Alignment> ALIGN_NORMAL() { return get_static_field<"ALIGN_NORMAL", jni::ref<android::text::Layout_Alignment>>(); }
	static jni::ref<android::text::Layout_Alignment> ALIGN_OPPOSITE() { return get_static_field<"ALIGN_OPPOSITE", jni::ref<android::text::Layout_Alignment>>(); }
	static jni::ref<android::text::Layout_Alignment> ALIGN_CENTER() { return get_static_field<"ALIGN_CENTER", jni::ref<android::text::Layout_Alignment>>(); }

	static jni::ref<jni::array<android::text::Layout_Alignment>> values() { return call_static_method<"values", jni::ref<jni::array<android::text::Layout_Alignment>>>(); }
	static jni::ref<android::text::Layout_Alignment> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::text::Layout_Alignment>>(name); }

protected:

	Layout_Alignment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_ALIGNMENT

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/style/TabStopSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class TabStopSpan_Standard; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::TabStopSpan_Standard>
{
	static constexpr fixed_string class_name = "android/text/style/TabStopSpan$Standard";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::style::TabStopSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::TabStopSpan_Standard : public jni::object_base<"android/text/style/TabStopSpan$Standard",
	java::lang::Object,
	android::text::style::TabStopSpan>
{
public:

	static jni::ref<android::text::style::TabStopSpan_Standard> new_object(jint offset) { return base_::new_object(offset); }
	jint getTabStop() { return call_method<"getTabStop", jint>(); }

protected:

	TabStopSpan_Standard(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD

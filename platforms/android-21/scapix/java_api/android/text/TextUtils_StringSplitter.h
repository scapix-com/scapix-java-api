// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_TEXTUTILS_STRINGSPLITTER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_TEXTUTILS_STRINGSPLITTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class TextUtils_StringSplitter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::TextUtils_StringSplitter>
{
	static constexpr fixed_string class_name = "android/text/TextUtils$StringSplitter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_TEXTUTILS_STRINGSPLITTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_TEXTUTILS_STRINGSPLITTER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_TEXTUTILS_STRINGSPLITTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::TextUtils_StringSplitter : public jni::object_base<"android/text/TextUtils$StringSplitter",
	java::lang::Object,
	java::lang::Iterable>
{
public:

	void setString(jni::ref<java::lang::String> p1) { return call_method<"setString", void>(p1); }

protected:

	TextUtils_StringSplitter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_TEXTUTILS_STRINGSPLITTER
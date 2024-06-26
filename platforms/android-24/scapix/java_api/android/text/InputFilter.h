// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class InputFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::InputFilter>
{
	static constexpr fixed_string class_name = "android/text/InputFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Spanned.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/android/text/InputFilter_LengthFilter.h>
#include <scapix/java_api/android/text/InputFilter_AllCaps.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::InputFilter : public jni::object_base<"android/text/InputFilter",
	java::lang::Object>
{
public:

	using LengthFilter = InputFilter_LengthFilter;
	using AllCaps = InputFilter_AllCaps;

	jni::ref<java::lang::CharSequence> filter(jni::ref<java::lang::CharSequence> p1, jint p2, jint p3, jni::ref<android::text::Spanned> p4, jint p5, jint p6) { return call_method<"filter", jni::ref<java::lang::CharSequence>>(p1, p2, p3, p4, p5, p6); }

protected:

	InputFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER

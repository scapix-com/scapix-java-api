// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/InputFilter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_LENGTHFILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_LENGTHFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class InputFilter_LengthFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::InputFilter_LengthFilter>
{
	static constexpr fixed_string class_name = "android/text/InputFilter$LengthFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::InputFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_LENGTHFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_LENGTHFILTER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_LENGTHFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Spanned.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::InputFilter_LengthFilter : public jni::object_base<"android/text/InputFilter$LengthFilter",
	java::lang::Object,
	android::text::InputFilter>
{
public:

	static jni::ref<android::text::InputFilter_LengthFilter> new_object(jint max) { return base_::new_object(max); }
	jni::ref<java::lang::CharSequence> filter(jni::ref<java::lang::CharSequence> source, jint start, jint end, jni::ref<android::text::Spanned> dest, jint dstart, jint dend) { return call_method<"filter", jni::ref<java::lang::CharSequence>>(source, start, end, dest, dstart, dend); }
	jint getMax() { return call_method<"getMax", jint>(); }

protected:

	InputFilter_LengthFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_INPUTFILTER_LENGTHFILTER

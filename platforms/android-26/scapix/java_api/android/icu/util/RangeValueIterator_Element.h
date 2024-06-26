// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class RangeValueIterator_Element; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::RangeValueIterator_Element>
{
	static constexpr fixed_string class_name = "android/icu/util/RangeValueIterator$Element";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::RangeValueIterator_Element : public jni::object_base<"android/icu/util/RangeValueIterator$Element",
	java::lang::Object>
{
public:

	jint limit() { return get_field<"limit", jint>(); }
	void limit(jint v) { set_field<"limit", jint>(v); }
	jint start() { return get_field<"start", jint>(); }
	void start(jint v) { set_field<"start", jint>(v); }
	jint value() { return get_field<"value", jint>(); }
	void value(jint v) { set_field<"value", jint>(v); }

	static jni::ref<android::icu::util::RangeValueIterator_Element> new_object() { return base_::new_object(); }

protected:

	RangeValueIterator_Element(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_ELEMENT

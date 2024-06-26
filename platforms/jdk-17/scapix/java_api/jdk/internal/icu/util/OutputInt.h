// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_OUTPUTINT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_OUTPUTINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::util { class OutputInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::util::OutputInt>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/util/OutputInt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_OUTPUTINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_OUTPUTINT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_OUTPUTINT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::util::OutputInt : public jni::object_base<"jdk/internal/icu/util/OutputInt",
	java::lang::Object>
{
public:

	jint value() { return get_field<"value", jint>(); }
	void value(jint v) { set_field<"value", jint>(v); }

	static jni::ref<jdk::internal::icu::util::OutputInt> new_object() { return base_::new_object(); }

protected:

	OutputInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_OUTPUTINT

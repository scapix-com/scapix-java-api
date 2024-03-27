// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class StringPrep; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::StringPrep>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/StringPrep";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/jdk/internal/icu/text/UCharacterIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::text::StringPrep : public jni::object_base<"jdk/internal/icu/text/StringPrep",
	java::lang::Object>
{
public:

	static jint DEFAULT() { return get_static_field<"DEFAULT", jint>(); }
	static jint ALLOW_UNASSIGNED() { return get_static_field<"ALLOW_UNASSIGNED", jint>(); }

	static jni::ref<jdk::internal::icu::text::StringPrep> new_object(jni::ref<java::io::InputStream> inputStream) { return base_::new_object(inputStream); }
	jni::ref<java::lang::StringBuffer> prepare(jni::ref<jdk::internal::icu::text::UCharacterIterator> src, jint options) { return call_method<"prepare", jni::ref<java::lang::StringBuffer>>(src, options); }

protected:

	StringPrep(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP
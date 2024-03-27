// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/IllegalFormatException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class MissingFormatArgumentException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::MissingFormatArgumentException>
{
	static constexpr fixed_string class_name = "java/util/MissingFormatArgumentException";
	using base_classes = std::tuple<scapix::java_api::java::util::IllegalFormatException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::MissingFormatArgumentException : public jni::object_base<"java/util/MissingFormatArgumentException",
	java::util::IllegalFormatException>
{
public:

	static jni::ref<java::util::MissingFormatArgumentException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getFormatSpecifier() { return call_method<"getFormatSpecifier", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	MissingFormatArgumentException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION

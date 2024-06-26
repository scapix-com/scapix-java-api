// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLEFLAGS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLEFLAGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class FormattableFlags; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::FormattableFlags>
{
	static constexpr fixed_string class_name = "java/util/FormattableFlags";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLEFLAGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLEFLAGS)
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLEFLAGS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::FormattableFlags : public jni::object_base<"java/util/FormattableFlags",
	java::lang::Object>
{
public:

	static jint LEFT_JUSTIFY() { return get_static_field<"LEFT_JUSTIFY", jint>(); }
	static jint UPPERCASE() { return get_static_field<"UPPERCASE", jint>(); }
	static jint ALTERNATE() { return get_static_field<"ALTERNATE", jint>(); }


protected:

	FormattableFlags(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLEFLAGS

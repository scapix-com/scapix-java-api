// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_CONSTRAINTSPARAMETERS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_CONSTRAINTSPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ConstraintsParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ConstraintsParameters>
{
	static constexpr fixed_string class_name = "sun/security/util/ConstraintsParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_CONSTRAINTSPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_CONSTRAINTSPARAMETERS)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_CONSTRAINTSPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::ConstraintsParameters : public jni::object_base<"sun/security/util/ConstraintsParameters",
	java::lang::Object>
{
public:

	jboolean anchorIsJdkCA() { return call_method<"anchorIsJdkCA", jboolean>(); }
	jni::ref<java::util::Set> getKeys() { return call_method<"getKeys", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Date> getDate() { return call_method<"getDate", jni::ref<java::util::Date>>(); }
	jni::ref<java::lang::String> getVariant() { return call_method<"getVariant", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> extendedExceptionMsg() { return call_method<"extendedExceptionMsg", jni::ref<java::lang::String>>(); }

protected:

	ConstraintsParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_CONSTRAINTSPARAMETERS

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_SMALLVALUE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_SMALLVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util::math { class SmallValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::math::SmallValue>
{
	static constexpr fixed_string class_name = "sun/security/util/math/SmallValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_SMALLVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_SMALLVALUE)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_SMALLVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::math::SmallValue : public jni::object_base<"sun/security/util/math/SmallValue",
	java::lang::Object>
{
public:


protected:

	SmallValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_SMALLVALUE
// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_LENGTH_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_LENGTH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class Length; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::Length>
{
	static constexpr fixed_string class_name = "sun/security/util/Length";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_LENGTH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_LENGTH)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_LENGTH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::Length : public jni::object_base<"sun/security/util/Length",
	java::lang::Object>
{
public:

	jint length() { return call_method<"length", jint>(); }

protected:

	Length(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_LENGTH

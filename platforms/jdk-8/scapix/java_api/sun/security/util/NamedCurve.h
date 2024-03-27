// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/spec/ECParameterSpec.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_NAMEDCURVE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_NAMEDCURVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class NamedCurve; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::NamedCurve>
{
	static constexpr fixed_string class_name = "sun/security/util/NamedCurve";
	using base_classes = std::tuple<scapix::java_api::java::security::spec::ECParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_NAMEDCURVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_NAMEDCURVE)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_NAMEDCURVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::NamedCurve : public jni::object_base<"sun/security/util/NamedCurve",
	java::security::spec::ECParameterSpec>
{
public:

	jni::ref<jni::array<java::lang::String>> getNameAndAliases() { return call_method<"getNameAndAliases", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getObjectId() { return call_method<"getObjectId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NamedCurve(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_NAMEDCURVE
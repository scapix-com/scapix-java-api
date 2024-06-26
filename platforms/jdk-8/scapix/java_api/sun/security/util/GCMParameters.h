// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/AlgorithmParametersSpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_GCMPARAMETERS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_GCMPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class GCMParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::GCMParameters>
{
	static constexpr fixed_string class_name = "sun/security/util/GCMParameters";
	using base_classes = std::tuple<scapix::java_api::java::security::AlgorithmParametersSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_GCMPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_GCMPARAMETERS)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_GCMPARAMETERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::GCMParameters : public jni::object_base<"sun/security/util/GCMParameters",
	java::security::AlgorithmParametersSpi>
{
public:

	static jni::ref<sun::security::util::GCMParameters> new_object() { return base_::new_object(); }

protected:

	GCMParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_GCMPARAMETERS

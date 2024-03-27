// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JCA_SERVICEID_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_SERVICEID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jca { class ServiceId; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jca::ServiceId>
{
	static constexpr fixed_string class_name = "sun/security/jca/ServiceId";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_SERVICEID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JCA_SERVICEID)
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_SERVICEID

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::jca::ServiceId : public jni::object_base<"sun/security/jca/ServiceId",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> type() { return get_field<"type", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> algorithm() { return get_field<"algorithm", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::jca::ServiceId> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	ServiceId(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_SERVICEID

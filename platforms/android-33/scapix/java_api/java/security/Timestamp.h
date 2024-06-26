// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_TIMESTAMP_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_TIMESTAMP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Timestamp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Timestamp>
{
	static constexpr fixed_string class_name = "java/security/Timestamp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_TIMESTAMP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_TIMESTAMP)
#define SCAPIX_JAVA_API_JAVA_SECURITY_TIMESTAMP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/CertPath.h>
#include <scapix/java_api/java/util/Date.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::Timestamp : public jni::object_base<"java/security/Timestamp",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::security::Timestamp> new_object(jni::ref<java::util::Date> timestamp, jni::ref<java::security::cert::CertPath> signerCertPath) { return base_::new_object(timestamp, signerCertPath); }
	jni::ref<java::util::Date> getTimestamp() { return call_method<"getTimestamp", jni::ref<java::util::Date>>(); }
	jni::ref<java::security::cert::CertPath> getSignerCertPath() { return call_method<"getSignerCertPath", jni::ref<java::security::cert::CertPath>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Timestamp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_TIMESTAMP

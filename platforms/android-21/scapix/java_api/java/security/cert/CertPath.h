// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTPATH_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTPATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class CertPath; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::CertPath>
{
	static constexpr fixed_string class_name = "java/security/cert/CertPath";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTPATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTPATH)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTPATH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::CertPath : public jni::object_base<"java/security/cert/CertPath",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getCertificates() { return call_method<"getCertificates", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getEncoded(jni::ref<java::lang::String> p1) { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<java::util::Iterator> getEncodings() { return call_method<"getEncodings", jni::ref<java::util::Iterator>>(); }

protected:

	CertPath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTPATH
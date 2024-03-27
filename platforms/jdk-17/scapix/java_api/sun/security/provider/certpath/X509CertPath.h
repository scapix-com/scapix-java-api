// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/CertPath.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_X509CERTPATH_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_X509CERTPATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class X509CertPath; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::X509CertPath>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/X509CertPath";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::CertPath>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_X509CERTPATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_X509CERTPATH)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_X509CERTPATH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::X509CertPath : public jni::object_base<"sun/security/provider/certpath/X509CertPath",
	java::security::cert::CertPath>
{
public:

	static jni::ref<sun::security::provider::certpath::X509CertPath> new_object(jni::ref<java::util::List> certs) { return base_::new_object(certs); }
	static jni::ref<sun::security::provider::certpath::X509CertPath> new_object(jni::ref<java::io::InputStream> is) { return base_::new_object(is); }
	static jni::ref<sun::security::provider::certpath::X509CertPath> new_object(jni::ref<java::io::InputStream> is, jni::ref<java::lang::String> encoding) { return base_::new_object(is, encoding); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getEncoded(jni::ref<java::lang::String> encoding) { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(encoding); }
	static jni::ref<java::util::Iterator> getEncodingsStatic() { return call_static_method<"getEncodingsStatic", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Iterator> getEncodings() { return call_method<"getEncodings", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::List> getCertificates() { return call_method<"getCertificates", jni::ref<java::util::List>>(); }

protected:

	X509CertPath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_X509CERTPATH

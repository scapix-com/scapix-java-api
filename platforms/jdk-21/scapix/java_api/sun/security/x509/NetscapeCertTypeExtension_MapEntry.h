// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_NETSCAPECERTTYPEEXTENSION_MAPENTRY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_NETSCAPECERTTYPEEXTENSION_MAPENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class NetscapeCertTypeExtension_MapEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::NetscapeCertTypeExtension_MapEntry>
{
	static constexpr fixed_string class_name = "sun/security/x509/NetscapeCertTypeExtension$MapEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_NETSCAPECERTTYPEEXTENSION_MAPENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_NETSCAPECERTTYPEEXTENSION_MAPENTRY)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_NETSCAPECERTTYPEEXTENSION_MAPENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::x509::NetscapeCertTypeExtension_MapEntry : public jni::object_base<"sun/security/x509/NetscapeCertTypeExtension$MapEntry",
	java::lang::Object>
{
public:


protected:

	NetscapeCertTypeExtension_MapEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_NETSCAPECERTTYPEEXTENSION_MAPENTRY

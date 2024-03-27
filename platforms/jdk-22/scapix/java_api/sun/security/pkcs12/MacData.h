// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_MACDATA_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_MACDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs12 { class MacData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs12::MacData>
{
	static constexpr fixed_string class_name = "sun/security/pkcs12/MacData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_MACDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_MACDATA)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_MACDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::pkcs12::MacData : public jni::object_base<"sun/security/pkcs12/MacData",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }

protected:

	MacData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_MACDATA

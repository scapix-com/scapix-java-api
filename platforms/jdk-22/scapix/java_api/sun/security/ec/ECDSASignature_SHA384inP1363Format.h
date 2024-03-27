// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ec/ECDSASignature.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA384INP1363FORMAT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA384INP1363FORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class ECDSASignature_SHA384inP1363Format; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ECDSASignature_SHA384inP1363Format>
{
	static constexpr fixed_string class_name = "sun/security/ec/ECDSASignature$SHA384inP1363Format";
	using base_classes = std::tuple<scapix::java_api::sun::security::ec::ECDSASignature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA384INP1363FORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA384INP1363FORMAT)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA384INP1363FORMAT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ECDSASignature_SHA384inP1363Format : public jni::object_base<"sun/security/ec/ECDSASignature$SHA384inP1363Format",
	sun::security::ec::ECDSASignature>
{
public:

	static jni::ref<sun::security::ec::ECDSASignature_SHA384inP1363Format> new_object() { return base_::new_object(); }

protected:

	ECDSASignature_SHA384inP1363Format(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA384INP1363FORMAT
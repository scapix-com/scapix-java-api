// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ec/ECDSASignature.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA3_512_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA3_512_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class ECDSASignature_SHA3_512; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ECDSASignature_SHA3_512>
{
	static constexpr fixed_string class_name = "sun/security/ec/ECDSASignature$SHA3_512";
	using base_classes = std::tuple<scapix::java_api::sun::security::ec::ECDSASignature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA3_512_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA3_512)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA3_512

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ECDSASignature_SHA3_512 : public jni::object_base<"sun/security/ec/ECDSASignature$SHA3_512",
	sun::security::ec::ECDSASignature>
{
public:

	static jni::ref<sun::security::ec::ECDSASignature_SHA3_512> new_object() { return base_::new_object(); }

protected:

	ECDSASignature_SHA3_512(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_SHA3_512

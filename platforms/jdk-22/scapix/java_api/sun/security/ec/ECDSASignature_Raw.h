// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ec/ECDSASignature_RawECDSA.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_RAW_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_RAW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class ECDSASignature_Raw; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ECDSASignature_Raw>
{
	static constexpr fixed_string class_name = "sun/security/ec/ECDSASignature$Raw";
	using base_classes = std::tuple<scapix::java_api::sun::security::ec::ECDSASignature_RawECDSA>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_RAW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_RAW)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_RAW

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ECDSASignature_Raw : public jni::object_base<"sun/security/ec/ECDSASignature$Raw",
	sun::security::ec::ECDSASignature_RawECDSA>
{
public:

	static jni::ref<sun::security::ec::ECDSASignature_Raw> new_object() { return base_::new_object(); }

protected:

	ECDSASignature_Raw(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSASIGNATURE_RAW

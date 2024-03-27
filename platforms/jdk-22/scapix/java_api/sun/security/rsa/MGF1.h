// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_RSA_MGF1_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_MGF1_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::rsa { class MGF1; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::rsa::MGF1>
{
	static constexpr fixed_string class_name = "sun/security/rsa/MGF1";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_MGF1_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_RSA_MGF1)
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_MGF1

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::rsa::MGF1 : public jni::object_base<"sun/security/rsa/MGF1",
	java::lang::Object>
{
public:


protected:

	MGF1(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_MGF1

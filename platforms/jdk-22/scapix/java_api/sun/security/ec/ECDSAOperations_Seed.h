// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_SEED_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_SEED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class ECDSAOperations_Seed; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ECDSAOperations_Seed>
{
	static constexpr fixed_string class_name = "sun/security/ec/ECDSAOperations$Seed";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_SEED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_SEED)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_SEED

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ECDSAOperations_Seed : public jni::object_base<"sun/security/ec/ECDSAOperations$Seed",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::ec::ECDSAOperations_Seed> new_object(jni::ref<jni::array<jbyte>> seedValue) { return base_::new_object(seedValue); }
	jni::ref<jni::array<jbyte>> getSeedValue() { return call_method<"getSeedValue", jni::ref<jni::array<jbyte>>>(); }

protected:

	ECDSAOperations_Seed(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_SEED

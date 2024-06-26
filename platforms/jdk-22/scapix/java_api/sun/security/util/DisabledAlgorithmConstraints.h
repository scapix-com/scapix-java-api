// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/util/AbstractAlgorithmConstraints.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DISABLEDALGORITHMCONSTRAINTS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DISABLEDALGORITHMCONSTRAINTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class DisabledAlgorithmConstraints; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::DisabledAlgorithmConstraints>
{
	static constexpr fixed_string class_name = "sun/security/util/DisabledAlgorithmConstraints";
	using base_classes = std::tuple<scapix::java_api::sun::security::util::AbstractAlgorithmConstraints>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DISABLEDALGORITHMCONSTRAINTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DISABLEDALGORITHMCONSTRAINTS)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DISABLEDALGORITHMCONSTRAINTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/security/util/AlgorithmDecomposer.h>
#include <scapix/java_api/sun/security/util/ConstraintsParameters.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::DisabledAlgorithmConstraints : public jni::object_base<"sun/security/util/DisabledAlgorithmConstraints",
	sun::security::util::AbstractAlgorithmConstraints>
{
public:

	static jni::ref<java::lang::String> PROPERTY_CERTPATH_DISABLED_ALGS() { return get_static_field<"PROPERTY_CERTPATH_DISABLED_ALGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_SECURITY_LEGACY_ALGS() { return get_static_field<"PROPERTY_SECURITY_LEGACY_ALGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_TLS_DISABLED_ALGS() { return get_static_field<"PROPERTY_TLS_DISABLED_ALGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_JAR_DISABLED_ALGS() { return get_static_field<"PROPERTY_JAR_DISABLED_ALGS", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::util::DisabledAlgorithmConstraints> certPathConstraints() { return call_static_method<"certPathConstraints", jni::ref<sun::security::util::DisabledAlgorithmConstraints>>(); }
	static jni::ref<sun::security::util::DisabledAlgorithmConstraints> jarConstraints() { return call_static_method<"jarConstraints", jni::ref<sun::security::util::DisabledAlgorithmConstraints>>(); }
	static jni::ref<sun::security::util::DisabledAlgorithmConstraints> new_object(jni::ref<java::lang::String> propertyName) { return base_::new_object(propertyName); }
	static jni::ref<sun::security::util::DisabledAlgorithmConstraints> new_object(jni::ref<java::lang::String> propertyName, jni::ref<sun::security::util::AlgorithmDecomposer> decomposer) { return base_::new_object(propertyName, decomposer); }
	jboolean permits(jni::ref<java::util::Set> primitives, jni::ref<java::lang::String> algorithm, jni::ref<java::security::AlgorithmParameters> parameters) { return call_method<"permits", jboolean>(primitives, algorithm, parameters); }
	jboolean permits(jni::ref<java::util::Set> primitives, jni::ref<java::security::Key> key) { return call_method<"permits", jboolean>(primitives, key); }
	jboolean permits(jni::ref<java::util::Set> primitives, jni::ref<java::lang::String> algorithm, jni::ref<java::security::Key> key, jni::ref<java::security::AlgorithmParameters> parameters) { return call_method<"permits", jboolean>(primitives, algorithm, key, parameters); }
	void permits(jni::ref<java::lang::String> algorithm, jni::ref<java::security::AlgorithmParameters> ap, jni::ref<sun::security::util::ConstraintsParameters> cp, jboolean checkKey) { return call_method<"permits", void>(algorithm, ap, cp, checkKey); }
	void permits(jni::ref<java::security::AlgorithmParameters> ap, jni::ref<sun::security::util::ConstraintsParameters> cp) { return call_method<"permits", void>(ap, cp); }
	void permits(jni::ref<java::lang::String> algorithm, jni::ref<sun::security::util::ConstraintsParameters> cp, jboolean checkKey) { return call_method<"permits", void>(algorithm, cp, checkKey); }

protected:

	DisabledAlgorithmConstraints(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DISABLEDALGORITHMCONSTRAINTS

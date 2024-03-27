// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPARAMETERS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::ed { class EdDSAParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ed::EdDSAParameters>
{
	static constexpr fixed_string class_name = "sun/security/ec/ed/EdDSAParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPARAMETERS)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/java/security/spec/EdDSAParameterSpec.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/sun/security/ec/ed/EdDSAParameters_Digester.h>
#include <scapix/java_api/sun/security/ec/ed/EdDSAParameters_DigesterFactory.h>
#include <scapix/java_api/sun/security/ec/ed/EdECOperations.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#include <scapix/java_api/sun/security/util/math/ImmutableIntegerModuloP.h>
#include <scapix/java_api/sun/security/util/math/IntegerFieldModuloP.h>
#include <scapix/java_api/sun/security/x509/AlgorithmId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ed::EdDSAParameters : public jni::object_base<"sun/security/ec/ed/EdDSAParameters",
	java::lang::Object>
{
public:

	using DigesterFactory = EdDSAParameters_DigesterFactory;
	using Digester = EdDSAParameters_Digester;

	static jni::ref<sun::security::ec::ed::EdDSAParameters> new_object(jni::ref<java::lang::String> name, jni::ref<sun::security::util::ObjectIdentifier> oid, jni::ref<sun::security::util::math::IntegerFieldModuloP> field, jni::ref<sun::security::util::math::IntegerFieldModuloP> orderField, jni::ref<sun::security::util::math::ImmutableIntegerModuloP> d, jni::ref<sun::security::ec::ed::EdECOperations> edOps, jni::ref<sun::security::ec::ed::EdDSAParameters_DigesterFactory> digester, jni::ref<java::util::function::Function> dom, jint keyLength, jint bits, jint logCofactor) { return base_::new_object(name, oid, field, orderField, d, edOps, digester, dom, keyLength, bits, logCofactor); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<sun::security::util::ObjectIdentifier> getOid() { return call_method<"getOid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	jni::ref<sun::security::util::math::IntegerFieldModuloP> getField() { return call_method<"getField", jni::ref<sun::security::util::math::IntegerFieldModuloP>>(); }
	jni::ref<sun::security::util::math::IntegerFieldModuloP> getOrderField() { return call_method<"getOrderField", jni::ref<sun::security::util::math::IntegerFieldModuloP>>(); }
	jni::ref<sun::security::util::math::ImmutableIntegerModuloP> getD() { return call_method<"getD", jni::ref<sun::security::util::math::ImmutableIntegerModuloP>>(); }
	jni::ref<sun::security::ec::ed::EdECOperations> getEdOperations() { return call_method<"getEdOperations", jni::ref<sun::security::ec::ed::EdECOperations>>(); }
	jint getKeyLength() { return call_method<"getKeyLength", jint>(); }
	jint getBits() { return call_method<"getBits", jint>(); }
	jint getLogCofactor() { return call_method<"getLogCofactor", jint>(); }
	jni::ref<sun::security::ec::ed::EdDSAParameters_Digester> createDigester() { return call_method<"createDigester", jni::ref<sun::security::ec::ed::EdDSAParameters_Digester>>(); }
	jni::ref<sun::security::ec::ed::EdDSAParameters_Digester> createDigester(jint len) { return call_method<"createDigester", jni::ref<sun::security::ec::ed::EdDSAParameters_Digester>>(len); }
	jni::ref<jni::array<jbyte>> digest(jni::ref<jni::array<jni::array<jbyte>>> data) { return call_method<"digest", jni::ref<jni::array<jbyte>>>(data); }
	jni::ref<jni::array<jbyte>> dom(jni::ref<java::security::spec::EdDSAParameterSpec> sigParams) { return call_method<"dom", jni::ref<jni::array<jbyte>>>(sigParams); }
	static jni::ref<sun::security::ec::ed::EdDSAParameters> getBySize(jni::ref<java::util::function::Function> exception, jint size) { return call_static_method<"getBySize", jni::ref<sun::security::ec::ed::EdDSAParameters>>(exception, size); }
	static jni::ref<sun::security::ec::ed::EdDSAParameters> get(jni::ref<java::util::function::Function> exception, jni::ref<sun::security::x509::AlgorithmId> algId) { return call_static_method<"get", jni::ref<sun::security::ec::ed::EdDSAParameters>>(exception, algId); }
	static jni::ref<sun::security::ec::ed::EdDSAParameters> get(jni::ref<java::util::function::Function> exception, jni::ref<java::security::spec::AlgorithmParameterSpec> params) { return call_static_method<"get", jni::ref<sun::security::ec::ed::EdDSAParameters>>(exception, params); }

protected:

	EdDSAParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPARAMETERS
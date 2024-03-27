// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class NamedGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::NamedGroup>
{
	static constexpr fixed_string class_name = "sun/security/ssl/NamedGroup";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::NamedGroup : public jni::object_base<"sun/security/ssl/NamedGroup",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::NamedGroup> SECT163_K1() { return get_static_field<"SECT163_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT163_R1() { return get_static_field<"SECT163_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT163_R2() { return get_static_field<"SECT163_R2", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT193_R1() { return get_static_field<"SECT193_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT193_R2() { return get_static_field<"SECT193_R2", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT233_K1() { return get_static_field<"SECT233_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT233_R1() { return get_static_field<"SECT233_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT239_K1() { return get_static_field<"SECT239_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT283_K1() { return get_static_field<"SECT283_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT283_R1() { return get_static_field<"SECT283_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT409_K1() { return get_static_field<"SECT409_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT409_R1() { return get_static_field<"SECT409_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT571_K1() { return get_static_field<"SECT571_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECT571_R1() { return get_static_field<"SECT571_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP160_K1() { return get_static_field<"SECP160_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP160_R1() { return get_static_field<"SECP160_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP160_R2() { return get_static_field<"SECP160_R2", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP192_K1() { return get_static_field<"SECP192_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP192_R1() { return get_static_field<"SECP192_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP224_K1() { return get_static_field<"SECP224_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP224_R1() { return get_static_field<"SECP224_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP256_K1() { return get_static_field<"SECP256_K1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP256_R1() { return get_static_field<"SECP256_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP384_R1() { return get_static_field<"SECP384_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> SECP521_R1() { return get_static_field<"SECP521_R1", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> X25519() { return get_static_field<"X25519", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> X448() { return get_static_field<"X448", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> FFDHE_2048() { return get_static_field<"FFDHE_2048", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> FFDHE_3072() { return get_static_field<"FFDHE_3072", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> FFDHE_4096() { return get_static_field<"FFDHE_4096", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> FFDHE_6144() { return get_static_field<"FFDHE_6144", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> FFDHE_8192() { return get_static_field<"FFDHE_8192", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> ARBITRARY_PRIME() { return get_static_field<"ARBITRARY_PRIME", jni::ref<sun::security::ssl::NamedGroup>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> ARBITRARY_CHAR2() { return get_static_field<"ARBITRARY_CHAR2", jni::ref<sun::security::ssl::NamedGroup>>(); }

	static jni::ref<jni::array<sun::security::ssl::NamedGroup>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::NamedGroup>>>(); }
	static jni::ref<sun::security::ssl::NamedGroup> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::NamedGroup>>(name); }
	static jni::ref<java::util::List> namesOf(jni::ref<jni::array<java::lang::String>> namedGroups) { return call_static_method<"namesOf", jni::ref<java::util::List>>(namedGroups); }

protected:

	NamedGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP

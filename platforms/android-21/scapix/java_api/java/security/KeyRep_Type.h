// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_KEYREP_TYPE_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYREP_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class KeyRep_Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::KeyRep_Type>
{
	static constexpr fixed_string class_name = "java/security/KeyRep$Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYREP_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_KEYREP_TYPE)
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYREP_TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::KeyRep_Type : public jni::object_base<"java/security/KeyRep$Type",
	java::lang::Enum>
{
public:

	static jni::ref<java::security::KeyRep_Type> PRIVATE() { return get_static_field<"PRIVATE", jni::ref<java::security::KeyRep_Type>>(); }
	static jni::ref<java::security::KeyRep_Type> PUBLIC() { return get_static_field<"PUBLIC", jni::ref<java::security::KeyRep_Type>>(); }
	static jni::ref<java::security::KeyRep_Type> SECRET() { return get_static_field<"SECRET", jni::ref<java::security::KeyRep_Type>>(); }

	static jni::ref<jni::array<java::security::KeyRep_Type>> values() { return call_static_method<"values", jni::ref<jni::array<java::security::KeyRep_Type>>>(); }
	static jni::ref<java::security::KeyRep_Type> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::security::KeyRep_Type>>(name); }

protected:

	KeyRep_Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYREP_TYPE

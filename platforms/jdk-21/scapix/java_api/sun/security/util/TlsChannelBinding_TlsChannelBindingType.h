// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_TLSCHANNELBINDING_TLSCHANNELBINDINGTYPE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_TLSCHANNELBINDING_TLSCHANNELBINDINGTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class TlsChannelBinding_TlsChannelBindingType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::TlsChannelBinding_TlsChannelBindingType>
{
	static constexpr fixed_string class_name = "sun/security/util/TlsChannelBinding$TlsChannelBindingType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_TLSCHANNELBINDING_TLSCHANNELBINDINGTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_TLSCHANNELBINDING_TLSCHANNELBINDINGTYPE)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_TLSCHANNELBINDING_TLSCHANNELBINDINGTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::TlsChannelBinding_TlsChannelBindingType : public jni::object_base<"sun/security/util/TlsChannelBinding$TlsChannelBindingType",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::util::TlsChannelBinding_TlsChannelBindingType> TLS_UNIQUE() { return get_static_field<"TLS_UNIQUE", jni::ref<sun::security::util::TlsChannelBinding_TlsChannelBindingType>>(); }
	static jni::ref<sun::security::util::TlsChannelBinding_TlsChannelBindingType> TLS_SERVER_END_POINT() { return get_static_field<"TLS_SERVER_END_POINT", jni::ref<sun::security::util::TlsChannelBinding_TlsChannelBindingType>>(); }

	static jni::ref<jni::array<sun::security::util::TlsChannelBinding_TlsChannelBindingType>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::util::TlsChannelBinding_TlsChannelBindingType>>>(); }
	static jni::ref<sun::security::util::TlsChannelBinding_TlsChannelBindingType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::util::TlsChannelBinding_TlsChannelBindingType>>(name); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	TlsChannelBinding_TlsChannelBindingType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_TLSCHANNELBINDING_TLSCHANNELBINDINGTYPE
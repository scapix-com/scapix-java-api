// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_RULE_TYPE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_RULE_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class DomainName_Rule_Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::DomainName_Rule_Type>
{
	static constexpr fixed_string class_name = "sun/security/util/DomainName$Rule$Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_RULE_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_RULE_TYPE)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_RULE_TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::DomainName_Rule_Type : public jni::object_base<"sun/security/util/DomainName$Rule$Type",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::util::DomainName_Rule_Type> EXCEPTION() { return get_static_field<"EXCEPTION", jni::ref<sun::security::util::DomainName_Rule_Type>>(); }
	static jni::ref<sun::security::util::DomainName_Rule_Type> NORMAL() { return get_static_field<"NORMAL", jni::ref<sun::security::util::DomainName_Rule_Type>>(); }
	static jni::ref<sun::security::util::DomainName_Rule_Type> OTHER() { return get_static_field<"OTHER", jni::ref<sun::security::util::DomainName_Rule_Type>>(); }
	static jni::ref<sun::security::util::DomainName_Rule_Type> WILDCARD() { return get_static_field<"WILDCARD", jni::ref<sun::security::util::DomainName_Rule_Type>>(); }

	static jni::ref<jni::array<sun::security::util::DomainName_Rule_Type>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::util::DomainName_Rule_Type>>>(); }
	static jni::ref<sun::security::util::DomainName_Rule_Type> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::util::DomainName_Rule_Type>>(name); }

protected:

	DomainName_Rule_Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_RULE_TYPE

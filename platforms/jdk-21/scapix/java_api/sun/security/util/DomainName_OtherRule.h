// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/util/DomainName_Rule.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_OTHERRULE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_OTHERRULE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class DomainName_OtherRule; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::DomainName_OtherRule>
{
	static constexpr fixed_string class_name = "sun/security/util/DomainName$OtherRule";
	using base_classes = std::tuple<scapix::java_api::sun::security::util::DomainName_Rule>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_OTHERRULE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_OTHERRULE)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_OTHERRULE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::DomainName_OtherRule : public jni::object_base<"sun/security/util/DomainName$OtherRule",
	sun::security::util::DomainName_Rule>
{
public:


protected:

	DomainName_OtherRule(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_OTHERRULE

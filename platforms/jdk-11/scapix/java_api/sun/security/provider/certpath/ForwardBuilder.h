// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/certpath/Builder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDBUILDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class ForwardBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::ForwardBuilder>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/ForwardBuilder";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::certpath::Builder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDBUILDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDBUILDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::certpath::ForwardBuilder : public jni::object_base<"sun/security/provider/certpath/ForwardBuilder",
	sun::security::provider::certpath::Builder>
{
public:


protected:

	ForwardBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDBUILDER
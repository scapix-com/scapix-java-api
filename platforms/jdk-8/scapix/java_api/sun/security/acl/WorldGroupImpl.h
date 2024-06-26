// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/acl/GroupImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_ACL_WORLDGROUPIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_ACL_WORLDGROUPIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::acl { class WorldGroupImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::acl::WorldGroupImpl>
{
	static constexpr fixed_string class_name = "sun/security/acl/WorldGroupImpl";
	using base_classes = std::tuple<scapix::java_api::sun::security::acl::GroupImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACL_WORLDGROUPIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_ACL_WORLDGROUPIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_ACL_WORLDGROUPIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::acl::WorldGroupImpl : public jni::object_base<"sun/security/acl/WorldGroupImpl",
	sun::security::acl::GroupImpl>
{
public:

	static jni::ref<sun::security::acl::WorldGroupImpl> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean isMember(jni::ref<java::security::Principal> p1) { return call_method<"isMember", jboolean>(p1); }

protected:

	WorldGroupImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACL_WORLDGROUPIMPL

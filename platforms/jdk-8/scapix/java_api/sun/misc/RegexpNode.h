// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_REGEXPNODE_FWD
#define SCAPIX_JAVA_API_SUN_MISC_REGEXPNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class RegexpNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::RegexpNode>
{
	static constexpr fixed_string class_name = "sun/misc/RegexpNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXPNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_REGEXPNODE)
#define SCAPIX_JAVA_API_SUN_MISC_REGEXPNODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::RegexpNode : public jni::object_base<"sun/misc/RegexpNode",
	java::lang::Object>
{
public:


protected:

	RegexpNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXPNODE
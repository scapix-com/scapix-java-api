// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKMODULEADAPTER_NAMESET_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKMODULEADAPTER_NAMESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class CheckModuleAdapter_NameSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::CheckModuleAdapter_NameSet>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKMODULEADAPTER_NAMESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKMODULEADAPTER_NAMESET)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKMODULEADAPTER_NAMESET

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::org::objectweb::asm_::util::CheckModuleAdapter_NameSet : public jni::object_base<"jdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet",
	java::lang::Object>
{
public:


protected:

	CheckModuleAdapter_NameSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKMODULEADAPTER_NAMESET

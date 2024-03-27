// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_COMPONENTDIRCONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_COMPONENTDIRCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::toolkit::ctx { class ComponentDirContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::toolkit::ctx::ComponentDirContext>
{
	static constexpr fixed_string class_name = "com/sun/jndi/toolkit/ctx/ComponentDirContext";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_COMPONENTDIRCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_COMPONENTDIRCONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_COMPONENTDIRCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::toolkit::ctx::ComponentDirContext : public jni::object_base<"com/sun/jndi/toolkit/ctx/ComponentDirContext",
	com::sun::jndi::toolkit::ctx::PartialCompositeDirContext>
{
public:


protected:

	ComponentDirContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_COMPONENTDIRCONTEXT

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_BASEFLATNAMES_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_BASEFLATNAMES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::toolkit::dir { class HierMemDirCtx_BaseFlatNames; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::toolkit::dir::HierMemDirCtx_BaseFlatNames>
{
	static constexpr fixed_string class_name = "com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::NamingEnumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_BASEFLATNAMES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_BASEFLATNAMES)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_BASEFLATNAMES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::toolkit::dir::HierMemDirCtx_BaseFlatNames : public jni::object_base<"com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames",
	java::lang::Object,
	javax::naming::NamingEnumeration>
{
public:

	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jboolean hasMore() { return call_method<"hasMore", jboolean>(); }
	jni::ref<java::lang::Object> nextElement() { return call_method<"nextElement", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	HierMemDirCtx_BaseFlatNames(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_BASEFLATNAMES

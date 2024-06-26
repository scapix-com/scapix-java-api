// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/toolkit/dir/HierMemDirCtx_BaseFlatNames.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_FLATBINDINGS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_FLATBINDINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::toolkit::dir { class HierMemDirCtx_FlatBindings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::toolkit::dir::HierMemDirCtx_FlatBindings>
{
	static constexpr fixed_string class_name = "com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatBindings";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::toolkit::dir::HierMemDirCtx_BaseFlatNames>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_FLATBINDINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_FLATBINDINGS)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_FLATBINDINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/naming/Binding.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::toolkit::dir::HierMemDirCtx_FlatBindings : public jni::object_base<"com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatBindings",
	com::sun::jndi::toolkit::dir::HierMemDirCtx_BaseFlatNames>
{
public:

	jni::ref<javax::naming::Binding> next() { return call_method<"next", jni::ref<javax::naming::Binding>>(); }

protected:

	HierMemDirCtx_FlatBindings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_HIERMEMDIRCTX_FLATBINDINGS

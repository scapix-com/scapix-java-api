// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jndi/toolkit/dir/SearchFilter_StringFilter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_ATOMICFILTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_ATOMICFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::toolkit::dir { class SearchFilter_AtomicFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::toolkit::dir::SearchFilter_AtomicFilter>
{
	static constexpr fixed_string class_name = "com/sun/jndi/toolkit/dir/SearchFilter$AtomicFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jndi::toolkit::dir::SearchFilter_StringFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_ATOMICFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_ATOMICFILTER)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_ATOMICFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/naming/directory/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::toolkit::dir::SearchFilter_AtomicFilter : public jni::object_base<"com/sun/jndi/toolkit/dir/SearchFilter$AtomicFilter",
	java::lang::Object,
	com::sun::jndi::toolkit::dir::SearchFilter_StringFilter>
{
public:

	void parse() { return call_method<"parse", void>(); }
	jboolean check(jni::ref<javax::naming::directory::Attributes> p1) { return call_method<"check", jboolean>(p1); }

protected:

	SearchFilter_AtomicFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_ATOMICFILTER
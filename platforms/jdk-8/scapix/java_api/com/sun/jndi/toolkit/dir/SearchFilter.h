// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jndi/toolkit/dir/AttrFilter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::toolkit::dir { class SearchFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::toolkit::dir::SearchFilter>
{
	static constexpr fixed_string class_name = "com/sun/jndi/toolkit/dir/SearchFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jndi::toolkit::dir::AttrFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/directory/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::toolkit::dir::SearchFilter : public jni::object_base<"com/sun/jndi/toolkit/dir/SearchFilter",
	java::lang::Object,
	com::sun::jndi::toolkit::dir::AttrFilter>
{
public:

	static jni::ref<com::sun::jndi::toolkit::dir::SearchFilter> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean check(jni::ref<javax::naming::directory::Attributes> p1) { return call_method<"check", jboolean>(p1); }
	static jni::ref<java::lang::String> format(jni::ref<javax::naming::directory::Attributes> p1) { return call_static_method<"format", jni::ref<java::lang::String>>(p1); }
	static jint findUnescaped(jchar p1, jni::ref<java::lang::String> p2, jint p3) { return call_static_method<"findUnescaped", jint>(p1, p2, p3); }
	static jni::ref<java::lang::String> format(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_static_method<"format", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<javax::naming::directory::Attributes> selectAttributes(jni::ref<javax::naming::directory::Attributes> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_static_method<"selectAttributes", jni::ref<javax::naming::directory::Attributes>>(p1, p2); }

protected:

	SearchFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_DIR_SEARCHFILTER
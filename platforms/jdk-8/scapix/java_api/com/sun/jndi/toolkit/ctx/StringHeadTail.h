// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_STRINGHEADTAIL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_STRINGHEADTAIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::toolkit::ctx { class StringHeadTail; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::toolkit::ctx::StringHeadTail>
{
	static constexpr fixed_string class_name = "com/sun/jndi/toolkit/ctx/StringHeadTail";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_STRINGHEADTAIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_STRINGHEADTAIL)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_STRINGHEADTAIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::toolkit::ctx::StringHeadTail : public jni::object_base<"com/sun/jndi/toolkit/ctx/StringHeadTail",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::jndi::toolkit::ctx::StringHeadTail> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::jndi::toolkit::ctx::StringHeadTail> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	void setStatus(jint p1) { return call_method<"setStatus", void>(p1); }
	jni::ref<java::lang::String> getHead() { return call_method<"getHead", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getTail() { return call_method<"getTail", jni::ref<java::lang::String>>(); }
	jint getStatus() { return call_method<"getStatus", jint>(); }

protected:

	StringHeadTail(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_TOOLKIT_CTX_STRINGHEADTAIL

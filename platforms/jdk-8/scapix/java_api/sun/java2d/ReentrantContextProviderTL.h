// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/ReentrantContextProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDERTL_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDERTL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d { class ReentrantContextProviderTL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::ReentrantContextProviderTL>
{
	static constexpr fixed_string class_name = "sun/java2d/ReentrantContextProviderTL";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::ReentrantContextProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDERTL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDERTL)
#define SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDERTL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/ReentrantContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::ReentrantContextProviderTL : public jni::object_base<"sun/java2d/ReentrantContextProviderTL",
	sun::java2d::ReentrantContextProvider>
{
public:

	static jni::ref<sun::java2d::ReentrantContextProviderTL> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::java2d::ReentrantContextProviderTL> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<sun::java2d::ReentrantContext> acquire() { return call_method<"acquire", jni::ref<sun::java2d::ReentrantContext>>(); }
	void release(jni::ref<sun::java2d::ReentrantContext> p1) { return call_method<"release", void>(p1); }

protected:

	ReentrantContextProviderTL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDERTL

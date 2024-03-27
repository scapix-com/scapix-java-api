// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d { class ReentrantContextProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::ReentrantContextProvider>
{
	static constexpr fixed_string class_name = "sun/java2d/ReentrantContextProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/ReentrantContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::ReentrantContextProvider : public jni::object_base<"sun/java2d/ReentrantContextProvider",
	java::lang::Object>
{
public:

	static jint REF_HARD() { return get_static_field<"REF_HARD", jint>(); }
	static jint REF_SOFT() { return get_static_field<"REF_SOFT", jint>(); }
	static jint REF_WEAK() { return get_static_field<"REF_WEAK", jint>(); }

	jni::ref<sun::java2d::ReentrantContext> acquire() { return call_method<"acquire", jni::ref<sun::java2d::ReentrantContext>>(); }
	void release(jni::ref<sun::java2d::ReentrantContext> p1) { return call_method<"release", void>(p1); }

protected:

	ReentrantContextProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_REENTRANTCONTEXTPROVIDER
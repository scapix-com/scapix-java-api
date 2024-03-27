// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERCACHE_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class RenderCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::RenderCache>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/RenderCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERCACHE)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERCACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/loops/CompositeType.h>
#include <scapix/java_api/sun/java2d/loops/SurfaceType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::RenderCache : public jni::object_base<"sun/java2d/loops/RenderCache",
	java::lang::Object>
{
public:

	static jni::ref<sun::java2d::loops::RenderCache> new_object(jint p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> get(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_method<"get", jni::ref<java::lang::Object>>(p1, p2, p3); }
	void put(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3, jni::ref<java::lang::Object> p4) { return call_method<"put", void>(p1, p2, p3, p4); }

protected:

	RenderCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERCACHE